#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Digite o primeiro numero:  \n");
    scanf("%d", &x);

    printf("Digite o segundo numero:  \n");
    scanf("%d", &y);

    z = ((x*x) + (y*y));

    printf("O valor de z calculado eh igual a:   %d\n\n", z);

    system("pause");



    return 0;
}
