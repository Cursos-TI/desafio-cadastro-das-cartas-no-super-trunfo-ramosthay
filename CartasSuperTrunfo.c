#include <stdio.h>

//Desafio Super Trunfo - Aventureiro
//Teste Thaynara

//Classificação das Cartas 1 e 2 
int main(){  // Carta 1 e 2
    char estado = 'A';
    char estado2 = 'B';

    char codigo[5] = "A01";
    char codigo2[5] = "B01";

    char nome[10] = "Fortaleza";
    char nome2[9] = "Salvador";

    float area = 314.93;
    float area2 = 693.00;

    float pib = 73.400;
    float pib2 = 62.954;

    int pontosturisticos = 45;
    int pontosturisticos2 = 65;

    int populacao = 2430000;
    int populacao2 = 2420000;

    float densidadepopulacional = populacao / area;
    float densidadepopulacional2 = populacao2 / area2;

    float pibpercapita = populacao / pib;
    float pibpercapita2 = populacao2 / pib2;
    

    //Códigos da Carta 1
    printf("Carta 1\n");

    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", nome);

    printf("População: %d\n", populacao);

    printf("Área em km²: %.2fkm²\n", area);

    printf("PIB: %.2f bilhões de reais\n", pib);

    printf("Pontos turísticos: %d\n", pontosturisticos);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);

    printf("PIB per capita: %.2f reais\n", pibpercapita);

    printf("\n");

    //Códigos da Carta 2
    printf("Carta 2\n");

    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("População: %d\n", populacao2);

    printf("Área em km²: %.2fkm²\n", area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);

    printf("Pontos túristicos: %d\n", pontosturisticos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);

    printf("PIB per capita: %.2f reais\n", pibpercapita2);

    printf("\n");
 
 
 }
