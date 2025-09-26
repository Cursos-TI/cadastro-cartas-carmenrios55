#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado1; // Uma letra de 'A' a 'H' (representando um dos oito estados)
  char estado2;
  char codigo1[3]; // Letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
  char codigo2[3];
  char cidade1[50]; // Nome da cidade
  char cidade2[50];
  int populacao1, populacao2; // Número de habitantes da cidade
  int numeroturisticos1; // Quantidade de pontos turísticos na cidade
  int numeroturisticos2; 
  float pib1;  // Produto Interno Bruto da cidade
  float pib2;
  float area1;// Área (em km²) da cidade.
  float area2; 
  
  printf("Carta 1\n"); //Carta 1

  printf("Digite o Estado: ");
  scanf(" %c", &estado1);
  while(getchar() != '\n');

  printf("Digite o codigo da carta: ");
  scanf("%4s", codigo1);
  while(getchar() != '\n');

  printf("Digite a cidade: ");
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);
  while(getchar() != '\n');

  printf("Digite os Pontos turistico:"); 
  scanf("%d", &numeroturisticos1);
  while(getchar() != '\n');

  printf("Digite o pib: ");
  scanf("%f", &pib1);
  while(getchar() != '\n');

  printf("Digite a area: ");
  scanf("%f", &area1);
  while(getchar() != '\n');

   printf("Carta 2\n"); // Carta2
 
  printf("Digite o Estado: ");
  scanf(" %c", &estado2);
  while(getchar() != '\n');

  printf("Digite o codigo da carta: ");
  scanf("%4s", codigo2);
  while(getchar() != '\n');

  printf("Digite a cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

  printf("Digite a populacao: ");
  scanf("%d", &populacao2);
  while(getchar() != '\n');

  printf("Digite os Pontos turistico: ");
  scanf("%d", &numeroturisticos2);
  while(getchar() != '\n');

  printf("Digite o pib: ");
  scanf("%f", &pib2);
  while(getchar() != '\n');

  printf("Digite a area: ");
  scanf("%f", &area2);
  while(getchar() != '\n');


  // Exibindo os dados carta1

printf("\n--- Carta cadastrada01 ---\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Pontos Turisticos: %d\n", numeroturisticos1);
printf("PIB: %.2f\n", pib1);
printf("Area: %.2f km²\n", area1);

   // Exibindo os dados carta2
   
printf("\n--- Carta cadastrada02 ---\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Pontos Turisticos: %d\n", numeroturisticos2);
printf("PIB: %.2f\n", pib2);
printf("Area: %.2f km²\n", area2);

return 0;

}