#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char grade[3][3]; // matriz que representa a grade do jogo

void inicializa_grade() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            grade[i][j] = ' '; // preenche todas as células com espaços vazios
        }
    }
}

void desenha_grade() {
    printf("-=-=-=-=-=-=-=-=LEGENDA-=-=-=-=-=-=-=-=\n");
    printf("Voce......: 'X'\n");
    printf("Computador: 'O'\n\n");
    printf("\t  0   1   2\n");
    printf("\t0 %c | %c | %c \n", grade[0][0], grade[0][1], grade[0][2]);
    printf("\t ---+---+---\n");
    printf("\t1 %c | %c | %c \n", grade[1][0], grade[1][1], grade[1][2]);
    printf("\t ---+---+---\n");
    printf("\t2 %c | %c | %c \n", grade[2][0], grade[2][1], grade[2][2]);
    printf("\n");
}

char verifica_vencedor() {
    int i, j;

    // verifica linhas
    for (i = 0; i < 3; i++) {
        if (grade[i][0] != ' ' && grade[i][0] == grade[i][1] && grade[i][0] == grade[i][2]) {
            return grade[i][0];
        }
    }

    // verifica colunas
    for (j = 0; j < 3; j++) {
        if (grade[0][j] != ' ' && grade[0][j] == grade[1][j] && grade[0][j] == grade[2][j]) {
            return grade[0][j];
        }
    }

    // verifica diagonal principal
    if (grade[0][0] != ' ' && grade[0][0] == grade[1][1] && grade[0][0] == grade[2][2]) {
        return grade[0][0];
    }

    // verifica diagonal secundária
    if (grade[0][2] != ' ' && grade[0][2] == grade[1][1] && grade[0][2] == grade[2][0]) {
        return grade[0][2];
    }

    // verifica empate
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (grade[i][j] == ' ') {
                return ' '; // ainda há células vazias, portanto não há vencedor nem empate
            }
        }
    }

    // se chegou até aqui, é empate
    return 'E';

}

void faz_jogada_usuario() {
    int linha, coluna;
    do {
        printf("Digite a linha que deseja jogar: ");
        scanf("%d", &linha);
        printf("Digite a coluna que deseja jogar: ");
        scanf("%d", &coluna);
        printf("\n");
    } while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || grade[linha][coluna] != ' ');
    //grade[linha][coluna] = 'X';
    char vencedor = verifica_vencedor();
    if (vencedor == 'O') {
        // A jogada do usuário permitiria que o computador vencesse na próxima jogada
        // Escolhe uma jogada diferente para evitar isso
        printf("Se você jogar em (%d,%d), o computador vencerá na próxima jogada.\n", linha+1, coluna+1);
        printf("Escolha outra posição para jogar: ");
        scanf("%d %d", &linha, &coluna);
        linha--;
        coluna--;
        while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || grade[linha][coluna] != ' ') {
            printf("Posição inválida. Escolha outra posição para jogar: ");
            scanf("%d %d", &linha, &coluna);
            linha--;
            coluna--;
        }
    }
    grade[linha][coluna] = 'X';
}

void faz_jogada_computador() {
    int linha, coluna;
    do {
        linha = rand() % 3; // escolhe linha aleatoriamente
        coluna = rand() % 3; // escolhe coluna aleatoriamente
    } while (grade[linha][coluna] != ' ');
    grade[linha][coluna] = 'O';
}


int main() {
    int jogadas;
    char vencedor;
    // inicializa semente do gerador de números aleatórios
    srand(time(NULL));

    // inicializa a grade
    inicializa_grade();

    // loop principal do jogo
    for (jogadas = 0; jogadas < 9; jogadas++) {
        // desenha a grade
        desenha_grade();

        // faz jogada do usuário
        faz_jogada_usuario();

        // verifica se o usuário venceu
        vencedor = verifica_vencedor();
        if (vencedor != ' ') {
            break; // sair do loop principal
        }

        // faz jogada do computador
        faz_jogada_computador();

        // verifica se o computador venceu
        vencedor = verifica_vencedor();
        if (vencedor != ' '){
            break; // sair do loop principal
        }
    }

    // desenha a grade final
    desenha_grade();

    // verifica o resultado do jogo
    if (vencedor == 'X'){
        printf("Voce venceu!\n");
    }
    else if(vencedor == 'O'){
        printf("O computador venceu!\n");
    }
    else{
        printf("Empate!\n");
    }

    return 0;
}
