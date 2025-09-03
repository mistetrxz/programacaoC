#include <stdio.h>

int main() {

    printf("--------- Bem vindo ao Super Trunfo ! --------- \n");
    printf("Insira abaixo os dados cadastrais de duas cartas :\n \n");
    
   // declaração de variáveis para as 2 cartas
    int populacao1, populacao2;
    int numeropt1, numeropt2;  // Variáveis de Pontos Turísticos
    int escolha, resultado1, resultado2;
    char estado1[3], estado2[3];   
    char codigo1[5], codigo2[5];   
    char cidade1[50], cidade2[50];
    char primeiroAtributo, segundoAtributo; 
    float area1, area2, pib1, pib2;
    float densidade1, pib_percapita1;
    float densidade2, pib_percapita2;
    float superpoder1, superpoder2;
   
   // cadastro da primeira carta
    printf("--- CADASTRE A PRIMEIRA CARTA --- \n");
    printf("Digite o estado: \n");
    scanf("%s", estado1);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);
    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a area em km² da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeropt1);   
    printf("\n");

    // cálculo automático primeira carta
    densidade1 = populacao1 / area1;
    pib_percapita1 = populacao1 / pib1;    

   // calculo automatico super poder da carta 1
   superpoder1 = ((float)populacao1 + area1 + pib1 + (float)numeropt1 + pib_percapita1) - densidade1;

   // cadastro da segunda carta
    printf("--- CADASTRE A SEGUNDA CARTA --- \n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a area em km² da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &numeropt2);   
    printf("\n");

   // cálculo automático segunda carta
    densidade2 = populacao2 / area2;
    pib_percapita2 = populacao2 / pib2; 

   // calculo automatico super poder da carta 2
   superpoder2 = ((float)populacao2 + area2 + pib2 + (float)numeropt2 + pib_percapita2) - densidade2;

   // dados cadastrais da primeira carta
    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", numeropt1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_percapita1);  
    printf("Super poder: %.2f \n\n", superpoder1);       

   // dados cadastrais da segunda carta
    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", numeropt2);   
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_percapita2); 
    printf("Super poder: %.2f \n\n", superpoder2);


   //MENU INICIAL PRIMEIRO ATRIBUTO
   printf("-- Bem Vindo ao jogo SUPER TRUNFO !! --\n");
   printf("Você já cadastrou suas cartas agora vamos jogar !\n");
   printf("Escolha o primeiro atributo.\n");
   ptintf("P. População");
   printf("A. Área");
   printf("I. PIB");
   printf("D. Densidade Populacional");
   printf("C. Pib percapita");
   printf("S. Super poder\n");
   
   printf("Digite o primeiro atributo escolhido :");
   scanf("%d", primeiroAtributo);

   switch (primeiroAtributo)
   {
   case 'P':
   case 'p':
    printf("Você escolheu a opção População!\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
   
   case 'A':
   case 'a':
    printf("Você escolheu a opção Área!\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;

   case 'I':
   case 'i':
    printf("Você escolheu a opção PIB!\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;

   case 'D':
   case 'd':
    printf("Você escolheu a opção Densidade Populacional!\n");
    resultado1 = densidade1 < densidade2 ? 1 : 0;
    break;

   case 'C':
   case 'c':
    printf("Você escolheu a opção Pib Percapita!\n");
    resultado1 = pib_percapita1 > pib_percapita2 ? 1 : 0;
    break;

   case 'S':
   case 's':
    printf("Você escolheu a opção Super Poder!\n");
    resultado1 = superpoder1 > superpoder2 ? 1 : 0;
    break;
   
   default:
    printf("Opção selecionada INVALIDA!\n");
    break;
   }

   // SEGUNDO ATRIBUTO
   printf("Escolha o segundo atributo , diferente do primeiro selecionado!\n");
   ptintf("P. População");
   printf("A. Área");
   printf("I. PIB");
   printf("D. Densidade Populacional");
   printf("C. Pib percapita");
   printf("S. Super poder\n");
   
   printf("Digite o segundo atributo escolhido :");
   scanf("%d", segundoAtributo);

   if (primeiroAtributo == segundoAtributo)
   {
    printf("Você escolheu atributos iguais !!")
   }else {

    switch (segundoAtributo)
    {
   case 'P':
   case 'p':
    printf("Você escolheu a opção População!\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
   
   case 'A':
   case 'a':
    printf("Você escolheu a opção Área!\n");
    resultado2 = area1 > area2 ? 1 : 0;
    break;

   case 'I':
   case 'i':
    printf("Você escolheu a opção PIB!\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;

   case 'D':
   case 'd':
    printf("Você escolheu a opção Densidade Populacional!\n");
    resultado2 = densidade1 < densidade2 ? 1 : 0;
    break;

   case 'C':
   case 'c':
    printf("Você escolheu a opção Pib Percapita!\n");
    resultado2 = pib_percapita1 > pib_percapita2 ? 1 : 0;
    break;

   case 'S':
   case 's':
    printf("Você escolheu a opção Super Poder!\n");
    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
    break;
   
   default:
    printf("Opção selecionada INVALIDA!\n");
    break;
    }
    
    printf("Vamos ao Resultado do confronto!")
    if (resultado1 && resultado2)
    {
        printf("EMPATOU !!")
        
        )
    }
    

   }
   

   
   
   
   
   
   
   
   
   
   
    // MENU de comparação cartas 1 e 2
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - Comparar População\n");
    printf("2 - Comparar Área\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar Densidade Populacional\n");
    printf("5 - Comparar PIB per capita\n");
    printf("6 - Comparar Pontos Turísticos\n");
    printf("7 - Comparar Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);


    switch (escolha) {
        case 1:
            printf("\nRESULTADO POPULAÇÃO:\n");
                printf("Carta 1 - %s (%s) : %d \n", cidade1, estado1, populacao1);
                printf("Carta 2 - %s (%s) : %d \n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("## Carta 1 venceu!! ##\n");
            } else if (populacao1 < populacao2) {
                printf("## Carta 2 venceu!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;

    switch (escolha) {
        case 1:
            printf("\nRESULTADO POPULAÇÃO:\n");
                printf("Carta 1 - %s (%s) : %d \n", cidade1, estado1, populacao1);
                printf("Carta 2 - %s (%s) : %d \n", cidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("## Carta 1 VENCEU!! ##\n");
            } else if (populacao1 < populacao2) {
                printf("## Carta 2 VENCEU!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;



        case 2:
            printf("\nRESULTADO ÁREA:\n");
                printf("Carta 1 - %s (%s) : %.2f km²\n", cidade1, estado1, area1);
                printf("Carta 2 - %s (%s) : %.2f km²\n", cidade2, estado2, area2);
            if (area1 > area2) {
                printf("## Carta 1 venceu!! ##\n");
            } else if (area1 < area2) {
                printf("## Carta 2 venceu!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            
            }
            break;

        case 2:
            printf("\nRESULTADO ÁREA:\n");
                printf("Carta 1 - %s (%s) : %.2f km²\n", cidade1, estado1, area1);
                printf("Carta 2 - %s (%s) : %.2f km²\n", cidade2, estado2, area2);
            if (area1 > area2) {
                printf("## Carta 1 VENCEU!! ##\n");
            } else if (area1 < area2) {
                printf("## Carta 2 VENCEU!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            
            }
            break;



        case 3:
            printf("\nRESULTADO PIB:\n");
            printf("Carta 1 - %s (%s) : %.2f \n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s) : %.2f \n", cidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("## Carta 1 venceu!! ##\n");
            } else if (pib1 < pib2) {
                printf("## Carta 2 venceu!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;

        case 3:
            printf("\nRESULTADO PIB:\n");
            printf("Carta 1 - %s (%s) : %.2f \n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s) : %.2f \n", cidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("## Carta 1 VENCEU!! ##\n");
            } else if (pib1 < pib2) {
                printf("## Carta 2 VENCEU!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;


        case 4:
            printf("\nRESULTADO DENSIDADE POPULACIONAL:\n");
            printf("Carta 1 - %s (%s) : %.2f \n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s) : %.2f \n", cidade2, estado2, densidade2);
            if (densidade1 < densidade2) {
                printf("## Carta 1 VENCEU!! ##\n");
            } else if (densidade1 > densidade2) {
                printf("## Carta 2 VENCEU!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;

        case 5:
            printf("\nRESULTADO PIB PER CAPITA:\n");
            printf("Carta 1 - %s (%s) : %.2f \n", cidade1, estado1, pib_percapita1);
            printf("Carta 2 - %s (%s) : %.2f \n", cidade2, estado2, pib_percapita2);
            if (pib_percapita1 > pib_percapita2) {
                printf("## Carta 1 VENCEU!! ##\n");
            } else if (pib_percapita1 < pib_percapita2) {
                printf("## Carta 2 VENCEU!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;


        case 6:
            printf("\nRESULTADO PONTOS TURÍSTICOS:\n");
            printf("Carta 1 - %s (%s) : %d \n", cidade1, estado1, numeropt1);
            printf("Carta 2 - %s (%s) : %d \n", cidade2, estado2, numeropt2);
            if (numeropt1 > numeropt2) {
                printf("## Carta 1 venceu!! ##\n");
            } else if (numeropt1 < numeropt2) {
                printf("## Carta 2 venceu!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;
=======
        case 6:
            printf("\nRESULTADO PONTOS TURÍSTICOS:\n");
            printf("Carta 1 - %s (%s) : %d \n", cidade1, estado1, numeropt1);
            printf("Carta 2 - %s (%s) : %d \n", cidade2, estado2, numeropt2);
            if (numeropt1 > numeropt2) {
                printf("## Carta 1 VENCEU!! ##\n");
            } else if (numeropt1 < numeropt2) {
                printf("## Carta 2 VENCEU!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;


        case 7:
            printf("\nRESULTADO SUPER PODER:\n");
            printf("Carta 1 - %s (%s) : %.2f \n", cidade1, estado1, superpoder1);
            printf("Carta 2 - %s (%s) : %.2f \n", cidade2, estado2, superpoder2);
            if (superpoder1 > superpoder2) {
                printf("## Carta 1 VENCEU!! ##\n");
            } else if (superpoder1 < superpoder2) {
                printf("## Carta 2 VENCEU!! ##\n");
            } else {
                printf("## Empate!! ##\n");
            }
            break;


        default:
            printf("Opção inválida. Tente novamente.\n");
=======
        default:
            printf("Opção inválida!! \n");


            break;
                   }
}

        