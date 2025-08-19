#include <stdio.h>

int main(void){

    float valor_inicial, taxa, juros, valor_final;
    int tempo;

    printf("Por favor , informe os seguintes valores \n\n Valor Inicial: ");
    scanf("%f", &valor_inicial);

    printf("Agora informe a taxa de juros : ");
    scanf("%f", &taxa);

    printf("Informe o tempo que o valor ficará aplicado: ");
    scanf("%d", &tempo);

    juros = valor_inicial * taxa * tempo;

    printf("O juros obtido é igual a: %.2f\n", juros);

    valor_final = valor_inicial + juros ;

    printf("O valor final é : %.2f\n", valor_final);

    return 0;



}