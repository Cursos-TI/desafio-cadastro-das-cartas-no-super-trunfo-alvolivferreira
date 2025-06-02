#include<stdio.h>

int main() {  

//cadastro de variaveis carta 1
char Estado_1;
char Codigo_da_carta_1[3];
char Nome_da_cidade_1[50];
int Populacao_1;
float Area_1;
float PIB_1;
int Numero_de_pontos_turisticos_1;
float Densidade_1;
float PIB_per_Capita_1;

//cadastro de variaveis carta 2
char Estado_2;
char Codigo_da_carta_2[3];
char Nome_da_cidade_2[50];
int Populacao_2;
float Area_2;
float PIB_2;
int Numero_de_pontos_turisticos_2;
float Densidade_2;
float PIB_per_Capita_2;

// Descrição de dados da carta 1
printf("Carta_1:\n");

printf("Estado(A-H):");
scanf (" %c", &Estado_1);

printf("Codigo_da_carta:");
scanf (" %s", Codigo_da_carta_1);

printf("Nome_da_cidade:");
scanf (" %[^\n]", Nome_da_cidade_1);

printf("Populacao:");
scanf (" %d", &Populacao_1);

printf("Area:");
scanf (" %f", &Area_1);

printf("PIB:");
scanf (" %f", &PIB_1);

printf("NUmero_de_pontos_turisticos:");
scanf (" %d", &Numero_de_pontos_turisticos_1);

// Descrição de dados da carta 2
printf("Carta_2:\n");

printf("Estado(A-H):");
scanf (" %c", &Estado_2);

printf("Codigo_da_carta:");
scanf (" %s", Codigo_da_carta_2);

printf("Nome_da_cidade:");
scanf (" %[^\n]", Nome_da_cidade_2);

printf("Populacao:");
scanf (" %d", &Populacao_2);

printf("Area:");
scanf (" %f", &Area_2);

printf("PIB:");
scanf (" %f", &PIB_2);

printf("Numero_de_pontos_turisticos:");
scanf (" %d", &Numero_de_pontos_turisticos_2);

// calculos
Densidade_1 = Populacao_1 / Area_1;
PIB_per_Capita_1 = PIB_1 * 1000000000 / Populacao_1;

Densidade_2 = Populacao_2 / Area_2;
PIB_per_Capita_2 = PIB_2 * 1000000000 / Populacao_2;

// exibição carta 1
printf("Carta_1:\n");
printf("Estado: %c\n", Estado_1);
printf("Código: %s\n", Codigo_da_carta_1);
printf("Nome da Cidade: %s\n", Nome_da_cidade_1);
printf("População: %d\n", Populacao_1);
printf("Área: %.2f km²\n", Area_1);
printf("PIB: %.2f bilhões de reais\n", PIB_1);
printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos_1);
printf("Densidade Populacional: %.2f hab/km²\n", Densidade_1);
printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_1);

// exibição carta 2
printf("Carta_2:\n");
printf("Estado: %c\n", Estado_2);
printf("Código: %s\n", Codigo_da_carta_2);
printf("Nome da Cidade: %s\n", Nome_da_cidade_2);
printf("População: %d\n", Populacao_2);
printf("Área: %.2f km²\n", Area_2);
printf("PIB: %.2f bilhões de reais\n", PIB_2);
printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos_2);
printf("Densidade Populacional: %.2f hab/km²\n", Densidade_2);
printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_2);
return 0;
}
