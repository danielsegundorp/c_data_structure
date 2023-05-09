#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j, soma = 0;
    printf("Digite o numero de m linhas da matriz m: ");
    scanf("%d", &m);

    printf("\nDigite o numero de n colunas da matriz m: ");
    scanf("%d", &n);

    int mat[m][n];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite um numero para a posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < n; j++) {
                soma += mat[i][j];
            }
        }
    }


    printf("Soma = %d", soma);

    return 0;
}

