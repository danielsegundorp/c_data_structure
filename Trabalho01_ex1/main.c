#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

int main()
{
    int i, j;
    int k;
    int mat [L][C];
    int mat2 [L][C];

    // Leitura da matriz
    for (i = 0; i < L ; i++){
        for(j = 0; j < C; j++){
            printf("Digite um numero para a posicao [%d][%d] da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    //leitura de k
    printf("\n");
    printf("digite um valor para k = ");
    scanf("%d", &k);

   //multiplicação da diagonal principal
    for (i = 0; i < L; i++){
        for(j = 0; j < C; j ++){
            mat2[i][j] = mat[i][j];
            if(i == j){
                mat2[i][j] *= k;
            }
        }
    }

    //Impressão da Matriz Original
    printf("\nMatriz Original\n");
    for (i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    //impressão da Matriz com diagonal principal multiplicada
    printf("\nMatriz com diagonal principal multiplicada\n");
    for (i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }



    return 0;
}
