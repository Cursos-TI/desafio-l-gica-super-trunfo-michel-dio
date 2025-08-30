#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char est1;
    char cod1[4];
    char nomeCid1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTur1;

    // Variáveis Carta 2
    char est2;
    char cod2[4];
    char nomeCid2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTur2;

    // Entrada de dados Carta 1
    printf("\nDados Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &est1);
    printf("Digite o Codigo da carta (ex: A01, B03): ");
    scanf("%s", cod1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCid1); // le nomes com espaço
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em Km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTur1);

    // Entrada de dados Carta 2
    printf("\nDados Carta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &est2);
    printf("Digite o Codigo da carta (ex: A01, B03): ");
    scanf("%s", cod2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCid2); // le nomes com espaço
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em Km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTur2);

    // Cálculos adicionais para o projeto super_trunfo2
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Saída dos dados Carta 1
    printf("\n* Super Trunfo Carta 1 *\n");
    printf("Estado: %c\n", est1);
    printf("Codigo: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nomeCid1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // Saída dos dados Carta 2
    printf("\n* Super Trunfo Carta 2 *\n");
    printf("Estado: %c\n", est2);
    printf("Codigo: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nomeCid2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    printf("\n* Comparacao de Cartas *\n");
    printf("Atributo escolhido: População\n");
    if (populacao1 > populacao2)
    {
        printf("Cidade 1 tem maior população.\n");
    } else if (populacao2 > populacao1)
    {
        printf("Cidade 2 tem maior população.\n");
    } else
    {
        printf("Resultado: Empate!\n");
    }
    //resultado de quem foi a cidade vencedora
    if (populacao1 > populacao2)
    {
        printf("A cidade vencedora é: %s\n", nomeCid1);
    } else if (populacao2 > populacao1)
    {
        printf("A cidade vencedora é: %s\n", nomeCid2);
    }
    
    

    return 0;
}
