#include <stdio.h>

    int main(){
    int idade, matricula, idcao;
    float altura;
    char nome [50];
    char cachorro[50];

    printf("Digite sua idade: \n"); 
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);
   
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Qual nome do seu cachorro ? \n");
    scanf("%s", &cachorro);

    printf("Qual a idade do seu cachorro ? \n");
    scanf("%d", &idcao);

    printf("Nome do aluno :%s \n", nome);
    printf("Matricula: %d \n", matricula);
    printf("Idade: %d \n", idade);
    printf("Altura: %f \n", altura);
    printf("Nome do cachorro: %s \n", cachorro);
    printf("Idade do cachorro: %d Anos \n", idcao);

    return 0;
    
   }