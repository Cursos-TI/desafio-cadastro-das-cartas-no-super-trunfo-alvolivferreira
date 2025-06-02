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

// cálculo do Super Poder
float Super_Poder_1 = Populacao_1 + Area_1 + PIB_1 + Numero_de_pontos_turisticos_1 + (1 / Densidade_1) + PIB_per_Capita_1;
float Super_Poder_2 = Populacao_2 + Area_2 + PIB_2 + Numero_de_pontos_turisticos_2 + (1 / Densidade_2) + PIB_per_Capita_2;

// exibição dos dados
printf("RESULTADO DAS CARTAS\n");

// Carta 1
printf("\nCarta_1:\n");
printf("Estado: %c\n", Estado_1);
printf("Código: %s\n", Codigo_da_carta_1);
printf("Nome da Cidade: %s\n", Nome_da_cidade_1);
printf("População: %d\n", Populacao_1);
printf("Área: %.2f km²\n", Area_1);
printf("PIB: %.2f bilhões\n", PIB_1);
printf("Pontos Turísticos: %d\n", Numero_de_pontos_turisticos_1);
printf("Densidade: %.2f hab/km²\n", Densidade_1);
printf("PIB per Capita: %.2f\n", PIB_per_Capita_1);
printf("Super Poder: %.2f\n", Super_Poder_1);

// Carta 2
printf("\nCarta_2:\n");
printf("Estado: %c\n", Estado_2);
printf("Código: %s\n", Codigo_da_carta_2);
printf("Nome da Cidade: %s\n", Nome_da_cidade_2);
printf("População: %d\n", Populacao_2);
printf("Área: %.2f km²\n", Area_2);
printf("PIB: %.2f bilhões\n", PIB_2);
printf("Pontos Turísticos: %d\n", Numero_de_pontos_turisticos_2);
printf("Densidade: %.2f hab/km²\n", Densidade_2);
printf("PIB per Capita: %.2f\n", PIB_per_Capita_2);
printf("Super Poder: %.2f\n", Super_Poder_2);

// comparação de atributos (1 = carta 1 vence, 0 = carta 2 vence)
printf("\n===== COMPARAÇÃO ENTRE CARTAS =====\n");

printf("População: %d\n", Populacao_1 > Populacao_2);
printf("Área: %d\n", Area_1 > Area_2);
printf("PIB: %d\n", PIB_1 > PIB_2);
printf("Pontos Turísticos: %d\n", Numero_de_pontos_turisticos_1 > Numero_de_pontos_turisticos_2);
printf("Densidade (vence menor): %d\n", Densidade_1 < Densidade_2);
printf("PIB per Capita: %d\n", PIB_per_Capita_1 > PIB_per_Capita_2);
printf("Super Poder: %d\n", Super_Poder_1 > Super_Poder_2);

return 0;
}
