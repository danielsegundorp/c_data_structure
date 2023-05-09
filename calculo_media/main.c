#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;
    float minimo = 6.0;
    int flag = 0;

    while(flag == 0){

        printf("Digite a primeira nota:  \n");
        scanf("%f", &nota1);

        printf("Digite a segunda nota:   \n");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        if (media >= minimo) printf("APROVADO\n\n");

        else printf("REPROVADO\n\n");

        printf("Deseja continuar?: 0-SIM\t1-NAO ");
        scanf("%d", &flag);

    }

    system("pause");
    return 0;
}
