#include <stdio.h>

int main() {
    // Carta 1:

    // Definição das variaveis
    char estado1[20];
    char codigo_carta1[4];
    char nome_cidade1[20];
    unsigned long int populacao1; 
    float area1;
    float pib1, pib_capita1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float super_poder1;
    float densidade_invertida1;

    // Entrada de dados
    printf("------------------------- CARTA 1 -----------------------\n");
    printf("Digite o estado da carta 1(Nome Simples): ");
    scanf("%s", estado1);
    printf("Digite o código da carta 1(3 caracteres sendo uma letra e dois números): ");
    scanf("%s", codigo_carta1);
    printf("Digite o nome da cidade da carta 1(Nome simples): ");
    scanf("%s", nome_cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1); 
    printf("Digite a área em km² da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Calculo de densidade populacional: População(populacao1) dividido pela area da cidade(area1)
    densidade_populacional1 = (float)populacao1 / area1;
    
    // Cálculo de PIB per Capita: PIB(pib1) dividido pela população(populacao1)

    pib_capita1 = pib1 / (float)populacao1;

    // Densidade populacional invertida
    densidade_invertida1 = 1.0f / densidade_populacional1;
    
    // Calculo do Super Poder
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_capita1 + densidade_invertida1;

    // Carta 2:
    char estado2[20];
    char codigo_carta2[4];
    char nome_cidade2[20];
    unsigned long int populacao2; 
    float area2;
    float pib2, pib_capita2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float super_poder2;
    float densidade_invertida2;

    // Entrada de dados
    printf("------------------------- CARTA 2 -----------------------\n");
    printf("Digite o estado da carta 2(Nome simples): ");
    scanf("%s", estado2);
    printf("Digite o código da carta 2(3 caracteres sendo uma letra e dois números): ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome da cidade da carta 2(Nome simples): ");
    scanf("%s", nome_cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%lu", &populacao2); 
    printf("Digite a área em km² da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Calculo de densidade populacional
    densidade_populacional2 = (float)populacao2 / area2;
    // Cálculo de PIB per Capita
    pib_capita2 = pib2 / (float)populacao2;
    // Densidade populacional invertida
    densidade_invertida2 = 1.0f / densidade_populacional2;
    // Calculo do Super Poder
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_capita2 + densidade_invertida2;

    // Exibição dos dados
    printf("\n==================== RESULTADOS ====================\n");
    printf("-----------------------------------\n");
    printf(" Carta 1:\n");
    printf("-----------------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1); 
    printf("Área em km²: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: R$ %.2f\n", pib_capita1);
    printf("Super Poder: %.2f", super_poder1);
    printf("\n");
    printf("-----------------------------------\n");
    printf(" Carta 2:\n");
    printf("-----------------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2); 
    printf("Área em km²: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", pib_capita2);
    printf("Super Poder: %.2f", super_poder2);
    printf("\n");
    printf("\n================== BATALHA DAS CARTAS ==================\n");
    printf("Comparando as cartas...\n");
    printf("\n");   
    printf("==========================================================\n");
    //O professor falou no vídeo que poderiamos comparar todos os atributos se quisessemos, foi o que eu fiz kk
  
    int resultado_populacao = populacao1 > populacao2;
    if (resultado_populacao){
        printf("A carta 1 venceu em População!\n");
    }
    else {
        printf("A carta 2 venceu em População!\n");
    }

    int resultado_area = area1 > area2;
    if (resultado_area){
        printf("A carta 1 venceu em Área em km²!\n");
    }
    else {
        printf("A carta 2 venceu em Área em km²!\n");
    }
    int resultado_pib = pib1 > pib2;
    if (resultado_pib){
        printf("A carta 1 venceu em PIB!\n");
    }
    else {
        printf("A carta 2 venceu em PIB!\n");
    }
    int resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    if (resultado_pontos_turisticos){
        printf("A carta 1 venceu em Número de pontos turísticos!\n");
    }
    else {
        printf("A carta 2 venceu em Número de pontos turísticos!\n");
    }
    int resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
    if (resultado_densidade_populacional){
        printf("A carta 1 venceu em Densidade Populacional!\n");
    }
    else {
        printf("A carta 2 venceu em Densidade Populacional!\n");
    }
    int resultado_pib_capita = pib_capita1 > pib_capita2;
    if (resultado_pib_capita){
        printf("A carta 1 venceu em PIB per Capita!\n");
    }
    else {
        printf("A carta 2 venceu em PIB per Capita!\n");
    }
    int resultado_super_poder = super_poder1 > super_poder2;
    if (resultado_super_poder){
        printf("A carta 1 venceu em Super Poder!\n");
    }
    else {
        printf("A carta 2 venceu em Super Poder!\n");
    }
    printf("\n");
    printf("-----------------------------------\n");
    printf("-----------  VENCEDOR -------------\n");
    printf("-----------------------------------\n");
    //Somei os valores das variaveis de resultado para saber quantas vezes a carta 1 venceu
    int vitorias_carta1 = resultado_populacao + resultado_area + resultado_pib + resultado_pontos_turisticos + resultado_densidade_populacional + resultado_pib_capita + resultado_super_poder;
    //Como o total de atributos é 7 se for maior que 4 a carta vence
    if (vitorias_carta1 >= 4) {
        printf("   !!!  A carta 1 venceu!  !!!    \n");
    } else {
        printf("   !!!  A carta 2 venceu!  !!!    \n");
    }

    return 0;

}

/*
------------------------- CARTA 1 -----------------------
Digite o estado da carta 1(Nome Simples): Amazonas
Digite o código da carta 1(3 caracteres sendo uma letra e dois números): A01
Digite o nome da cidade da carta 1(Nome simples): Manaus
Digite a população da carta 1: 2200000
Digite a área em km² da carta 1: 11401.00
Digite o PIB da carta 1: 103000000000.00
Digite o número de pontos turísticos da carta 1: 40
------------------------- CARTA 2 -----------------------
Digite o estado da carta 2(Nome simples): Pernambuco
Digite o código da carta 2(3 caracteres sendo uma letra e dois números): A02
Digite o nome da cidade da carta 2(Nome simples): Recife
Digite a população da carta 2: 1600000
Digite a área em km² da carta 2: 218.50
Digite o PIB da carta 2: 50000000000.00
Digite o número de pontos turísticos da carta 2: 55

==================== RESULTADOS ====================
-----------------------------------
 Carta 1:
-----------------------------------
Estado: Amazonas
Código da carta: A01
Nome da cidade: Manaus
População: 2200000
Área em km²: 11401.00 km²
PIB: R$ 102999998464.00
Número de pontos turísticos: 40
Densidade Populacional: 192.97 hab/km²
PIB per Capita: R$ 46818.18
Super Poder: 103002259456.00
-----------------------------------
 Carta 2:
-----------------------------------
Estado: Pernambuco
Código da carta: A02
Nome da cidade: Recife
População: 1600000
Área em km²: 218.50 km²
PIB: R$ 49999998976.00
Número de pontos turísticos: 55
Densidade Populacional: 7322.65 hab/km²
PIB per Capita: R$ 31250.00
Super Poder: 50001633280.00

================== BATALHA DAS CARTAS ==================
Comparando as cartas...

==========================================================
A carta 1 venceu em População!
A carta 1 venceu em Área em km²!
A carta 1 venceu em PIB!
A carta 2 venceu em Número de pontos turísticos!
A carta 1 venceu em Densidade Populacional!
A carta 1 venceu em PIB per Capita!
A carta 1 venceu em Super Poder!

-----------------------------------
-----------  VENCEDOR -------------
-----------------------------------
   !!!  A carta 1 venceu!  !!!    
*/