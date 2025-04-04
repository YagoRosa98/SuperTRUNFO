#include <stdio.h>

int main() {
  // Variáveis para a primeira carta
  char estado1, codigo1[5], cidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, pib1;

  // Variáveis para a segunda carta
  char estado2, codigo2[5], cidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2;

  // Primeira carta
  printf("Digite as informações da carta 1!\n");
  printf("Qual o estado? (De A a H)\n");
  scanf(" %c", &estado1);
  printf("Qual o código da cidade?\n");
  scanf(" %s", codigo1);
  printf("Qual a cidade?\n");
  scanf(" %s", cidade1);
  printf("Qual a população?\n");
  scanf(" %d", &populacao1);
  printf("Quantos pontos turísticos tem?\n");
  scanf(" %d", &pontosTuristicos1);
  printf("Qual a área (km²)?\n");
  scanf(" %f", &area1);
  printf("Qual o PIB (em bilhões)?\n");
  scanf(" %f", &pib1);

  // Segunda carta
  printf("Digite as informações da carta 2!\n");
  printf("Qual o estado? (De A a H)\n");
  scanf(" %c", &estado2);
  printf("Qual o código da cidade?\n");
  scanf(" %s", codigo2);
  printf("Qual a cidade?\n");
  scanf(" %s", cidade2);
  printf("Qual a população?\n");
  scanf(" %d", &populacao2);
  printf("Quantos pontos turísticos tem?\n");
  scanf(" %d", &pontosTuristicos2);
  printf("Qual a área (km²)?\n");
  scanf(" %f", &area2);
  printf("Qual o PIB (em bilhões)?\n");
  scanf(" %f", &pib2);

 // Exibição das cartas
 printf("\nCarta 1:\n");
 printf("Estado: %c\n", estado1);
 printf("Código da cidade: %c %s\n", estado1, codigo1);
 printf("Cidade: %s\n", cidade1);
 printf("População: %d\n", populacao1);
 printf("Pontos Turísticos: %d\n", pontosTuristicos1);
 printf("Área (em km²): %.2f\n", area1);
 printf("PIB (em bilhões): %.2f\n", pib1);

 printf("\nCarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código da cidade: %c %s\n", estado2, codigo2);
 printf("Cidade: %s\n", cidade2);
 printf("População: %d\n", populacao2);
 printf("Pontos Turísticos: %d\n", pontosTuristicos2);
 printf("Área (em km²): %.2f\n", area2);
 printf("PIB (em bilhões): %.2f\n", pib2);

 return 0;
}