#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux, soma;

    for (int i = 100; i <= 500; i++){
        aux = i;
        if (i % 2 == 0){
            soma += aux;
        }
    }
    printf("O resultado da soma eh:  %d", soma);
    printf("\n\n");

    system("pause");

    return 0;
}
