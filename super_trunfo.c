#include <stdio.h>

int main() {

    printf("-------- Bem vindo ao Super Trunfo ! -------- \n");
    printf("Insira abaixo os dados cadastrais de duas cartas :\n \n");
    
   //declaracao de variaveis para as 2 cartas
    int populacao1, populacao2;
    int numeropt1, numeropt2;
    char nome1[50], nome2[50], codigo1[05], codigo2[05];
    float area1, area2, pib1, pib2;

   //cadastro da primeira carta
    printf("--- CADASTRO DA PRIMEIRA CARTA --- \n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &nome1);

    printf("Digite o codigo da carta seguido da primeira letra do estado: \n");
    scanf("%s", &codigo1);

    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km² da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeropt1);   

    printf("\n");

   //cadastro da segunda carta
    printf("--- CADASTRO DA SEGUNDA CARTA --- \n");

    printf("Digite o nome do estado: \n");
    scanf("%s", &nome2);

    printf("Digite o codigo da carta seguido da primeira letra do estado: \n");
    scanf("%s", &codigo2);

    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km² da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeropt2);   

    printf("\n");

   //dados cadastrais da primeira carta
    printf("- Dados da Carta 1:\n");
    printf("Nome do estado: %s\n", nome1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", numeropt1);       

    printf("\n");   

   //dados cadastrais da segunda carta
    printf("- Dados da Carta 2:\n");
    printf("Nome do estado: %s\n", nome2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", numeropt2);   

    return 0;

}