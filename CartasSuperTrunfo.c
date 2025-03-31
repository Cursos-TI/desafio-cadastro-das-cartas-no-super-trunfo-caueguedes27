#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CIDADES 2  // Número máximo de cartas a serem cadastradas
#define MAX_NOME 50    // Tamanho máximo para o nome da cidade

// Estrutura que representa uma carta do jogo Super Trunfo
struct CartaSuperTrunfo {
    char estado;               // Representação do estado por uma única letra (A-H)
    char codigo[4];            // Código único da carta (exemplo: A01, A02...)
    char nomeCidade[MAX_NOME]; // Nome da cidade
    int populacao;             // População da cidade
    float area;                // Área da cidade em km²
    float pib;                 // PIB da cidade em bilhões
    int pontosTuristicos;      // Número de pontos turísticos
};

// Função para limpar o buffer do teclado após a leitura de caracteres
void limparBuffer() {
    getchar(); // Remove o caractere de nova linha deixado no buffer
}

// Função para cadastrar uma nova carta Super Trunfo
void cadastrarCarta(struct CartaSuperTrunfo *carta) {
    printf("\nDigite o estado (A-H): ");
    scanf(" %c", &carta->estado);

    // Solicita o código da carta, que deve estar dentro do intervalo do estado especificado
    printf("Digite o código da carta (%c01 - %c04): ", carta->estado, carta->estado);
    scanf("%3s", carta->codigo);

    // Solicita o nome da cidade
    printf("Digite o nome da cidade: ");
    limparBuffer(); // Limpa o buffer para evitar problemas na leitura da string
    fgets(carta->nomeCidade, MAX_NOME, stdin);
    carta->nomeCidade[strcspn(carta->nomeCidade, "\n")] = '\0'; // Remove a quebra de linha

    // Solicita informações numéricas sobre a cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para exibir uma carta cadastrada
void exibirCarta(struct CartaSuperTrunfo carta) {
    printf("\n=================================\n");
    printf("          SUPER TRUNFO\n");
    printf("=================================\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("=================================\n");
}

int main() {
    struct CartaSuperTrunfo cartas[MAX_CIDADES]; // Vetor para armazenar as cartas cadastradas
    
    // Cadastro das cartas
    for (int i = 0; i < MAX_CIDADES; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);
        cadastrarCarta(&cartas[i]);
    }

    // Exibição das cartas cadastradas
    for (int i = 0; i < MAX_CIDADES; i++) {
        exibirCarta(cartas[i]);
    }

    return 0;
}
