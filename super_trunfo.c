#include <stdio.h>

int main(){
  char estado1, estado2;
  char codigoCarta1[3], codigoCarta2[3];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int numeroPontosTuristicos1, numeroPontosTuristicos2;

  // Coleta de Dados
  printf("######[ CARTA 1  ]######\n");

  printf("Digite o Estado: ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta: ");
  scanf("%s", codigoCarta1);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade1);

  printf("Digite a população: ");
  scanf("%d", &populacao1);

  printf("Digite a area: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numeroPontosTuristicos1);

  printf("######[ CARTA 2  ]######\n");

  printf("Digite o Estado: ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: ");
  scanf("%s", codigoCarta2);

  printf("Digite o nome da cidade: ");
  scanf("%s", nomeCidade2);

  printf("Digite a população: ");
  scanf("%d", &populacao2);

  printf("Digite a area: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numeroPontosTuristicos2);



  // Exibição
  printf("\n\n####################\n\n");
  printf("> CARTA 1 \n");
  printf("#> Estado: %c\n", estado1);
  printf("#> Código da Carta: %s\n", codigoCarta1);
  printf("#> Nome da Cidade: %s\n", nomeCidade1);
  printf("#> População: %d\n", populacao1);
  printf("#> Área: %.2f\n", area1);
  printf("#> PIB: %.2f\n", pib1);
  printf("#> Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);

  printf("\n> CARTA 2 \n");
  printf("#> Estado: %c\n", estado2);
  printf("#> Código da Carta: %s\n", codigoCarta2);
  printf("#> Nome da Cidade: %s\n", nomeCidade2);
  printf("#> População: %d\n", populacao2);
  printf("#> Área: %.2f\n", area2);
  printf("#> PIB: %.2f\n", pib2);
  printf("#> Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);


  return 0;
}