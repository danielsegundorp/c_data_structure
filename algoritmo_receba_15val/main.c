#include <stdio.h>
#include <stdlib.h>
#define max 15

int main()
{
    int vet[max];
    int maior = 0;

    for(int i = 1; i <= max; i++){
        printf("Digite o %d numero inteiro: ", i);
        scanf("%d", &vet[i]);

        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("\n");
    printf("nesse eh o vetor!!!\n");

    for (int i = 1; i <= max; i++){
        printf("%d\t", vet[i]);
    }
    printf("\nO maior valor eh:  %d\n", maior);

    system("pause");

    return 0;
}
