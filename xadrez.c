#include <stdio.h>

// definindo as direcoes das peças
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"

// implementando as movimentações das peças
void moverBispo() {
    printf("Movimento do Bispo ( 5 casas na diagonal superior direita )\n");
    for (int i = 0; i < 5; i++) {
        printf(CIMA);
        printf(DIREITA);    
    }
}
void moverTorre() {
    printf("Movimento da Torre ( 5 casas para a direita )\n");
    for (int i = 0; i < 5; i++) {
        printf(DIREITA);
    }
}
void moverRainha() {
    printf("Movimento da Rainha ( 8 casas para a esquerda )\n");
    for (int i = 0; i < 8; i++) {
        printf(ESQUERDA);
    }
}
void moverCavalo() {
    printf("Movimento do Cavalo ( 1 vez em L para cima à direita )\n");
   // loop for para mover 2 casa para baixo 
   for (int i = 0; i < 2; i++) {
       printf(BAIXO);
   }
   // loop while para mover 1 casa para direita
   int j = 1;
   while (j <= 1) {
       printf(ESQUERDA); // movimento para esquerda
       j++;
   }
}
// funcao principal
int main() {
    moverBispo();
    printf("\n");
    moverTorre();
    printf("\n");
    moverRainha();
    printf("\n");
    moverCavalo();
    printf("\n");
    
    return 0;
}