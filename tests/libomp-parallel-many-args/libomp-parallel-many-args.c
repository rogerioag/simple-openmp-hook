/* Teste da libhookkmpc.so (libomp/Clang): regiões parallel e teams com poucas
 * e com muitas variáveis compartilhadas (acima de HOOK_KMPC_SWITCH_MAX_ARGS,
 * o que força o caminho via libffi), laços static/dynamic, critical e tasks. */
#include <omp.h>
#include <stdio.h>

#define N 1000

int main(void) {
    int errors = 0;

    /* 1. parallel com 40 variáveis compartilhadas -> __kmpc_fork_call(argc=40+) */
    int v00=1,v01=2,v02=3,v03=4,v04=5,v05=6,v06=7,v07=8,v08=9,v09=10,
        v10=11,v11=12,v12=13,v13=14,v14=15,v15=16,v16=17,v17=18,v18=19,v19=20,
        v20=21,v21=22,v22=23,v23=24,v24=25,v25=26,v26=27,v27=28,v28=29,v29=30,
        v30=31,v31=32,v32=33,v33=34,v34=35,v35=36,v36=37,v37=38,v38=39,v39=40;
    long many = 0;
    #pragma omp parallel num_threads(4) reduction(+:many)
    {
        many += v00+v01+v02+v03+v04+v05+v06+v07+v08+v09+v10+v11+v12+v13+v14+v15+v16+v17+v18+v19
              + v20+v21+v22+v23+v24+v25+v26+v27+v28+v29+v30+v31+v32+v33+v34+v35+v36+v37+v38+v39;
    }
    if (many != 4L * 820) { printf("ERRO parallel/40 args: %ld\n", many); errors++; }

    /* 2. parallel com poucas variáveis + laços static e dynamic + critical */
    int a[N]; long s_static = 0, s_dynamic = 0, s_critical = 0;
    #pragma omp parallel num_threads(4)
    {
        #pragma omp for schedule(static)
        for (int i = 0; i < N; i++) a[i] = i;

        #pragma omp for schedule(static) reduction(+:s_static)
        for (int i = 0; i < N; i++) s_static += a[i];

        #pragma omp for schedule(dynamic, 7) reduction(+:s_dynamic)
        for (int i = 0; i < N; i++) s_dynamic += a[i];

        #pragma omp critical
        s_critical += omp_get_thread_num() + 1;
    }
    long expected = (long) N * (N - 1) / 2;
    if (s_static != expected || s_dynamic != expected || s_critical != 10) {
        printf("ERRO laços: static=%ld dynamic=%ld critical=%ld\n", s_static, s_dynamic, s_critical);
        errors++;
    }

    /* 3. tasks */
    int tasks_done = 0;
    #pragma omp parallel num_threads(4)
    #pragma omp single
    {
        for (int i = 0; i < 16; i++) {
            #pragma omp task shared(tasks_done)
            {
                #pragma omp atomic
                tasks_done++;
            }
        }
        #pragma omp taskwait
    }
    if (tasks_done != 16) { printf("ERRO tasks: %d\n", tasks_done); errors++; }

    /* 4. teams com 40 variáveis compartilhadas -> __kmpc_fork_teams(argc=40+) */
    long teams_sum = 0;
    #pragma omp teams num_teams(2) reduction(+:teams_sum)
    {
        teams_sum += v00+v01+v02+v03+v04+v05+v06+v07+v08+v09+v10+v11+v12+v13+v14+v15+v16+v17+v18+v19
                   + v20+v21+v22+v23+v24+v25+v26+v27+v28+v29+v30+v31+v32+v33+v34+v35+v36+v37+v38+v39;
    }
    /* cada time soma 820; o número de times criados pode ser menor que num_teams */
    if (teams_sum <= 0 || teams_sum > 2L * 820 || teams_sum % 820 != 0) {
        printf("ERRO teams: %ld\n", teams_sum); errors++;
    }

    printf("%s\n", errors ? "FALHOU" : "OK: todos os resultados corretos");
    return errors != 0;
}
