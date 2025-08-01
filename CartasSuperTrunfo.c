#include <stdio.h>

int main() {
    
    //Variáveis da carta 1
    char estado1, codigo1[4], cidade1[50];
    int populacao1, PontosTuristicos1;
    float area1, pib1;

    //Variáveis da carta 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, PontosTuristicos2;
    float area2, pib2;


    //Leitura da carta 1
    printf("Digite os dados da Carta 1: \n");

    printf("Estado (letra de A a H): \n");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): \n");
    scanf(" %s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf(" %s", &cidade1);

    printf("População: \n");
    scanf(" %d", &populacao1);

    printf("Área (em Km²): \n");
    scanf(" %f", &area1);

    printf("PIB (em bilhões): \n");
    scanf(" %f", &pib1);

    printf("Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos1);


    //Leitura da carta 2
    printf("\nDigite os dados da Carta 2: \n");

    printf("Estado (letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A02): \n");
    scanf(" %s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %s", &cidade2);

    printf("População: \n");
    scanf(" %d", &populacao2);

    printf("Área (em Km²): \n");
    scanf(" %f", &area2);

    printf("PIB (em bilhões): \n");
    scanf(" %f", &pib2);

    printf("Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos2);


    //Impressão da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fKm²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);


    //Impressão da carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}
