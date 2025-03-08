#include <stdio.h>

int main(){

    //Variáveis

    char estado1[2], estado2[2], cidade1[25], cidade2[25], codigo1[3], codigo2[3];
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;


    //Carta 01
    printf("Carta 01\n");
    printf("\n");
    printf("Digite o Estado:\n");
    scanf("%s", &estado1);
    printf("Digite o Código da Carta:\n");
    scanf("%s", &codigo1);
    printf("Digite a Cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite a População:\n");
    scanf("%lu", &populacao1);
    printf("Digite a Área:\n");
    scanf("%f" &area1);
    printf("Digite o PIB:\n");
    scanf("%f", pib1);
    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos1);


    //Calculando a Densidade Populacional, PIB per Capita e Super Poder 
        //Carta 1 
        densidadepopulacional1 = (float) populacao1 / area1;
        pibpercapita1 = pib1 / (float) populacao1;
        superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + ( area1/(float)populacao1);

        //Carta 2 
        densidadepopulacional2 = (float) populacao2 / area2;
        pibpercapita2 = pib2 / (float) populacao2;
        superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + ( area2/(float)populacao2);

    

    printf("\n");
    printf("Carta: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n",populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f milhões de Reais\n", pibpercapita1);



    //Carta 02
    printf("\n");
    printf("Carta 02 \n");
    printf("\n");
    printf("Digite o Estado:\n");
    scanf("%s", &estado2);
    printf("Digite o Código da Carta:\n");
    scanf("%s", &codigo2);
    printf("Digite a Cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite a População:\n");
    scanf("%lu", &populacao2);
    printf("Digite a Área:\n");
    scanf("%f" &area2);
    printf("Digite o PIB:\n");
    scanf("%f", pib2);
    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosturisticos2);
    
    printf("\n");
    printf("Carta: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n",populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f milhões de Reais\n", pibpercapita2);


    //Comparando os atributos
    printf("Comparação das cartas: \n");
    printf("Vencedor Populacao: Carta %d\n", (populacao1 > populacao2) * 1 + (populacao1 <= populacao2) * 2);
    printf("Vencedor Área: Carta %d\n", (area1 > area2) * 1 + (area1 <= area2) * 2);
    printf("Vencedor PIB: Carta %d\n", (pib1 > pib2) * 1 + (pib1 <= pib2) * 2);
    printf("Vencedor Pontos Turísticos: Carta %d\n", (pontosturisticos1 > pontosturisticos2) * 1 + (pontosturisticos1 <= pontosturisticos2) * 2);
    printf("Vencedor Densidade Populacional: Carta %d\n", (densidadepopulacional1 < densidadepopulacional2) * 1 + (densidadepopulacional1 >= densidadepopulacional2) * 2);
    printf("Vencedor PIB per Capita: Carta %d\n", (pibpercapita1 > pibpercapita2) * 1 + (pibpercapita1 <= pibpercapita2) * 2);
    printf("Vencedor Super Poder: Carta %d\n", (superpoder1 > superpoder2) * 1 + (superpoder1 <= superpoder2) * 2);



    return 0;

}
