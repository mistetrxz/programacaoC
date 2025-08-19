#include <stdio.h>

int main (void){

    float preco_original, taxa, desconto, resultado;

    printf("Por favor informe o valor do produto: ");
    scanf("%f", &preco_original);

    printf("Por favor informe a taxa de desconto: ");
    scanf("%f", &taxa);

    desconto = (taxa * preco_original) / 100.0;

    resultado = preco_original - desconto;

    printf("Preco Original: %.2f\nDesconto: %.2f\nPreco com desconto: %.2f\n", 
            preco_original, 
            desconto, 
            resultado
    );






    return 0;
}