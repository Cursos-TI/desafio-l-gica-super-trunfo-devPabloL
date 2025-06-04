#include <stdio.h>


//O professor passou a lógica de verificar individualmente cada comparação, onde se a carta vencer as 2 ela ganha, se vencer uma ela empata, e se nao vencer ela perde. Não a soma.

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

    // Carta 2:
    char estado2[20];
    char codigo_carta2[4];
    char nome_cidade2[20];
    unsigned long int populacao2; 
    float area2;
    float pib2, pib_capita2;
    int pontos_turisticos2;
    float densidade_populacional2;

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
    printf("\n");

    //Batalha das cartas
    int resultado1 = 2, resultado2 =2;
    int escolha1, escolha2;
    printf("\n================== BATALHA DAS CARTAS ==================\n");
    printf("Escolha a primeira opção para batalhar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("==========================================================\n");
    scanf("%d", &escolha1);
    
    switch (escolha1) {
        case 1: 
            printf("Você escolheu População!\n");
            printf("Carta 1: %lu habitantes | Carta 2: %lu habitantes\n", populacao1, populacao2);
            resultado1 = (populacao1 > populacao2) ? 1 : (populacao2 > populacao1) ? 0 : 2;
            if (resultado1 == 2) {
                printf("Empate em População!\n");
            }
            break;
        case 2:
            printf("Você escolheu Área!\n");
            printf("Carta 1: %.2f km² | Carta 2: %.2f km²\n", area1, area2);
            resultado1 = (area1 > area2) ? 1 : (area2 > area1) ? 0 : 2;
            if (resultado1 == 2) {
                printf("Empate em Área!\n");
            }
            break;
        case 3:
            printf("Você escolheu PIB!\n");
            printf("Carta 1: R$ %.2f | Carta 2: R$ %.2f\n", pib1, pib2);
            resultado1 = (pib1 > pib2) ? 1 : (pib2 > pib1) ? 0 : 2;
            if (resultado1 == 2) {
                printf("Empate em PIB!\n");
            }
            break;
        case 4: 
            printf("Você escolheu Número de pontos turísticos!\n");
            printf("Carta 1: %d pontos turísticos | Carta 2: %d pontos turísticos\n", pontos_turisticos1, pontos_turisticos2);
            resultado1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos2 > pontos_turisticos1) ? 0 : 2;
            if (resultado1 == 2) {
                printf("Empate em Número de pontos turísticos!\n");
            }
            break;
        case 5:
            printf("Você escolheu Densidade Populacional!\n");
            printf("Carta 1: %.2f hab/km² | Carta 2: %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
            resultado1 = (densidade_populacional1 < densidade_populacional2) ? 1 : (densidade_populacional2 < densidade_populacional1) ? 0 : 2;
            if (resultado1 == 2) {
                printf("Empate em Densidade Populacional!\n");
            }
            break;
        case 6:
            printf("Você escolheu PIB per Capita!\n");
            printf("Carta 1: R$ %.2f | Carta 2: R$ %.2f\n", pib_capita1, pib_capita2);
            resultado1 = (pib_capita1 > pib_capita2) ? 1 : (pib_capita2 > pib_capita1) ? 0 : 2;
            if (resultado1 == 2) {
                printf("Empate em PIB per Capita!\n");
            }
            break; 
        default:
            printf("Opção inválida! Escolha entre 1 e 6.\n");
            resultado1 = -1;
            break;
    }
    printf("\n================== BATALHA DAS CARTAS ==================\n");
    printf("Escolha a segunda opção para batalhar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("==========================================================\n");
    scanf("%d", &escolha2);
    
    if (escolha1 == escolha2) {
        printf("Você não pode escolher a mesma opção duas vezes! Jogo encerrado\n");
        resultado2 = -1;
    } else {
            switch (escolha2) {
        case 1: 
            printf("Você escolheu População!\n");
            printf("Carta 1: %lu habitantes | Carta 2: %lu habitantes\n", populacao1, populacao2);
           resultado2 = (populacao1 > populacao2) ? 1 : (populacao2 > populacao1) ? 0 : 2;
            if (resultado2 == 2) {
                printf("Empate em População!\n");
            }
            break;
        case 2:
            printf("Você escolheu Área!\n");
            printf("Carta 1: %.2f km² | Carta 2: %.2f km²\n", area1, area2);
           resultado2 = (area1 > area2) ? 1 : (area2 > area1) ? 0 : 2;
            if (resultado2 == 2) {
                printf("Empate em Área!\n");
            }
            break;
        case 3:
            printf("Você escolheu PIB!\n");
            printf("Carta 1: R$ %.2f | Carta 2: R$ %.2f\n", pib1, pib2);
           resultado2 = (pib1 > pib2) ? 1 : (pib2 > pib1) ? 0 : 2;
            if (resultado2 == 2) {
                printf("Empate em PIB!\n");
            }
            break;
        case 4: 
            printf("Você escolheu Número de pontos turísticos!\n");
            printf("Carta 1: %d pontos turísticos | Carta 2: %d pontos turísticos\n", pontos_turisticos1, pontos_turisticos2);
           resultado2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : (pontos_turisticos2 > pontos_turisticos1) ? 0 : 2;
            if (resultado2 == 2) {
                printf("Empate em Número de pontos turísticos!\n");
            }
            break;
        case 5:
            printf("Você escolheu Densidade Populacional!\n");
            printf("Carta 1: %.2f hab/km² | Carta 2: %.2f hab/km²\n", densidade_populacional1, densidade_populacional2);
           resultado2 = (densidade_populacional1 < densidade_populacional2) ? 1 : (densidade_populacional2 < densidade_populacional1) ? 0 : 2;
            if (resultado2 == 2) {
                printf("Empate em Densidade Populacional!\n");
            }
            break;
        case 6:
            printf("Você escolheu PIB per Capita!\n");
            printf("Carta 1: R$ %.2f | Carta 2: R$ %.2f\n", pib_capita1, pib_capita2);
           resultado2 = (pib_capita1 > pib_capita2) ? 1 : (pib_capita2 > pib_capita1) ? 0 : 2;
            if (resultado2 == 2) {
                printf("Empate em PIB per Capita!\n");
            }
            break; 
        default:
            printf("Opção inválida! Escolha entre 1 e 6.\n");
           resultado2 = -1;
            break;
    }
    if (resultado1 == -1 || resultado2 == -1) { // Se alguma escolha de rodada foi inválida o valor vai ser -1
        printf("\n-----------------------------------\n");
        printf("     !!!! JOGO INVÁLIDO !!!!\n");
        printf("-----------------------------------\n");
        printf("Uma ou mais escolhas de atributo foram inválidas. Jogo encerrado sem vencedor claro.\n");
} else if (resultado1 == 1 && resultado2 == 1) {
        printf("\n-----------------------------------\n");
        printf("       !!!! VENCEDORA !!!!\n");
        printf("-----------------------------------\n");
        printf("             Carta 1\n");
        printf("Estado: %s\n", estado1);
        printf("Código da carta: %s\n", codigo_carta1);
        printf("Nome da cidade: %s\n", nome_cidade1);
        printf("População: %lu\n", populacao1); 
        printf("Área em km²: %.2f km²\n", area1);
        printf("PIB: R$ %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per Capita: R$ %.2f\n", pib_capita1);
        printf("\n");

        printf("-----------------------------------\n");
        printf("       !!!! PERDEDORA !!!!\n");
        printf("-----------------------------------\n");
        printf("             Carta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo_carta2);
        printf("Nome da cidade: %s\n", nome_cidade2);
        printf("População: %lu\n", populacao2); 
        printf("Área em km²: %.2f km²\n", area2);
        printf("PIB: R$ %.2f\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per Capita: R$ %.2f\n", pib_capita2);
        printf("\n");
    } else if (resultado1 == 0 && resultado2 == 0) {
        printf("\n-----------------------------------\n");
        printf("       !!!! VENCEDORA !!!!\n");
        printf("-----------------------------------\n");
        printf("             Carta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s\n", codigo_carta2);
        printf("Nome da cidade: %s\n", nome_cidade2);
        printf("População: %lu\n", populacao2); 
        printf("Área em km²: %.2f km²\n", area2);
        printf("PIB: R$ %.2f\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per Capita: R$ %.2f\n", pib_capita2);
        printf("\n");

        printf("-----------------------------------\n");
        printf("       !!!! PERDEDORA !!!!\n");
        printf("-----------------------------------\n");
        printf("             Carta 1\n");
        printf("Estado: %s\n", estado1);
        printf("Código da carta: %s\n", codigo_carta1);
        printf("Nome da cidade: %s\n", nome_cidade1);
        printf("População: %lu\n", populacao1); 
        printf("Área em km²: %.2f km²\n", area1);
        printf("PIB: R$ %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per Capita: R$ %.2f\n", pib_capita1);
        printf("\n");
    } else {  
        printf("\n-----------------------------------\n");
        printf("         !!!! EMPATE !!!!\n");
        printf("-----------------------------------\n");
        printf("As cartas empataram na característica escolhida.\n");
        printf("\n"); 
        printf("-----------------------------------\n");
        printf("             Carta 1:\n"); 
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
        printf("\n");
        printf("-----------------------------------\n");
        printf("             Carta 2:\n"); 
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
        printf("\n");
    }
    
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


================== BATALHA DAS CARTAS ==================
Escolha a primeira opção para batalhar:
1 - População
2 - Área
3 - PIB
4 - Número de pontos turísticos
5 - Densidade demográfica
6 - PIB per Capita
==========================================================
1
Você escolheu População!
Carta 1: 2200000 habitantes | Carta 2: 1600000 habitantes

================== BATALHA DAS CARTAS ==================
Escolha a segunda opção para batalhar:
1 - População
2 - Área
3 - PIB
4 - Número de pontos turísticos
5 - Densidade demográfica
6 - PIB per Capita
==========================================================
5
Você escolheu População!
Carta 1: 2200000 habitantes | Carta 2: 1600000 habitantes

-----------------------------------
       !!!! VENCEDORA !!!!
-----------------------------------
             Carta 1
Estado: Amazonas
Código da carta: A01
Nome da cidade: Manaus
População: 2200000
Área em km²: 11401.00 km²
PIB: R$ 102999998464.00
Número de pontos turísticos: 40
Densidade Populacional: 192.97 hab/km²
PIB per Capita: R$ 46818.18

-----------------------------------
       !!!! PERDEDORA !!!!
-----------------------------------
             Carta 2:
Estado: Pernambuco
Código da carta: A02
Nome da cidade: Recife
População: 1600000
Área em km²: 218.50 km²
PIB: R$ 49999998976.00
Número de pontos turísticos: 55
Densidade Populacional: 7322.65 hab/km²
PIB per Capita: R$ 31250.00

*/