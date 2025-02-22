#include <stdio.h>

//Desafio Super Trunfo - Novato
//Teste Thaynara

//Classificação das Cartas 1 e 2 
int main(){  // Carta 1 e 2
    char estado = 'A';
    char estado2 = 'B';

    char codigo[5] = "A01";
    char codigo2[5] = "B01";

    char nome[50] = "Fortaleza";
    char nome2[50] = "Salvador";

    float area = 313.8;
    float area2 = 693.8;

    float pib = 73.436;
    float pib2 = 62.954;

    int pontosturisticos = 45;
    int pontosturisticos2 = 65;

    int populacao = 2429;
    int populacao2 = 2418;

    //Códigos da Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);

    printf("Nome da Cidade: %s\n", nome);

    printf("Código: %s\n", codigo);

    printf("Área em km²: %.2fkm²\n", area);

    printf("PIB: %.3f milhões\n", pib);

    printf("População: %d\n", populacao);

    printf("Pontos turísticos: %d\n", pontosturisticos);

    printf("\n");

    //Códigos da Carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("Código: %s\n", codigo2);

    printf("Área em km²: %.2fkm²\n", area2);

    printf("PIB: %.3f milhões\n", pib2);

    printf("População: %d \n", populacao2);

    printf("Pontos túristicos: %d\n", pontosturisticos2);

 return 0;
 
}