#include <stdio.h>

int main(void) 
{
    
    char estado1[30] , estado2[30]; // O estado será para representar o estado do país.Foi colocado um vetor de 30 posições, para ler strings de até 30 caracteres.
    char cidade1[30] , cidade2[30]; // representa o nome da cidade
    char codigocarta1[6] , codigocarta2[6]; //representa o codigo da carta.Foi colocado um vetor de 6 posições para ler até 6 caracteres
    float area1 , area2; //representa a area em (km²) da cidade
    float pib1 , pib2; // representa o produto interno bruto da cidade
    int pontosturisticos1, pontosturisticos2; // representa a quantidade de pontos turisticos da cidade
    unsigned long int populacao1, populacao2; // representa o tamanho da população da cidade
    float densidade1 , densidade2;
    float percapita1 , percapita2;
    float superpoder1 , superpoder2 ;

    printf("Supertrunfo: Países \n"); // anuncio do jogo
    printf("Vamos cadastrar as cartas! \n"); //comentario para informar que o usuário irá cadastrar as cartas

    //Cadastro das cartas:

    //Inicio do Cadastro da Carta 1

    printf("Cadastro da Carta 01 \n");

    printf("Digite o nome do Estado da primeira carta:" ,estado1);
    scanf("%s" ,&estado1);

    printf("Digite uma letra de A a H e numero de 01 a 04 para representar o código da carta: " ,codigocarta1);
    scanf("%s" ,&codigocarta1);

    printf("Digite o nome da cidade para esta carta: " ,cidade1);
    scanf("%s" ,&cidade1);

    printf("Digite o tamanho da população: " ,populacao1);
    scanf("%lu" ,&populacao1);

    printf("Digite a Área(em km²) da cidade: " ,area1);
    scanf("%f" ,&area1);

    printf("Digite o PIB da cidade: " ,pib1);
    scanf("%f" ,&pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: " ,pontosturisticos1);
    scanf("%d" ,&pontosturisticos1);

    printf("\n");

    
    //Inicio do Cadastro da Carta 2

    printf("Cadastro da Carta 02 \n");

    printf("Digite o nome do Estado da segunda carta:" ,estado2);
    scanf("%s" ,&estado2);

    printf("Digite uma letra de A a H e numero de 01 a 04 para representar o código da carta: " ,codigocarta2);
    scanf("%s" ,&codigocarta2);

    printf("Digite o nome da cidade para esta carta: " ,cidade2);
    scanf("%s" ,&cidade2);

    printf("Digite o tamanho da população: " ,populacao2);
    scanf("%lu" ,&populacao2);

    printf("Digite a Área(em km²) da cidade: " ,area2);
    scanf("%f" ,&area2);

    printf("Digite o PIB da cidade: " ,pib2);
    scanf("%f" ,&pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: " ,pontosturisticos2);
    scanf("%d" ,&pontosturisticos2);

    //Cálculos matemáticos

    //cálculo para saber a densidade populacional.
    densidade1 = populacao1 / area1;  
    densidade2 = populacao2 / area2;

    // cálculo para saber o pib per capita .
    percapita1 = pib1 / populacao1; 
    percapita2 = pib2 / populacao2;

    //cálculo para saber o super poder da carta, que é a soma de todos os atributos.
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapita1 + (1 / densidade1) ;
    superpoder2= populacao2 + area2 + pib2 + pontosturisticos2 + percapita2 + (1 / densidade2) ;

    //Encerramento dos cálculos matemáticos

    //Exibição dos dados das cartas:

    printf("\n"); //adicionado uma quebra de linha 

    printf("Os dados das cartas seguem abaixo! \n\n");

    //dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s \n" ,estado1);
    printf("Código da carta: %s \n" ,codigocarta1);
    printf("Nome da Cidade: %s \n" ,cidade1);
    printf("População: %lu \n" ,populacao1);
    printf("Área: %.2f km²\n" ,area1);
    printf("PIB: %.2f bilhões de reais \n" ,pib1);
    printf("Número de Pontos Turísticos: %d \n" ,pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n" ,densidade1);
    printf("PIB Per Capita: %.2f reais \n" ,percapita1);
    printf("Super Poder: %.2f \n" ,superpoder1);

    printf("\n"); //adicionado uma quebra de linha

    //dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %s \n" ,estado2);
    printf("Código da carta: %s \n" ,codigocarta2);
    printf("Nome da Cidade: %s \n" ,cidade2);
    printf("População: %lu \n" ,populacao2);
    printf("Área: %.2f km²\n" ,area2);
    printf("PIB: %.2f bilhões de reais \n" ,pib2);
    printf("Número de Pontos Turísticos: %d \n" ,pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n" ,densidade2);
    printf("PIB Per Capita: %.2f reais\n" ,percapita2);
    printf("Super Poder: %.2f \n" ,superpoder2);

    printf("\n\n");
    //encerra-se a exibição dos dados
    
    //Ínicio do sistema de comparação de cartas

    //Entrada de dados das comparações

    int resultado_populacao = populacao1 > populacao2 ;
    float resultado_area = area1 > area2 ;
    float resultado_pib = pib1 > pib2 ;
    int resultado_pontosturisticos = pontosturisticos1 > pontosturisticos2 ;
    float resultado_densidade = densidade1 < densidade2 ; // aqui o sinal é menor que "ou seja, invertido dos demais", pois a carta com menor valor, vence.
    float resultado_percapita = percapita1 > percapita2 ;
    float resultado_superpoder = superpoder1 > superpoder2 ;

    //Saída de dados das comparações
    printf("### Menu de Comparação das Cartas ### \n\n"); //anuncio da comparação das cartas
    
    //Inicio das opções para o usuário escolher
    printf("1 - População \n"); 
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Números de pontos turísticos \n");
    printf("5 - Densidade populacional \n\n ");
    //final das opções para o usuário escolher

    int opcao; //responsável para armazenar a opção da escolha do usuário para escolher o atributo a ser comparado.

    printf("Digite alguma das opções acima para comparar o atributo: "); 
    scanf("%d" ,&opcao); //aqui irá registrar a opção que o usuário irá escolher.

    printf("\n"); // quebra de linha.

    switch (opcao) // aqui de acordo com a opção do usuário, de 1 a 5, irá determinar em qual case vai ser utilizado.
    { //em cada caso será usado os mesmos codigos, mudando apenas as variáveis de cada CASE.
    case 1:
        printf("Vamos saber quem ganhou ! \n"); // anuncio para saber quem ganhou.
        printf("%s x %s \n" ,cidade1 ,cidade2); // mostra o nomes das cidades.
        printf("O atributo escolhido foi População. \n"); //de acordo com a opção escolhida, a CASE diz qual o atributo foi escolhido.
        printf("Carta 1 (%s): %lu \n" ,cidade1 ,populacao1); // mostra o nome da carta e o valor do atributo da CARTA 1.
        printf("Carta 2 (%s): %lu \n" ,cidade2 ,populacao2); // mostra o nome da carta e o valor do atributo da CARTA 2.
        
        if (populacao1 == populacao2) // se ambas as variáveis estiverem valores iguais, será EMPATE.
        {
            printf("Empate !");
        }else if (populacao1 > populacao2) // se a variável da CARTA 1 for maior que a da CARTA 2, CARTA 1 vence.
        {
            printf("Carta 1 venceu !");
        }else // se não couber a nenhum dos casos acima, a CARTA 2 vence.
        {
            printf("Carta 2 venceu !");
        }
        break;
    
    case 2:
        printf("Vamos saber quem ganhou ! \n");
        printf("%s x %s \n" ,cidade1 ,cidade2);
        printf("O atributo escolhido foi Área. \n");
        printf("Carta 1 (%s): %.2f km² \n" ,cidade1 ,area1);
        printf("Carta 2 (%s): %.2f km² \n" ,cidade2 ,area2);
        
        if (area1 == area2)
        {
            printf("Empate !");
        }else if (area1 > area2)
        {
            printf("Carta 1 venceu !");
        }else
        {
            printf("Carta 2 venceu !");
        }
        break;

        case 3:
        printf("Vamos saber quem ganhou ! \n");
        printf("%s x %s \n" ,cidade1 ,cidade2);
        printf("O atributo escolhido foi PIB. \n");
        printf("Carta 1 (%s): %.2f bilhões de reais \n" ,cidade1 ,pib1);
        printf("Carta 2 (%s): %.2f bilhões de reais \n" ,cidade2 ,pib2);
        
        if (pib1 == pib2)
        {
            printf("Empate !");
        }else if (pib1 > pib2)
        {
            printf("Carta 1 venceu !");
        }else
        {
            printf("Carta 2 venceu !");
        }
        break;

        case 4:
        printf("Vamos saber quem ganhou ! \n");
        printf("%s x %s \n" ,cidade1 ,cidade2);
        printf("O atributo escolhido foi Números de pontos turísticos. \n");
        printf("Carta 1 (%s): %d \n" ,cidade1 ,pontosturisticos1);
        printf("Carta 2 (%s): %d \n" ,cidade2 ,pontosturisticos2);
        
        if (pontosturisticos1 == pontosturisticos2)
        {
            printf("Empate !");
        }else if (pontosturisticos1 > pontosturisticos2)
        {
            printf("Carta 1 venceu !");
        }else
        {
            printf("Carta 2 venceu !");
        }
        break;

        case 5:
        printf("Vamos saber quem ganhou ! \n");
        printf("%s x %s \n" ,cidade1 ,cidade2);
        printf("O atributo escolhido foi Densidade Populacional. \n");
        printf("Carta 1 (%s): %.2f hab/km² \n" ,cidade1 ,densidade1);
        printf("Carta 2 (%s): %.2f hab/km² \n" ,cidade2 ,densidade2);
        
        if (densidade1 == densidade2)
        {
            printf("Empate !");
        }else if (densidade1 < densidade2)
        {
            printf("Carta 1 venceu !");
        }else
        {
            printf("Carta 2 venceu !");
        }
        break;
    
    default: //caso o usuário um número que não corresponda as opções, irá informar que a Opção é inválida.
        printf("Opção inválida !");
        break;
    }
      
    return 0;

    //Encerra-se o código
    
}
