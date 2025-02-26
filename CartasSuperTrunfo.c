#include <stdio.h>

//Desafio Super Trunfo - Novato
//Teste Thaynara

//Classificação das Cartas 1 e 2 
int main(){  // Carta 1 e 2
    char estado = 'A';
    char estado2 = 'B';

    char codigo[5] = "A01";
    char codigo2[5] = "B01";

    char nome[9] = "Fortaleza";
    char nome2[9] = "Salvador";

    float area = 313.8;
    float area2 = 693.8;

    float pib = 73.436;
    float pib2 = 62.954;

    int pontos turisticos = 45;
    int pontos turisticos2 = 65;

    float populacao = 2429;
    float populacao2 = 2418;

    float densidade populacional = populacao / area;
    float densidade populacional2 = populacao2 / area2;

    float pib per capita = pib / populacao;
    float pib per capita2 = pib2 / populacao2;
    

    //Códigos da Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);

    printf("Nome da Cidade: %s\n", nome);

    printf("Código: %s\n", codigo);

    printf("Área em km²: %.2fkm²\n", area);

    printf("PIB: %.3f milhões\n", pib);

    printf("População: %d\f", populacao);

    printf("Pontos turísticos: %d\n", pontos turisticos);

    printf("Densidade Populacional: %f\n", densidade populacional);

    printf("PIB per capita: %f\n", pib per capita);

    printf("\n");

    //Códigos da Carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("Código: %s\n", codigo2);

    printf("Área em km²: %.2fkm²\n", area2);

    printf("PIB: %.3f milhões\n", pib2);

    printf("População: %f \n", populacao2);

    printf("Pontos túristicos: %d\n", pontosturisticos2);

    printf("Densidade Populacional: %f\n", densidade populacional2);

    printf("PIB per capita: %f\n", pib per capita2);

 return 0;
 
}
