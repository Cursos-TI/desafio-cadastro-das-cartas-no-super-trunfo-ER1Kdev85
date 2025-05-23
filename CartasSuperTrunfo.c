#include <stdio.h>

//-------------------------------------------------------------------------------

// Variaveis para as cartas. Lembrando: Char: %s - int: %d - float %f

char estado[3], estado2[3];
char id[4], id2[4];
char nome[50], nome2[50];
int populacao, populacao2;
int pontost, pontost2;
float area, area2;
float pib, pib2;

//-------------------------------------------------------------------------------

                    //inicio
int main() {
    printf("Seja bem vindo(a) ao Cartas Trunfo! \n");


    // Informações/valores onde o úsuario vai aplicar nas cartas.

//-------------------------------------------------------------------------------

// CARTA 1
    printf("Vamos começar com a CARTA 1. Digite o estado [UF]: \n");
    scanf("%3s", &estado);  

    printf("Ok. Agora me diga o ID da carta: \n");
    scanf("%3s", &id);

    printf("Ótimo, pode me informar o nome da cidade? (Ex: Fortaleza, RioDeJaneiro, SaoPaulo) \n");
    scanf("%s", &nome);

    printf("Qual a população atual da cidade? (Digite sem '.' e ',') \n");
    scanf("%d", &populacao);

    printf("Perfeito! Consegue me informar a quantidade de pontos turísticos da cidade? \n");
    scanf("%d", &pontost);

    printf("Qual a área total da cidade em km2? (Ex: 313.8) \n");
    scanf("%f", &area);

    printf("Por último, qual o PIB da cidade? (Ex: 73.436) \n");
    scanf("%f", &pib);

//-------------------------------------------------------------------------------

// CARTA 2
    printf("\nPerfeito, já registramos sua primeira carta. Vamos preencher a CARTA 2? \n");

    printf("\nCARTA 2. Comece digitando o estado [UF]: \n");
    scanf("%3s", &estado2);  

    printf("Agora o ID da carta: \n");
    scanf("%3s", &id2);

    printf("Ótimo. Qual o nome da cidade? (Ex: Fortaleza, RioDeJaneiro, SaoPaulo) \n");
    scanf("%s", &nome2);

    printf("População atual da cidade? (Lembre-se, sem '.' e ',') \n");
    scanf("%d", &populacao2);

    printf("Perfeito! Consegue me informar a quantidade de pontos turísticos? \n");
    scanf("%d", &pontost2);

    printf("Qual a área total em km2? (Ex: 313.8) \n");
    scanf("%f", &area2);

    printf("Por último, qual o PIB da cidade? (Ex: 73.436) \n");
    scanf("%f", &pib2);

//-------------------------------------------------------------------------------

    // EXIBIR RESULTADO DA CARTA 1:

    printf("\nCARTAS CRIADAS COM SUCESSO! \n");
    printf("\n---- CARTA 1 ---- \n");
    printf("Estado: %s\n", estado);
    printf("ID: %s\n", id);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Quantidade de pontos turisticos: %d\n", pontost);
    printf("Área total (Km2): %.3f\n", area);
    printf("PIB: %.3f\n", pib);

//-------------------------------------------------------------------------------

    // EXIBIR RESULDADO DA CARTA 2:

    printf("\n---- CARTA 2 ---- \n");
    printf("Estado: %s\n", estado2);
    printf("ID: %s\n", id2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Quantidade de pontos turisticos: %d\n", pontost2);
    printf("Área total (Km2): %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);

//-------------------------------------------------------------------------------


    return 0;
}
