#include <stdio.h>
#include <stdlib.h>
#define L 6
#define C 3

int main()
{
    int i, j;
    float mat[L][C];
    int linha_maior = 0;
    int linha_menor = 0;
    int coluna_maior = 0;
    int coluna_menor = 0;

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("Digite um numero para a posicao [%d][%d] da matriz: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    float maior = mat[0][0];
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }
    float menor = mat[0][0];
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(mat[i][j] < menor){
                menor = mat[i][j];
                linha_menor = i;
                coluna_menor = j;
            }
        }
    }
    printf("\nMaior elemento: %.2f na posicao [%d][%d]", maior, linha_maior, coluna_maior);
    printf("\nMenor elemento: %.2f na posicao [%d][%d]", menor, linha_menor, coluna_menor);
    printf("\n");

    return 0;
}
