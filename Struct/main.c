#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char descricao[100];
} Compromisso;


int main()
{
    Horario minhahora;
    Data minhaData;
    Compromisso meuCompromisso;

    minhahora.hora = 18;
    minhahora.minutos = 10;
    minhahora.segundos = 45;

    minhaData.dia = 30;
    minhaData.mes = 4;
    minhaData.ano = 2023;

    meuCompromisso.data = minhaData;
    meuCompromisso.horario = minhahora;
    strcpy(meuCompromisso.descricao, "Compromisso importante");

    printf("Horario = %d:%d:%d\n", minhahora.hora, minhahora.minutos, minhahora.segundos);
    printf("Data = %d/%d/%d\n", minhaData.dia, minhaData.mes, minhaData.ano);
    printf("Compromisso = %d/%d/%d, %d:%d:%d, %s\n",
            meuCompromisso.data.dia, meuCompromisso.data.mes, meuCompromisso.data.ano,
            meuCompromisso.horario.hora, meuCompromisso.horario.minutos, meuCompromisso.horario.segundos,
            meuCompromisso.descricao);
    return 0;
}
