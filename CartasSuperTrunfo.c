#include <stdio.h>

//Desafio Super Trunfo - Mestre
//Teste Thaynara

//Classificação das Cartas 1 e 2 

int main(){ 
    
    //Variáveis inteiras
    int populacao1;
    int populacao2;

    int pontosturisticos1;
    int pontosturisticos2;


    //Dados a escolha do jogador
    char estado1[50];
    char estado2[50];

    char codigo1[50];
    char codigo2[50];

    char nome1[50];
    char nome2[50];

   
    //Variáveis de ponto flutuante
    float area1;
    float area2;

    float pib1;
    float pib2;

    float pibpercapita1;
    float pibpercapita2;

    float densidadepopulacional1;
    float densidadepopulacional2;

    float superpoder1;
    float superpoder2;

    //Resultado da variáveis
    float resultpopulacao, resultarea, resultpib, resultpontosturisticos, resultdensidadepopulacional, resultpibpercapita, resultsuperpoder;
    float resultpopulacao2, resultarea2, resultpib2, resultpontosturisticos2, resultdensidadepopulacional2, resultpibpercapita2, resultsuperpoder2;

    
    printf("** SuperTrunfo - Países ** \n");

    //Carta 1
    printf("*Carta número 01* \n");

        printf("População: \n");
        scanf("%d", &populacao1);

        printf("Área em km²: \n");
        scanf("%.2f km²", &area1);

        printf("PIB: \n");
        scanf("%.2f bilhões de reais", &pib1);

        printf("Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos1);

    //Carta 2
    printf("*Carta número 02*\n");

        printf("População: \n");
        scanf("%d", &populacao2);

        printf("Área em km²: \n");
        scanf("%.2fkm²", &area2);

        printf("PIB: \n");
        scanf("%.2f bilhões de reais", &pib2);

        printf("Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos2);


    //Cálculo da Densidade Populacional
    densidadepopulacional1 = (float) (populacao1 / area1);
    densidadepopulacional2 = (float) (populacao2 / area2);

    //Cálculo do PIB per Capira
    pibpercapita1 = (float) (pib1*(1000000000) / populacao1);
    pibpercapita2 = (float) (pib2* (1000000000) / populacao2);



    //Super Poder
    resultpopulacao = populacao1 > populacao2;
    resultarea = area1 > area2;
    resultpib = pib1 > pib2;
    resultpontosturisticos = pontosturisticos1 > pontosturisticos2;
    resultdensidadepopulacional = (1 / densidadepopulacional1) > (1 / densidadepopulacional2);
    resultpibpercapita = pibpercapita1 > pibpercapita2;
   
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidadepopulacional1 + pibpercapita1;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidadepopulacional2 + pibpercapita2;
                
    resultsuperpoder = superpoder1 > superpoder2;

//Vamos Jogar!
printf("Agora Vamos comparar as cartas!\n");

    printf("Carta 1\n");
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

printf("Carta 2\n");

    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2); 

    
//Agora vamos definir o campeão
printf("**E o vencedor é:**\n");

    printf("População: Carta 1 vence (%f)\n", resultpopulacao);
    printf("Área: Carta 1 vence (%f)\n", resultarea);
    printf("PIB : Carta 1 vence (%f)\n", resultpib);
    printf("Pontos Turísticos: Carta 1 vence (%f)\n", resultpontosturisticos);
    printf("Densidade Populacional: Carta 1 vence (%f)\n", resultdensidadepopulacional);
    printf("PIB per Capita: Carta 1 vence (%f)\n", resultpibpercapita);
    printf("SuperPoder: Carta 1 vence (%f)\n", resultsuperpoder);


return 0;

}
