#include <stdio.h>
int main(){
    //definindo variaveis
    char Estado[1];
    char codigo_carta[3];
    char nome_cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Digite uma letra de A até H para representar o estado: \n"); //exibindo texto
    scanf("%s", Estado); //lendo entradas
    
    printf("Digite o código da carta(estado+01 até 04) \n");//exibindo texto
    scanf("%s", codigo_carta);//lendo entradas

    printf("Digite o nome da cidade \n");//exibindo texto
    scanf("%s", nome_cidade);//lendo entradas

    printf("Digite o número de habitantes: \n");//exibindo texto
    scanf("%d", &populacao);//lendo entradas
    
    printf("Digite a área: \n");//exibindo texto
    scanf("%f", &area);//lendo entradas

    printf("Digite o PIB: \n");//exibindo texto
    scanf("%f", &pib);//lendo entradas
    
    printf("Digite o número de pontos turisticos: \n");//exibindo texto
    scanf("%d", &pontos_turisticos);//lendo entradas

    printf("Estado:%s \n", Estado);//exibindo texto
    
    printf("Código da carta: %s \n", codigo_carta);//exibindo texto
    
    printf("Nome da cidade %s \n", nome_cidade);//exibindo texto
    
    printf("Número de habitantes: %d \n", populacao);//exibindo texto
    
    printf("Área: %f \n", area);//exibindo texto
    
    printf("PIB: %f \n", pib);//exibindo texto
    
    printf("Número de pontos turisticos %d \n", pontos_turisticos);//exibindo texto

    return 0;
