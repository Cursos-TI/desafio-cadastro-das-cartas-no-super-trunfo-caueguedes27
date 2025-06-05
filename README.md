# Desafio Super Trunfo - Países - Cadastro das Cartas 

# Cadastro de Cartas de Cidades em C

Este projeto em linguagem C permite cadastrar e exibir informações de duas "cartas" que representam cidades brasileiras. Cada carta possui dados como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos.

Funcionalidades

- Cadastro de duas cartas com:
  - Estado (representado por uma letra de A a H)
  - Código da carta (ex.: A01, B02)
  - Nome da cidade
  - População
  - Área (em km²)
  - PIB (em trilhões)
  - Número de pontos turísticos
- Exibição dos dados das cartas cadastradas no terminal

Estrutura da Carta
```c
typedef struct {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;



