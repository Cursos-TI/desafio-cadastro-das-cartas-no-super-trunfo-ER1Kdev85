#include <stdio.h>


char estado;
char id[4];
char nome[50];
int populaçao;
int pontost;
float area;
float pib;


int main() {
    printf("Seja bem vindo(a) ao Cartas Trunfo! \n");

    printf("Vamos começar com a CARTA 1. Digite o estado: \n");
    scanf("%s", &estado);  

    printf("Ok. Agora me diga o ID da carta: \n");
    scanf("s%", &id);

    printf("òtimo, pode me informar o nome d cidade? \n");
    scanf("s%", &nome);

    printf("Qual a população atual da cidade? \n");
    scanf("d%", &populaçao);

    printf("Perfeito! Consegue me informar a quantidade de pontos turísticos da cidade? \n");
    scanf("d%", &pontost);

    printf("Qual a área total da cidade em km2? \n");
    scanf("f%", &area);

    printf("Por último, qual o PIB da cidade? \n");
    scanf("f%", &pib);
    



    return 0;
}
