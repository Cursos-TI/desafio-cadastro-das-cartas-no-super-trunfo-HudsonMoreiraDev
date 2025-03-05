#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //foram usadas variavel[2] em cada variável para representar a quantidade que cada variável vai receber de acordo com a quantidade de cartas.

    char estado[2][3]; //variável que representa a letra de A a H, do Estado do país
    char cidade[2][20]; // variável que representa o nome da cidade
    int numerocidade[2][4]; //variável que representa o numero de 01 a 04 da cidade
    char codigocarta[2][4]; // variável que vai representar o codigo da carta
    int populacao[2]; //variável que representa o tamanho populacional
    float area[2]; // variável que representa a area da cidade
    float pib[2]; // variável que representa o pib da cidade
    int pontosturisticos[2]; // variável que representa a quantidade de pontos turísticos

    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("SuperTrunfo: Países \n"); // Título do jogo Super Trunfo
    printf("Vamos cadastrar as cartas ! \n"); // Subtítulo para anunciar o cadastro das cartas

    // Cadastro das Cartas:

    //Inicio do cadastro da primeira carta.
    //Todos os dados que o usuário informar, sera armazenado no espaço [0]. Exemplo: estado[0], numerocidade[0]; repetindo-se por todas as variáveis para o cadastro da primera carta.
    printf("Digite uma letra de A a H para representar o Estado da carta: " ,estado[0]); //usuário deverá digitar uma letra para representar o estado da carta
    scanf("%s" ,&estado[0]); // aqui é onde será armazenado o valor digitado pelo usuário, no caso na variável estado[0]
    
    printf("Digite um numero de 01 a 04 para representar o numero da cidade: " ,numerocidade[0]);
    scanf("%s" ,&numerocidade[0]);

    sprintf(codigocarta[0], "%s%s" ,estado[0] ,numerocidade[0]); //foi utilizado esse comando para CONCATENAR, ou seja, juntar, a letra do estado com o numero da cidade, para representar o codigo da carta

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
    //Encerra-se o cadastro da primeira carta

    //Abaixo inicia-se o cadastro da segunda carta
    //Repete-se todos os comandos da primeira carta, no estado será armazenado no espaço [1]. Exemplo: estado[1], numerocidade[1]; Repetindo-se por todas as variáveis da carta 2.
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

    //Encerramento da segunda carta.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Abaixo os dados da Carta 1

    printf("Os dados das cartas seguem abaixo ! \n\n");
    printf("Carta 1:\n");
    printf("Estado: %s \n" ,estado[0]);
    printf("Código: %s \n" ,codigocarta[0]);
    printf("Nome da Cidade: %s \n" ,cidade[0]);
    printf("População: %d \n" ,populacao[0]);
    printf("Área: %.2f km²\n" ,area[0]);
    printf("PIB: %.2f bilhões de reais \n" ,pib[0]);
    printf("Número de Pontos Turísticos: %d \n\n" ,pontosturisticos[0]);

    //Abaixo os dados da Carta 2.

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
