#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n;

    printf("Digite o numero de linhas para a matriz: ");
    scanf("%d", &n);

    printf("\nDigite o numero de colunas para a matriz: ");
    scanf("%d", &m);

    int mat[n][m];

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            mat[i][j] = 0;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
