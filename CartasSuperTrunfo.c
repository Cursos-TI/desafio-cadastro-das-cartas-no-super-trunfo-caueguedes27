#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char estado; // Estado representado por uma única letra (A-H)
    char codigo[4]; // Código da carta (exemplo: A01, B02...)
    char nome_cidade[50]; // Nome da cidade (até 50 caracteres)
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade em trilhões
    int pontos_turisticos; // Número de pontos turísticos
} Carta;

int main() {
    Carta carta1, carta2; // Declaração de duas cartas

    // Entrada de dados para a primeira carta
    printf("\nCadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado); // Lê o estado
    printf("Codigo da carta (ex: A01, B02...): ");
    scanf("%3s", carta1.codigo); // Lê o código da carta (máximo de 3 caracteres)
    printf("Nome da Cidade: ");
    scanf(" %49s", carta1.nome_cidade); // Lê o nome da cidade com espaços
    printf("Populacao: ");
    scanf("%d", &carta1.populacao); // Lê a população
    printf("Area (km^2): ");
    scanf("%f", &carta1.area); // Lê a área da cidade
    printf("PIB (em trilhoes): ");
    scanf("%f", &carta1.pib); // Lê o PIB da cidade
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos); // Lê o número de pontos turísticos

    // Entrada de dados para a segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado); // Lê o estado
    printf("Codigo da carta (ex: A01, B02...): ");
    scanf("%3s", carta2.codigo); // Lê o código da carta
    printf("Nome da Cidade: ");
    scanf(" %49s", carta2.nome_cidade); // Lê o nome da cidade com espaços
    printf("Populacao: ");
    scanf("%d", &carta2.populacao); // Lê a população
    printf("Area (km^2): ");
    scanf("%f", &carta2.area); // Lê a área da cidade
    printf("PIB (em trilhoes): ");
    scanf("%f", &carta2.pib); // Lê o PIB da cidade
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos); // Lê o número de pontos turísticos

    // Exibição dos dados cadastrados
    printf("\n================ Dados das Cartas ================\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km^2\n", carta1.area);
    printf("PIB: %.2f trilhoes\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km^2\n", carta2.area);
    printf("PIB: %.2f trilhoes\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
