#include <stdio.h>
#include <string.h>

// Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
// Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
// Nome da Cidade: O nome da cidade. Tipo: char[] (string)
// População: O número de habitantes da cidade. Tipo: int
// Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
// PIB: O Produto Interno Bruto da cidade. Tipo: float
// Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
// Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:
// Carta 1:
// Estado: A
// Código: A01
// Nome da Cidade: São Paulo
// População: 12325000
// Área: 1521.11 km²
// PIB: 699.28 bilhões de reais
// Número de Pontos Turísticos: 50
// Carta 2:
// Estado: B
// Código: B02
// Nome da Cidade: Rio de Janeiro
// População: 6748000
// Área: 1200.25 km²
// PIB: 300.50 bilhões de reais
// Número de Pontos Turísticos: 30    

int main (){
    char estado, estado2;
    char codigo[5], codigo2[5];
    char cidade[50], cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;

    //Carta 1

    //Estado
    printf("Digite uma letra de A a H: ");
    scanf("%c", &estado);
    

    // Codigo
    printf("Digite a letra da cidade e um numero de 01 a 04 para o codigo da cidade: ");
    scanf("%s", &codigo);
    getchar(); //  <- limpa o buffer antes do fgets

    //Cidade
    printf("Digite uma cidade: ");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';
    

    //População
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao);
    getchar();

    //Area em km²
    printf("Digite a area territorial: ");
    scanf("%f", &area);
    getchar();

    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    getchar();

    //Pontos turísticos
    printf("Quantos pontos turisticos tem na cidade?: ");
    scanf("%d", &pontos_turisticos);
    getchar();
    
    

    //Carta 2
    //Estado
    printf("Digite uma letra de A a H: ");
    scanf("%c", &estado2);
    

    // Codigo
    printf("Digite a letra da cidade e um numero de 01 a 04 para o codigo da cidade: ");
    scanf("%s", &codigo2);
    getchar(); //  <- limpa o buffer antes do fgets

    //Cidade
    printf("Digite uma cidade: ");
    fgets(cidade2, 50, stdin);
    cidade[strcspn(cidade2, "\n")] = '\0';
    

    //População
    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao2);
    getchar();
    
    //Area em km²
    printf("Digite a area territorial: ");
    scanf("%f", &area2);
    getchar();

    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    getchar();

    //Pontos turísticos
    printf("Quantos pontos turisticos tem na cidade?: ");
    scanf("%d", &pontos_turisticos2);
    getchar();

    //Cálculo da Densidade Populacional
    float densidade_populacional = populacao / area;
    float densidade_populacional2 = populacao2 / area2;

    //Cálculo do PIB per Capita
    float pib_per_capita = pib / populacao;
    float pib_per_capita2 = pib2 / populacao2;
    
    //Mostrado na tela
    // Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km \n", area);
    printf("PIB: %.2f bilhoes de reais \n", pib);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    // Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km \n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);


    return 0;

}
