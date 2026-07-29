#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Variáveis criadas e inicializadas para valores conhecidos pelo desenvolvedor

  char estado1 = "", estado2 = "";
  char cod_carta1[4] = "", cod_carta2 [4] = "";
  char nome_cidade1[50] = "", nome_cidade2 [50] = "";
  int populacao1 = 0, populacao2 = 0;
  float area1 = 0.0, area2 =0.0;
  float pib1 = 0.0, pib2 = 0.0;
  int num_pt_turisco1 = 0, num_pt_turisco2 = 0;

  // Área para entrada de dados

  //Aqui o usuario entrará com os dados da carta 01 utilizando a entrada de dado scanf 

  printf("Vamos jogar Super Trunfo?\n");
  printf("\n"); //Pula linha para não misturar os textos
  printf("Comece cadastrando a primeira carta. \n");
  printf("\n"); //Pula linha para não misturar os textos
  
  printf("Digite o estado da carta: ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta: ");
  scanf("%3s", cod_carta1);

  printf("Digite o nome da cidade:");
  scanf("%49s", nome_cidade1);

  printf("Digite a população da cidade:");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade: ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade:");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turisticos da cidade: ");
  scanf("%d", &num_pt_turisco1);
  printf("\n"); //Pula linha para não misturar os textos
 
    //Aqui o usuario entrará com os dados da carta 02 utilizando a entrada de dado scanf 

  printf("Agora cadastre a segunda carta. \n");
  printf("\n"); //Pula linha para não misturar os textos
  
  printf("Digite o estado da carta: ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta: ");
  scanf("%3s", cod_carta2);

  printf("Digite o nome da cidade:");
  scanf("%49s", nome_cidade2);

  printf("Digite a população da cidade:");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade:");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turisticos da cidade: ");
  scanf("%d", &num_pt_turisco2);
  printf("\n"); //Pula linha para não misturar os textos


  // Área para exibição dos dados da cidade

  //Imprime na tela os dados da carta 1 utlizando printf

  printf("Cartas Cadastradas:\n");
  printf("\n"); //Pula linha para não misturar os textos

  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", cod_carta1);
  printf("Nome da Cidade: %s \n", nome_cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %f \n", area1);
  printf("PIB: %f \n", pib1);
  printf("Número de Pontos Turísticos: %d \n", num_pt_turisco1);
  printf("\n"); //Pula linha para não misturar os textos


  //Imprime na tela os dados da carta 2 utlizando printf

  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %S \n", cod_carta2);
  printf("Nome da Cidade: %s \n", nome_cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %f \n", area2);
  printf("PIB: %f \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", num_pt_turisco2);


return 0;
} 
