#include <stdio.h>
#include <stdlib.h>
#define TURMAS 2
#define ALUNOS 3

int main() {
    float notas[TURMAS][ALUNOS][3];
    float mediaTurma[TURMAS] = {0};

    // leitura das notas e c�lculo da m�dia de cada aluno
    for (int t = 0; t < TURMAS; t++) {
        for (int a = 0; a < ALUNOS; a++) {
            printf("Turma %d - Aluno %d\n", t+1, a+1);
            printf("Digite a primeira nota: ");
            scanf("%f", &notas[t][a][0]);
            printf("Digite a segunda nota: ");
            scanf("%f", &notas[t][a][1]);

            notas[t][a][2] = (notas[t][a][0] + notas[t][a][1]) / 2;
        }
    }

    // c�lculo da m�dia de cada turma
    for (int t = 0; t < TURMAS; t++) {
        for (int a = 0; a < ALUNOS; a++) {
            mediaTurma[t] += notas[t][a][2];
        }
        mediaTurma[t] /= ALUNOS;
    }

    // impress�o das m�dias de cada turma e verifica��o da maior m�dia
    int maiorTurma = 0;
    printf("Medias das turmas:\n");
    for (int t = 0; t < TURMAS; t++) {
        printf("Turma %d: %.2f\n", t+1, mediaTurma[t]);
        if (mediaTurma[t] > mediaTurma[maiorTurma]) {
            maiorTurma = t;
        }
    }

    // impress�o dos alunos com m�dia maior que a m�dia da turma
    printf("Alunos com media maior que a m�dia da turma %d:\n", maiorTurma+1);
    for (int a = 0; a < ALUNOS; a++) {
        if (notas[maiorTurma][a][2] > mediaTurma[maiorTurma]) {
            printf("Aluno %d - Media: %.2f\n", a+1, notas[maiorTurma][a][2]);
        }
    }

    return 0;
}
