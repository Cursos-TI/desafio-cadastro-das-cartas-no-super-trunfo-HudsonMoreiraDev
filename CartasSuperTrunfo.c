#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int n = 2; //numero de strings
    char estado[8][3];
    char cidade[8][20];
    int numerocidade[32][4];
    char codigocarta[32][4];
    int populacao[32];
    float area[32];
    float pib[32];
    int pontosturisticos[32];
    float densidade[32];
    float percapita[32];

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("SuperTrunfo: Países \n");
    printf("Vamos cadastrar as cartas ! \n");

    // Cadastro das Cartas:
    printf("Digite uma letra de A a H para representar o Estado da carta: " ,estado[0]);
    scanf("%s" ,&estado[0]);
    
    printf("Digite um numero de 01 a 04 para representar o numero da cidade: " ,numerocidade[0]);
    scanf("%s" ,&numerocidade[0]);

    sprintf(codigocarta[0], "%s%s" ,estado[0] ,numerocidade[0]);

    printf("Digite o nome da cidade para esta carta: " ,cidade[0]);
    scanf("%s" ,&cidade[0]);

    printf("Digite o tamanho da população: " ,populacao[0]);
    scanf("%d" ,&populacao[0]);

    printf("Digite a Área(em km²) da cidade: " ,area[0]);
    scanf("%f" ,&area[0]);

    printf("Digite o PIB da cidade: " ,pib[0]);
    scanf("%f" ,&pib[0]);

    printf("Digite a quantidade de pontos turísticos da cidade: " ,pontosturisticos[0]);
    scanf("%d" ,&pontosturisticos[0]);


    printf("Digite uma letra de A a H para representar o Estado da carta: " ,estado[1]);
    scanf("%s" ,&estado[1]);
    
    printf("Digite um numero de 01 a 04 para representar o numero da cidade: " ,numerocidade[1]);
    scanf("%s" ,&numerocidade[1]);

    sprintf(codigocarta[1], "%s%s" ,estado[1] ,numerocidade[1]);

    printf("Digite o nome da cidade para esta carta: " ,cidade[1]);
    scanf("%s" ,&cidade[1]);

    printf("Digite o tamanho da população: " ,populacao[1]);
    scanf("%d" ,&populacao[1]);

    printf("Digite a Área(em km²) da cidade: " ,area[1]);
    scanf("%f" ,&area[1]);

    printf("Digite o PIB da cidade: " ,pib[1]);
    scanf("%f" ,&pib[1]);

    printf("Digite a quantidade de pontos turísticos da cidade: " ,pontosturisticos[1]);
    scanf("%d" ,&pontosturisticos[1]);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Os dados das cartas seguem abaixo ! \n\n");
    printf("Carta 1:\n");
    printf("Estado: %s \n" ,estado[0]);
    printf("Código: %s \n" ,codigocarta[0]);
    printf("Nome da Cidade: %s \n" ,cidade[0]);
    printf("População: %d \n" ,populacao[0]);
    printf("Área: %.2f km²\n" ,area[0]);
    printf("PIB: %.2f bilhões de reais \n" ,pib[0]);
    printf("Número de Pontos Turísticos: %d \n\n" ,pontosturisticos[0]);


    printf("Carta 2:\n");
    printf("Estado: %s \n" ,estado[1]);
    printf("Código: %s \n" ,codigocarta[1]);
    printf("Nome da Cidade: %s \n" ,cidade[1]);
    printf("População: %d \n" ,populacao[1]);
    printf("Área: %.2f km²\n" ,area[1]);
    printf("PIB: %.2f bilhões de reais \n" ,pib[1]);
    printf("Número de Pontos Turísticos: %d \n" ,pontosturisticos[1]);


    return 0;
}
