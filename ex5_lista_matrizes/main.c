#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10
#define MAX_NAME_SIZE 50

int main()
{
    char nomes[N][MAX_NAME_SIZE];
    int idades[N];
    int i, mais_novo = 0;

    memset(nomes, 0, sizeof(nomes));
    memset(idades, 0, sizeof(idades));

    for(i = 0; i < N; i++){
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }


    for (i = 1; i < N; i++) {
        if (idades[i] < idades[mais_novo]) {
            mais_novo = i;
        }
    }

    printf("\n");

    for(i = 0; i < N; i++){
        printf("%s\t\t", nomes[i]);
        printf("%d", idades[i]);

        printf("\n");
    }


    printf("\nA pessoa mais nova eh %s.\n", nomes[mais_novo]);


    return 0;
}
