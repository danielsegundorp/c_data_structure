#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 5

int main()
{
    int i, j, aux = 0;
    float media, soma;
    float mat[L][C] = {{5.0,4.5,7.0,5.2,6.1},{2.1,6.5,8.0,7.0,6.7},{8.6,7.0,9.1,8.7,9.3}};

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("%.2f\t", mat[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            soma += mat[i][j];
            aux++;
        }
    }
    media = soma / aux;
    printf("\nmedia da turma igual a: %.2f\n", media);

    return 0;
}
