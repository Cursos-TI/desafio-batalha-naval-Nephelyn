#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;
    int valido = 1; 

    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }


    // Navio horizontal
    if (tabuleiro[2][3] == 0 && tabuleiro[2][4] == 0 && tabuleiro[2][5] == 0) {
        tabuleiro[2][3] = 3;
        tabuleiro[2][4] = 3;
        tabuleiro[2][5] = 3;
    } else {
        valido = 0;
    }

    // Navio vertical
    if (tabuleiro[5][7] == 0 && tabuleiro[6][7] == 0 && tabuleiro[7][7] == 0) {
        tabuleiro[5][7] = 3;
        tabuleiro[6][7] = 3;
        tabuleiro[7][7] = 3;
    } else {
        valido = 0;
    }

    // Navio diagonal 1
    if (tabuleiro[0][0] == 0 && tabuleiro[1][1] == 0 && tabuleiro[2][2] == 0) {
        tabuleiro[0][0] = 3;
        tabuleiro[1][1] = 3;
        tabuleiro[2][2] = 3;
    } else {
        valido = 0;
    }

    // Navio diagonal 2
    if (tabuleiro[0][9] == 0 && tabuleiro[1][8] == 0 && tabuleiro[2][7] == 0) {
        tabuleiro[0][9] = 3;
        tabuleiro[1][8] = 3;
        tabuleiro[2][7] = 3;
    } else {
        valido = 0;
    }

    
    if (valido) {
        printf("Tabuleiro:\n\n");

        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Posição inválida.\n");
    }

    return 0;
}
