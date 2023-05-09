// código-fonte
#include <stdio.h>
#include <time.h>

struct rgAgora {      //criando Stucrt de Data e Horario
  int dia, mes, ano;   // criando a variaveis para data
  int h, m, s;        // criando a variaveis para horario
};

int main() {
  char ds[7][4] = {"dom", "seg", "ter", "qua", "qui", "sex", "sab"};    // cria uma matriz para armazenar os 7 dias da semana

  struct tm tempo;
  time_t tempoSeg; // cria uma estrutura para armazenar o "tempo" atua de maquina

  time(&tempoSeg); // código para buscar o tempo atual
  tempo = *localtime(&tempoSeg);

  struct rgAgora agora; // struct para reunir todas as structs criadas

  agora.dia = tempo.tm_mday;
  agora.mes = tempo.tm_mon + 1;
  agora.ano = tempo.tm_year + 1900;
  agora.h = tempo.tm_hour;
  agora.m = tempo.tm_min;
  agora.s = tempo.tm_sec;

  // esta armazenando os dados atuais de maquina nas variaveis criadas

  printf("Compromisso eh %02d/%02d/%d (%s) as %02d:%02d:%02d horas.\n",
    agora.dia, agora.mes, agora.ano, ds[tempo.tm_wday], agora.h, agora.m, agora.s);

    // Retorna o Compromisso baseado nos dados atuais

  return(0);
}
