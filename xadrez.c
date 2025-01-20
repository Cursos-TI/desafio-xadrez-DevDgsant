#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MaxMovimentacaoBispo 5
#define MaxMovimentacaoTorre 5
#define MaxMovimentacaoRainha 8
#define MaxMovimentacaoCavalo 1

void criartabuleiro() {
    int bispo[MaxMovimentacaoBispo] = {1, 2, 3, 4, 5};
    int torre[MaxMovimentacaoTorre] = {1, 2, 3, 4, 5};
    int rainha[MaxMovimentacaoRainha] = {1, 2, 3, 4, 5, 6, 7, 8};
    int cavalo[MaxMovimentacaoCavalo] = {1};

    // Adicione a lógica para implementar as movimentações das peças aqui
}

void movimentacaopeca() {
    char peca[20];
    char direcao[20];
    char quantidade[20];

    printf("Qual peça deseja movimentar?");
    fgets(peca, sizeof(peca), stdin);
    peca[strcspn(peca, "\n")] = '\0'; // remove o caractere de nova linha

    printf("Para qual direção deseja movimentar a peça?");
    fgets(direcao, sizeof(direcao), stdin);
    direcao[strcspn(direcao, "\n")] = '\0';

    printf("Quantas casas deseja movimentar a peça?");
    fgets(quantidade, sizeof(quantidade), stdin);
    quantidade[strcspn(quantidade, "\n")] = '\0';

    if (strcmp(peca, "cavalo") == 0) {
        int x = 0;
        int y = 0;
        char *endptr;
        long int movimentos = strtol(quantidade, &endptr, 10);

        if (endptr == quantidade || *endptr != '\0') {
            printf("Erro: quantidade inválida\n");
            return;
        }

        printf("Movimentos: %ld\n", movimentos);

        // Loop while para realizar os movimentos
        while (movimentos > 0) {
            printf("Movimento %ld:\n", movimentos);
            printf("  X: %d\n", x);
            printf("  Y: %d\n", y);

            // Movimento em L
            if (direcao[0] == 'c' || direcao[0] == 'C') { // cima
                y -= 2;
                x += 1;
            } else if (direcao[0] == 'b' || direcao[0] == 'B') { // baixo
                y += 2;
                x -= 1;
            } else if (direcao[0] == 'e' || direcao[0] == 'E') { // esquerda
                x -= 2;
                y -= 1;
            } else if (direcao[0] == 'd' || direcao[0] == 'D') { // direita
                x += 2;
                y += 1;
            }

            printf("  Novo X: %d\n", x);
            printf("  Novo Y: %d\n", y);

            movimentos--;
        }

        // Loop for para imprimir as posições finais
        for (int i = 0; i < 5; i++) {
            printf("Posição final %d:\n", i + 1);
            printf("  X: %d\n", x);
            printf("  Y: %d\n", y);
        }
    }
}

int main() {
    criartabuleiro();
    movimentacaopeca();

    return 0;
}

   
