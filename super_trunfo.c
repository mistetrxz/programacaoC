#include <stdio.h>

int main() {

    printf("--------- Bem vindo ao Super Trunfo ! --------- \n");
    printf("Insira abaixo os dados cadastrais de duas cartas :\n \n");
    
   // declaração de variáveis para as 2 cartas
    int populacao1, populacao2;
    int numeropt1, numeropt2;
    char estado1[3], estado2[3];   
    char codigo1[5], codigo2[5];   
    char cidade1[50], cidade2[50];
    float area1, area2, pib1, pib2;
    float densidade1, pib_percapita1;
    float densidade2, pib_percapita2;

   // cadastro da primeira carta
    printf("--- CADASTRO DA PRIMEIRA CARTA --- \n");

    printf("Digite o estado (ex: SP): \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta (ex: S01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km² da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeropt1);   

    printf("\n");

    // cálculo automático primeira carta
    densidade1 = populacao1 / area1;
    pib_percapita1 = populacao1 / pib1;    

   // cadastro da segunda carta
    printf("--- CADASTRO DA SEGUNDA CARTA --- \n");

    printf("Digite o estado (ex: RJ): \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta (ex: R01): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km² da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeropt2);   

    printf("\n");

   // cálculo automático segunda carta
    densidade2 = populacao2 / area2;
    pib_percapita2 = populacao1 / pib2; 

   // dados cadastrais da primeira carta
    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", numeropt1);
    printf("Densidade Populacional: %.f hab/km² \n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_percapita1);       

    printf("\n");   

   // dados cadastrais da segunda carta
    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", numeropt2);   
    printf("Densidade Populacional: %.f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_percapita2); 

    return 0;
}