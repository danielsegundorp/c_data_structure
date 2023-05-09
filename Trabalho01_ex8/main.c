#include <stdio.h>
#include <stdlib.h>
#define N 3

int main()
{
    int a[N][N], b[N][N], c[N][N]; // matrizes A, B e C
    int i, j, k; // variáveis de controle

    // leitura da matriz A
    printf("Matriz A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Digite o elemento (%d, %d): ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    // leitura da matriz B
    printf("Matriz B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Digite o elemento (%d, %d): ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

    // multiplicação das matrizes A e B
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            c[i][j] = 0;
            for (k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // verificação se a matriz C é a identidade
    int identidade = 1;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j && c[i][j] != 1) {
                identidade = 0;
            } else if (i != j && c[i][j] != 0) {
                identidade = 0;
            }
        }
    }

    // exibição do resultado
    if (identidade) {
        printf("As matrizes A e B sao inversas.\n");
    } else {
        printf("As matrizes A e B nao sao inversas.\n");
    }

    return 0;
}
