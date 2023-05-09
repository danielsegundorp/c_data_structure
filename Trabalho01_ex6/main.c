#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CORREDORES 6
#define VOLTAS 10

int main() {
    char nomes[CORREDORES][50];
    int tempos[CORREDORES][VOLTAS];
    int i, j;

    // Leitura dos nomes e tempos de cada corredor
    for (i = 0; i < CORREDORES; i++) {
        printf("Digite o nome do corredor %d: ", i+1);
        scanf("%s", nomes[i]);
        for (j = 0; j < VOLTAS; j++) {
            printf("Digite o tempo da volta %d do corredor %d: ", j+1, i+1);
            scanf("%d", &tempos[i][j]);
        }
        printf("\n");
    }

    // Achar a melhor volta
    int melhorVolta = tempos[0][0];
    int corredorMelhorVolta = 1;
    int voltaMelhorVolta = 1;
    for (i = 0; i < CORREDORES; i++) {
        for (j = 0; j < VOLTAS; j++) {
            if (tempos[i][j] < melhorVolta) {
                melhorVolta = tempos[i][j];
                corredorMelhorVolta = i+1;
                voltaMelhorVolta = j+1;
            }
        }
    }

    printf("A melhor volta da prova foi do corredor %d (%s) na volta %d, com o tempo de %d segundos.\n", corredorMelhorVolta, nomes[corredorMelhorVolta-1], voltaMelhorVolta, melhorVolta);

    // Calcular tempos totais de cada corredor
    int temposTotais[CORREDORES];
    for (i = 0; i < CORREDORES; i++) {
        int tempoTotal = 0;
        for (j = 0; j < VOLTAS; j++) {
            tempoTotal += tempos[i][j];
        }
        temposTotais[i] = tempoTotal;
    }

    // Ordenar corredores por tempo total
    int classificacao[CORREDORES];
    for (i = 0; i < CORREDORES; i++) {
        int melhorTempo = temposTotais[0];
        int melhorCorredor = 1;
        for (j = 0; j < CORREDORES; j++) {
            if (temposTotais[j] < melhorTempo) {
                melhorTempo = temposTotais[j];
                melhorCorredor = j+1;
            }
        }
        classificacao[i] = melhorCorredor;
        temposTotais[melhorCorredor-1] = 999999; // marca como já classificado
    }

    printf("Classificacao final:\n");
    for (i = 0; i < CORREDORES; i++) {
        printf("%dº %s\n", i+1, nomes[classificacao[i]-1]);
    }

    // Calculando a volta com a média mais rápida
    int voltaMediaMaisRapida = 0;
    float mediaMaisRapida = 0.0;
    for (j = 0; j < VOLTAS; j++) {
        float mediaVolta = 0.0;
        for (i = 0; i < CORREDORES; i++) {
            mediaVolta += tempos[i][j];
        }
        mediaVolta /= CORREDORES;
        if (j == 0 || mediaVolta < mediaMaisRapida) {
            mediaMaisRapida = mediaVolta;
            voltaMediaMaisRapida = j;
        }
    }
    printf("A volta com a media mais rapida foi a volta %d, com media de %.2f segundos.\n", voltaMediaMaisRapida + 1, mediaMaisRapida);
    return 0;
}
