#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
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
        
    //Area em km²
    printf("Digite a area territorial: ");
    scanf("%f", &area);
    
    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    
    //Pontos turísticos
    printf("Quantos pontos turisticos tem na cidade?: ");
    scanf("%d", &pontos_turisticos);
        
        
    
    //Carta 2
    //Estado
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &estado2);
        
    
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
        
    //Area em km²
    printf("Digite a area territorial: ");
    scanf("%f", &area2);
    
    //PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
  
    //Pontos turísticos
    printf("Quantos pontos turisticos tem na cidade?: ");
    scanf("%d", &pontos_turisticos2);
        
    
    
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
    // Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km \n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
   
    return 0;
    
 }

