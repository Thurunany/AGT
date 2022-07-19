#include <stdlib.h>
#include <stdio.h>

/*
  Crie uma função que, ao receber uma matriz de
  caracteres de tamanho 3x3, representando um
  tabuleiro, informe quem é o vencedor do jogo da
  velha. Considere que os membros da matriz serão
  preenchidos com 'X', 'O' ou 0, de acordo com qual
  jogador usou a posição (ou, no caso de 0, que ela
  está em branco).

  A função deve retornar 'O' ou 'X' para indicar que
  tal jogdor é o vencedor (assuma que há um vencedor),
  ou retornar 0 para indicar que nenhum jogador é
  o vencedor.
*/

char vencedor(char tab[3][3]) {
    int i;

    for(i = 0; i < 2; i++) {
        // O X ganhou na linha i?
        if(tab[i][0] == 'X' && tab[i][1] == 'X' && tab[i][2] == 'X') {
            return 'X';
        }

        // O X ganhou na coluna i?
        if(tab[0][i] == 'X' && tab[1][i] == 'X' && tab[2][i] == 'X') {
            return 'X';
        }

        // O O ganhou na linha i?
        if(tab[i][0] == 'O' && tab[i][1] == 'O' && tab[i][2] == 'O') {
            return 'O';
        }

        // O O ganhou na coluna i?
        if(tab[0][i] == 'O' && tab[1][i] == 'O' && tab[2][i] == 'O') {
            return 'O';
        }
    }

    // X ganhou na diagonal primária?
    if(tab[0][0] == 'X' && tab[1][1] == 'X' && tab[2][2] == 'X') {
        return 'X';
    }

    // X ganhou na diagonal secundária?
    if(tab[0][2] == 'X' && tab[1][1] == 'X' && tab[2][0] == 'X') {
        return 'X';
    }

    // O ganhou na diagonal primária?
    if(tab[0][0] == 'O' && tab[1][1] == 'O' && tab[2][2] == 'O') {
        return 'O';
    }

    // O ganhou na diagonal secundária?
    if(tab[0][2] == 'O' && tab[1][1] == 'O' && tab[2][0] == 'O') {
        return 'O';
    }

    // Empate!
    return 0;
}

int main() {

    char tabuleiro[3][3] = {
        {'O', 'O', 'O'},
        {'X', 'X',  0 },
        {  0, 'X',  0 }
    };

    char c = vencedor(tabuleiro);

    if(c == 0) {
        printf("Ninguém venceu!\n");
    } else {
        printf("O [%c] venceu!\n", c);
    }

    return EXIT_SUCCESS;
}
