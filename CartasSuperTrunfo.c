#include <stdio.h>

//Desafio Super Trunfo - Aventureiro
//Teste Thaynara

//Classificação das Cartas 1 e 2 
int main(){  // Carta 1 e 2
    char estado = 'A';
    char estado2 = 'B';

    char codigo[5] = "A01";
    char codigo2[5] = "B01";

    char nome[12] = "Fortaleza";
    char nome2[9] = "Salvador";

    float area = 313.8;
    float area2 = 693.8;

    float pib = 73.400;
    float pib2 = 62.954;

    int pontosturisticos = 45;
    int pontosturisticos2 = 65;

    float populacao = 2430;
    float populacao2 = 2418;

    float densidadepopulacional = populacao / area;
    float densidadepopulacional2 = populacao2 / area2;

    float pibpercapita = populacao / area;
    float pibpercapita2 = pib2 / populacao2;
    

    //Códigos da Carta 1
    printf("Carta 1\n");

    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", nome);

    printf("População: %.2f milhões\n", populacao);

    printf("Área: %.2fkm²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Pontos turísticos: %d\n", pontosturisticos);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);

    printf("PIB per capita: %.2f mil reais\n", pibpercapita);

    printf("\n");

    //Códigos da Carta 2
    printf("Carta 2\n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("População: %.2f milhões\n", populacao2);

    printf("Área: %.2fkm²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Pontos turísticos: %d\n", pontosturisticos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);

    printf("PIB per capita: %.2f mil reais\n", pibpercapita2);

    printf("\n");

    