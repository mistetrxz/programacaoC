#include <stdio.h>

int main() {

    printf("Bem vindo ao Super Trunfo !\n");
    printf("Insira abaixo os dados de duas cartas :\n");
    
    int populacao1, pupulacao2;
    int numeropt1, numeropt2;
    char nome1[50], nome2[50], codigo1[05], codigo2[05];
    float area1, area2, pib1, pib2;

    printf("Carta 1:\n");

    printf("Digite o nome do estado: \n");
    scanf("%s" , &nome1);

    printf("Digite o codigo da carta seguido da primeira letra do estado: \n");
    scanf("%s" , &codigo1);

    printf("Digite a quantidade de habitantes da cidade? \n");
    scanf("%d" , &populacao1);

    printf("Digite a area em km² da cidade: \n");
    scanf("%f" , &area1);

    printf("Digite o PIB do estado: \n");
    scanf("%f" , &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d" , &numeropt1);   
    



}