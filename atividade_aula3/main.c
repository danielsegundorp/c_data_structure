#include <stdio.h>
#include <stdlib.h>

char *a = "Bananarama";
char b[80] = "uma coisa boa";
char *c[5];

void teste1(char *d[]){
    printf("Teste1: d[0]:%s e d[1]:%s\n\n", d[0], d[1]);
}

void teste2(char **d){
    printf("Teste2: d[0]:%s e d[1]:%s\n", d[0], d[1]);
    printf("Teste3: d[0]:%s e d[1]:%s\n", *d, *(d + 1));
}

int main()
{
    c[0] = a;
    c[1] = b;
    printf("a: %s e b: %s\n\n", a, b);
    printf("c[0]: %s e c[1]: %s\n\n", c[0], c[1]);
    teste1(c);
    teste2(c);
    //getchar();
    return 0;
}
