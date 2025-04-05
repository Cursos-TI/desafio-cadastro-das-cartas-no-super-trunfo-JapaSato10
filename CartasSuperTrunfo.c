#include <stdio.h>

int main (){


char Estado1 = "Sao Paulo";
char CodigoCarta1[5] = "a01";
char Cidade1[20] = "Campinas";
int Populacao1 = 100000;
float Área1 = 10000;
float PIB1 = 1000;
int PontosTuristicos1 = 100;

pprintf("Digite a letra do estado da primeira carta (A-H): ");
scanf(" %c", &Estado1);

printf("Digite o código da carta: ");
scanf(" %s", CodigoCarta1);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", Cidade1);

printf("Digite a população da cidade: ");
scanf("%d", &Populacao1);

printf("Digite a área da cidade: ");
scanf("%f", &Área1);

printf("Digite o PIB da cidade: ");
scanf("%f", &PIB1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &PontosTuristicos1);

char Estado2 = "Bahia";
char CodigoCarta2[5] = "b02";
char Cidade2[20] = "Salvador";
int Populacao2 = 200000;
float Área2 = 20000;
float PIB2 = 200;
int PontosTuristico2 = 250;

pprintf("Digite a letra do estado da segunda carta (A-H): ");
scanf(" %c", &Estado2);

printf("Digite o código da carta: ");
scanf(" %s", CodigoCarta2);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", Cidade2);

printf("Digite a população da cidade: ");
scanf("%d", &Populacao2);

printf("Digite a área da cidade: ");
scanf("%f", &Área2);

printf("Digite o PIB da cidade: ");
scanf("%f", &PIB2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &PontosTuristico2);

printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Área1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

 printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristico2);


return 0;

}