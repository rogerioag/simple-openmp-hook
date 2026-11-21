/* Teste da libhookgomp.so (libgomp/GCC): laços doacross (ordered(n) com
 * doacross(sink/source)). GOMP_doacross_wait e GOMP_doacross_ull_wait são variádicas:
 * recebem n valores, onde n vem do GOMP_loop_*doacross*_start anterior.
 * O caso ordered(40) passa de HOOK_GOMP_SWITCH_MAX_ARGS e força o caminho via libffi. */
#include <omp.h>
#include <stdio.h>
#include <unistd.h>

#define N 64

static long grid[N][N];

int main(void) {
    int errors = 0;

    /* 1. ordered(2): frente de onda grid[i][j] = grid[i-1][j] + grid[i][j-1] */
    for (int i = 0; i < N; i++) grid[i][0] = grid[0][i] = 1;
    #pragma omp parallel for ordered(2) num_threads(4)
    for (int i = 1; i < N; i++)
        for (int j = 1; j < N; j++) {
            #pragma omp ordered doacross(sink: i - 1, j) doacross(sink: i, j - 1)
            grid[i][j] = (grid[i - 1][j] + grid[i][j - 1]) % 1000003;
            #pragma omp ordered doacross(source:)
        }
    long ref[N][N];
    for (int i = 0; i < N; i++) ref[i][0] = ref[0][i] = 1;
    for (int i = 1; i < N; i++)
        for (int j = 1; j < N; j++) ref[i][j] = (ref[i - 1][j] + ref[i][j - 1]) % 1000003;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (grid[i][j] != ref[i][j]) { errors++; i = j = N; printf("ERRO ordered(2)\n"); }

    /* 2. laço unsigned long long acima de LONG_MAX -> GOMP_doacross_ull_wait */
    const unsigned long long base = 1ULL << 63;
    long chain_ull[N] = {0};
    #pragma omp parallel for ordered(1) num_threads(4)
    for (unsigned long long u = base + 1; u < base + N; u++) {
        #pragma omp ordered doacross(sink: u - 1)
        chain_ull[u - base] = chain_ull[u - base - 1] + 1;
        #pragma omp ordered doacross(source:)
    }
    if (chain_ull[N - 1] != N - 1) { printf("ERRO ull: %ld\n", chain_ull[N - 1]); errors++; }

    /* 3. ordered(40): 40 valores por chamada de GOMP_doacross_wait */
    long chain[N] = {0};
    #pragma omp parallel for ordered(40) num_threads(4)
    for (int i = 1; i < N; i++)
            for (int j1 = 0; j1 < 1; j1++)
                for (int j2 = 0; j2 < 1; j2++)
                    for (int j3 = 0; j3 < 1; j3++)
                        for (int j4 = 0; j4 < 1; j4++)
                            for (int j5 = 0; j5 < 1; j5++)
                                for (int j6 = 0; j6 < 1; j6++)
                                    for (int j7 = 0; j7 < 1; j7++)
                                        for (int j8 = 0; j8 < 1; j8++)
                                            for (int j9 = 0; j9 < 1; j9++)
                                                for (int j10 = 0; j10 < 1; j10++)
                                                    for (int j11 = 0; j11 < 1; j11++)
                                                        for (int j12 = 0; j12 < 1; j12++)
                                                            for (int j13 = 0; j13 < 1; j13++)
                                                                for (int j14 = 0; j14 < 1; j14++)
                                                                    for (int j15 = 0; j15 < 1; j15++)
                                                                        for (int j16 = 0; j16 < 1; j16++)
                                                                            for (int j17 = 0; j17 < 1; j17++)
                                                                                for (int j18 = 0; j18 < 1; j18++)
                                                                                    for (int j19 = 0; j19 < 1; j19++)
                                                                                        for (int j20 = 0; j20 < 1; j20++)
                                                                                            for (int j21 = 0; j21 < 1; j21++)
                                                                                                for (int j22 = 0; j22 < 1; j22++)
                                                                                                    for (int j23 = 0; j23 < 1; j23++)
                                                                                                        for (int j24 = 0; j24 < 1; j24++)
                                                                                                            for (int j25 = 0; j25 < 1; j25++)
                                                                                                                for (int j26 = 0; j26 < 1; j26++)
                                                                                                                    for (int j27 = 0; j27 < 1; j27++)
                                                                                                                        for (int j28 = 0; j28 < 1; j28++)
                                                                                                                            for (int j29 = 0; j29 < 1; j29++)
                                                                                                                                for (int j30 = 0; j30 < 1; j30++)
                                                                                                                                    for (int j31 = 0; j31 < 1; j31++)
                                                                                                                                        for (int j32 = 0; j32 < 1; j32++)
                                                                                                                                            for (int j33 = 0; j33 < 1; j33++)
                                                                                                                                                for (int j34 = 0; j34 < 1; j34++)
                                                                                                                                                    for (int j35 = 0; j35 < 1; j35++)
                                                                                                                                                        for (int j36 = 0; j36 < 1; j36++)
                                                                                                                                                            for (int j37 = 0; j37 < 1; j37++)
                                                                                                                                                                for (int j38 = 0; j38 < 1; j38++)
                                                                                                                                                                    for (int j39 = 0; j39 < 1; j39++)
                                                                                                                                                                        {
                                                                                                                                                                            #pragma omp ordered doacross(sink: i - 1, j1, j2, j3, j4, j5, j6, j7, j8, j9, j10, j11, j12, j13, j14, j15, j16, j17, j18, j19, j20, j21, j22, j23, j24, j25, j26, j27, j28, j29, j30, j31, j32, j33, j34, j35, j36, j37, j38, j39)
                                                                                                                                                                            chain[i] = chain[i - 1] + 1;
                                                                                                                                                                            #pragma omp ordered doacross(source:)
                                                                                                                                                                        }
    if (chain[N - 1] != N - 1) { printf("ERRO ordered(40): %ld\n", chain[N - 1]); errors++; }

    /* 4. aninhado: o corpo de um ordered(8) abre uma região com um ordered(1).
     *    O wrapper de GOMP_parallel restaura o ncounts do laço externo; sem isso,
     *    o wait externo repassaria só 1 dos 8 índices e as dependências se perderiam.
     *    São 8 dimensões (6 de tamanho 1) para que parte dos índices vá pela pilha:
     *    no x86-64 os 6 primeiros vão em registradores e o erro poderia passar despercebido.
     *    O usleep entre o wait e a escrita faz uma dependência perdida dar resultado errado. */
    omp_set_max_active_levels(2);
    long outer[8][8] = {{0}}, inner_total = 0;
    #pragma omp parallel for ordered(8) num_threads(4) schedule(static, 1)
    for (int i = 1; i < 8; i++)
        for (int j = 1; j < 8; j++)
            for (int k3 = 0; k3 < 1; k3++)
            for (int k4 = 0; k4 < 1; k4++)
            for (int k5 = 0; k5 < 1; k5++)
            for (int k6 = 0; k6 < 1; k6++)
            for (int k7 = 0; k7 < 1; k7++)
            for (int k8 = 0; k8 < 1; k8++)
            {
                long inner[8] = {0};
                #pragma omp parallel for ordered(1) num_threads(2)
                for (int k = 1; k < 8; k++) {
                    #pragma omp ordered doacross(sink: k - 1)
                    inner[k] = inner[k - 1] + 1;
                    #pragma omp ordered doacross(source:)
                }
                #pragma omp ordered doacross(sink: i - 1, j, k3, k4, k5, k6, k7, k8) doacross(sink: i, j - 1, k3, k4, k5, k6, k7, k8)
                usleep(2000);
                outer[i][j] = outer[i - 1][j] + outer[i][j - 1] + 1;
                #pragma omp atomic
                inner_total += inner[7];
                #pragma omp ordered doacross(source:)
            }
    /* com bordas zeradas, outer[i][j] = C(i+j, i) - 1; outer[7][7] = C(14,7) - 1 */
    if (outer[7][7] != 3431 || inner_total != 49 * 7) {
        printf("ERRO aninhado: outer=%ld inner=%ld\n", outer[7][7], inner_total); errors++;
    }

    printf("%s\n", errors ? "FALHOU" : "OK: todos os resultados corretos");
    return errors != 0;
}
