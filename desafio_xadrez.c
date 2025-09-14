#include <stdio.h>

// Função recursiva da Torre
// A torre anda em linha reta (aqui eu fiz só para a direita)
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Casa %d: Direita\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva
}

// Função recursiva do Bispo com loops aninhados
// O bispo anda na diagonal (aqui sempre Cima + Direita)
void moverBispo(int casas, int atual) {
    if (atual > casas) return; // condição de parada da recursão

    // uso de dois loops para simular movimento diagonal
    for (int v = 1; v <= 1; v++) {     // movimento vertical
        printf("Casa %d: Cima", atual);
        for (int h = 1; h <= 1; h++) { // movimento horizontal
            printf(", Direita\n");
        }
    }

    moverBispo(casas, atual + 1); // chamada recursiva
}

// Função recursiva da Rainha
// Aqui fiz apenas para esquerda
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Casa %d: Esquerda\n", atual);
    moverRainha(casas, atual + 1); // chamada recursiva
}

// Função do Cavalo com loops complexos
// O cavalo anda em "L" (duas para cima e uma para a direita)
void moverCavalo(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {  
        // duas casas para cima
        for (int v = 1; v <= 2; v++) {
            printf("Cima\n");
        }

        // uma casa para direita
        for (int h = 1; h <= 1; h++) {
            if (h == 0) continue; // exemplo de continue
            printf("Direita\n");
        }

        printf("\n"); // separar os movimentos
    }
}

int main() {
    // defini quantas casas cada peça vai andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    printf("\n-- Jogo de Xadrez (Movimentos Complexos) --\n\n");

    printf("Movimentacao da Torre:\n");
    moverTorre(casasTorre, 1);

    printf("\n");

    printf("Movimentacao do Bispo:\n");
    moverBispo(casasBispo, 1);

    printf("\n");

    printf("Movimentacao da Rainha:\n");
    moverRainha(casasRainha, 1);

    printf("\n");

    printf("Movimentacao do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}
