#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, i;
    unsigned long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num >= 30) printf("Impossivel calcular fatorial, favor digitar um numero inferior a 30!!!\n\n");

    else{
        // calcula o fatorial
        for(i = 1; i <= num; ++i){
        fatorial *= i;
    }

    printf("O fatorial de %d eh %ld", num, fatorial);

    }

    return 0;
}

