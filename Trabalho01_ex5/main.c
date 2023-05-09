#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    printf("Insira a ordem da matriz quadrada: ");
    scanf("%d", &n);
    if(n > 100){
        printf("Digite uma ordem da matriz inferior a 100, favor tentar novamente!\n");

        return 0;
    }

    int matriz[n][n];

    // lendo os valores da matriz
    printf("\nInsira os valores da Matriz A:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // imprimindo a matriz
    printf("\nMatriz A:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // imprimindo a transposta da matriz
    printf("\nMatriz Transporta de A:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}
