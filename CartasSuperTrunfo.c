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

    printf("### Menu de Comparação das Cartas ### \n"); //anuncio da comparação das cartas
    printf("Vamos comparar dois atributos para ver que venceu ! \n\n");

    //Inicio das opções para o usuário escolher
    printf("1 - população \n"); 
    printf("2 - area \n");
    printf("3 - pib \n");
    printf("4 - pontos turísticos \n");
    printf("5 - densidade populacional \n\n ");
    //final das opções para o usuário escolher

    int primeiroatributo; //responsável para armazenar a opção da escolha do usuário para escolher o atributo a ser comparado.
    int resultado1; //variável responsável para armazenar o resultado da comparação das variáveis do atributo escolhido.

    printf("Digite o número correspondente das opções acima para comparar o primeiro atributo:"); 
    scanf("%d" ,&primeiroatributo); //aqui irá registrar a opção que o usuário irá escolher.

    printf("\n"); // quebra de linha.

    switch (primeiroatributo) // aqui de acordo com a opção do usuário, de 1 a 5, irá determinar em qual case vai ser utilizado.
    { //em cada caso será usado os mesmos codigos, mudando apenas as variáveis de cada CASE.

    case 1:
        
        printf("Você escolheu a opção População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    
    case 2:

        printf("Você escolheu a opção Área!\n");
        resultado1 =  area1 > area2 ? 1 : 0;
        break;

    case 3:

        printf("Você escolheu a opção PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

    case 4:

        printf("Você escolheu a opção Números de Pontos Turísticos!\n");
        resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
        break;

    case 5:

        printf("Você escolheu a opção Densidade Populacional!\n");
        resultado1 =  densidade1 <  densidade2 ? 1 : 0; // na densidade o sinal é inverso, pois quanto menor o resultado, melhor para a carta.  
        break;
    
    default:
        printf("Opção inválida \n!");
        break;
    }


    //abaixo será repetido o que foi feito no primeiro atributo, mudando apenas as variáveis para o segundo atributo.
    printf("Iremos escolher o segundo atributo.\n\n");

    printf("1 - População \n"); 
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Números de pontos turísticos \n");
    printf("5 - Densidade populacional \n\n ");

    int segundoatributo;
    int resultado2;

    
    printf("Digite o número correspondente das opções acima para comparar o segundo atributo: "); 
    scanf("%d" ,&segundoatributo); //aqui irá registrar a opção que o usuário irá escolher.

    printf("\n"); // quebra de linha.

    if (primeiroatributo == segundoatributo)
    {
        printf("Você escolheu o mesmo atributo!");
        
    exit(0);
    }else{
        switch (segundoatributo) 
        { 
        case 1:
            
            printf("Você escolheu a opção Populacão!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        
        case 2:
    
            printf("Você escolheu a opção Área!\n");
            resultado2 =  area1 > area2 ? 1 : 0;
            break;
    
        case 3:
    
            printf("Você escolheu a opção PIB!\n");
            resultado2 =  pib1 > pib2 ? 1 : 0;
            break;
    
        case 4:
    
            printf("Você escolheu a opção Números de Pontos Turísticos!\n");
            resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
            break;
    
        case 5:
    
            printf("Você escolheu a opção Densidade Populacional!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0; 
            break;
        
        default:
            printf("Opção inválida \n!");
            break;
        }
    }
    
    printf("## RESULTADO ## \n\n"); // aqui começa o resultado das comparações das cartas.

    printf("%s x %s \n" ,cidade1 ,cidade2); 
    
    
    // Todos os IFs, mantém a mesma lógica, com excessão dos números, pois depende de qual número o usuário escolher.

        if (primeiroatributo == 1 && segundoatributo == 2) // se o usuário digitar 1 para o primeiro atributo "e" digitar 2 para o segundo atributo, o resultado serão estes Printf.
        {
            float resultadocarta1 = populacao1 + area1;
            float resultadocarta2 = populacao2 + area2; 
            printf("Primeiro atributo: População ; Segundo atributo: Área \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 1 && segundoatributo == 3)
        {
            float resultadocarta1 = populacao1 + pib1;
            float resultadocarta2 = populacao2 + pib2;
            printf("Primeiro atributo: População ; Segundo atributo: PIB \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 1 && segundoatributo == 4)
        {
            float resultadocarta1 = populacao1 + pontosturisticos1;
            float resultadocarta2 = populacao2 + pontosturisticos2;
            printf("Primeiro atributo: População ; Segundo atributo: Números de Pontos Turísticos \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 1 && segundoatributo == 5)
        {
            float resultadocarta1 = populacao1 + densidade1;
            float resultadocarta2 = populacao2 + densidade2;
            printf("Primeiro atributo: População ; Segundo atributo: Densidade Populacional \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 2 && segundoatributo == 1)
        {
            float resultadocarta1 = area1 + populacao1;
            float resultadocarta2 = area2 + populacao2;
            printf("Primeiro atributo: Área ; Segundo atributo: População \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 2 && segundoatributo == 3)
        {
            float resultadocarta1 = area1 + pib1;
            float resultadocarta2 = area2 + pib2;
            printf("Primeiro atributo: Área ; Segundo atributo: PIB \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 2 && segundoatributo == 4)
        {
            float resultadocarta1 = area1 + pontosturisticos1;
            float resultadocarta2 = area2 + pontosturisticos2;
            printf("Primeiro atributo: Área ; Segundo atributo: Números de Pontos Turísticos \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 2 && segundoatributo == 5)
        {
            float resultadocarta1 = area1 + densidade1;
            float resultadocarta2 = area2 + densidade2;
            printf("Primeiro atributo: Área ; Segundo atributo: Densidade Populacional \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 3 && segundoatributo == 1)
        {
            float resultadocarta1 = pib1 + populacao1;
            float resultadocarta2 = pib2 + populacao2;
            printf("Primeiro atributo: PIB ; Segundo atributo: População \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 3 && segundoatributo == 2)
        {
            float resultadocarta1 = pib1 + area1;
            float resultadocarta2 = pib2 + area2;
            printf("Primeiro atributo: PIB ; Segundo atributo: Área \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 3 && segundoatributo == 4)
        {
            float resultadocarta1 = pib1 + pontosturisticos1;
            float resultadocarta2 = pib2 + pontosturisticos2;
            printf("Primeiro atributo: PIB ; Segundo atributo: Números de Pontos Turísticos \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 3 && segundoatributo == 5)
        {
            float resultadocarta1 = pib1 + densidade1;
            float resultadocarta2 = pib2 + densidade2;
            printf("Primeiro atributo: PIB ; Segundo atributo: Densidade Populacional \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 4 && segundoatributo == 1)
        {
            float resultadocarta1 = pontosturisticos1 + populacao1;
            float resultadocarta2 = pontosturisticos2 + populacao2;
            printf("Primeiro atributo: Números de Pontos Turísticos ; Segundo atributo: População \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 4 && segundoatributo == 2)
        {
            float resultadocarta1 = pontosturisticos1 + area1;
            float resultadocarta2 = pontosturisticos2 + area2;
            printf("Primeiro atributo: Números de Pontos Turísticos ; Segundo atributo: Área \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 4 && segundoatributo == 3)
        {
            float resultadocarta1 = pontosturisticos1 + pib1;
            float resultadocarta2 = pontosturisticos2 + pib2;
            printf("Primeiro atributo: Números de Pontos Turísticos ; Segundo atributo: PIB \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 4 && segundoatributo == 5)
        {
            float resultadocarta1 = pontosturisticos1 + densidade1;
            float resultadocarta2 = pontosturisticos2 + densidade2;
            printf("Primeiro atributo: Números de Pontos Turísticos ; Segundo atributo: Densidade Populacional \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 5 && segundoatributo == 1)
        {
            float resultadocarta1 = densidade1 + populacao1;
            float resultadocarta2 = densidade2 + populacao2;
            printf("Primeiro atributo: Densidade Populacional ; Segundo atributo: População \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 5 && segundoatributo == 2)
        {
            float resultadocarta1 = densidade1 + area1;
            float resultadocarta2 = densidade2 + area2;
            printf("Primeiro atributo: Densidade Populacional ; Segundo atributo: Área \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 5 && segundoatributo == 3)
        {
            float resultadocarta1 = densidade1 + pib1;
            float resultadocarta2 = densidade2 + pib2;
            printf("Primeiro atributo: Densidade Populacional ; Segundo atributo: PIB \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }if (primeiroatributo == 5 && segundoatributo == 4)
        {
            float resultadocarta1 = densidade1 + pontosturisticos1;
            float resultadocarta2 = densidade2 + pontosturisticos2;
            printf("Primeiro atributo: Densidade Populacional ; Segundo atributo: Números de Pontos Turísticos \n");
            printf("A soma dos atributos da primeira carta: %.2f \n" ,resultadocarta1);
            printf("A soma dos atributos da segunda carta: %.2f \n" ,resultadocarta2);
        }
        if (resultado1 && resultado2){ // se o resultado do primeiro atributo a carta 1 venceu "E" o resultado do segundo atributo a carta 1 venceu, a carta 1 é vencedora.
            printf("Carta 1 venceu !");
        }else if (resultado1 != resultado2){ // se o resultado do primeiro atributo e do segundo atributo cada uma das cartas venceram, há um empate.
            printf("Empatou !");
        }else
            printf("Carta 2 venceu !"); // se o resultado do primeiro atributo a carta 2 venceu "E" o resultado do segundo atributo a carta 2 venceu, a carta 2 é vencedora.
        
    
    return 0;
}
    //Encerra-se o código