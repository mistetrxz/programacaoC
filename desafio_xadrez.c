int main(){

    int i;

    printf("\n-- Bem vindo ao Jogo de Xadrez! --\n");

    // Movimentação da Torre 
    printf("Movimentacao da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // Movimentação do Bispo 
    printf("Movimentacao do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    // Movimentação da Rainha 
    printf("Movimentacao da Rainha:\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
