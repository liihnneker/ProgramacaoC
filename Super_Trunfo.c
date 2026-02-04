#include <stdio.h>

int main () {

    char Estado [4];         
    char Codigo_da_Carta [5];
    char Nome_da_Cidade [30];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;

    // Leitura dos dados da cidade 1

    printf("\n dados da cidade 1 \n");

    printf("Digite a sigla do Estado: \n");
    scanf (" %s", Estado);

    printf("Digite o Código da Carta: \n");
    scanf (" %s", Codigo_da_Carta);

    printf("Digite o Nome da Cidade: \n");
    scanf (" %s", Nome_da_Cidade);

    printf("Digite a População: \n");
    scanf ("%d", &Populacao);

    printf("Digite a Área: \n");
    scanf ("%f", &Area);

    printf("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf ("%d", &Numero_de_Pontos_Turisticos);

    // Exibição dos dados da cidade 1

    printf ("\n--- Carta da Cidade 1 ---\n");
    printf ("Estado: %s \n", Estado);    
    printf ("Código da Carta: %s \n", Codigo_da_Carta);
    printf ("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf ("População: %d \n", Populacao);
    printf ("Área: %.2f km² \n", Area);
    printf ("PIB: R$ %.2f bilhões de reais \n", PIB);
    printf ("Número de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos);

     // Leitura dos dados da cidade 2

    printf("\n dados da cidade 2 \n");

    printf("Digite a sigla do Estado: \n");
    scanf (" %s", Estado);

    printf("Digite o Código da Carta: \n");
    scanf (" %s", Codigo_da_Carta);

    printf("Digite o Nome da Cidade: \n");
    scanf (" %s", Nome_da_Cidade);

    printf("Digite a População: \n");
    scanf ("%d", &Populacao);

    printf("Digite a Área: \n");
    scanf ("%f", &Area);

    printf("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf ("%d", &Numero_de_Pontos_Turisticos);

    // Exibição dos dados da cidade

    printf ("\n--- Carta da Cidade 1 ---\n");
    printf ("Estado: %s \n", Estado);    
    printf ("Código da Carta: %s \n", Codigo_da_Carta);
    printf ("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf ("População: %d \n", Populacao);
    printf ("Área: %.2f km² \n", Area);
    printf ("PIB: R$ %.2f bilhões de reais \n", PIB);
    printf ("Número de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos);

    return 0;

} 