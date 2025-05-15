#include <stdio.h> 

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5]; // código aumentado para comportar A01 + null
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Introdução
    printf("Jogo SUPER TRUNFO ! \n\n");

    // Cadastro da Carta 1
    printf("Crie a Carta 1\n\n");

    printf("Escreva uma letra de 'A' a 'H' representando uma das oito cidades:\n");
    scanf(" %c", &estado1);

    printf("Escreva o código da cidade (ex: A01, B03):\n");
    scanf(" %s", codigo1);

    printf("Escreva o nome da cidade:\n");
    scanf(" %[^\n]", nome1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d%*c", &populacao1);

    printf("Digite a área (em km²) da cidade:\n");
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontos1);

    printf("Digite o PIB (ex: 500000000):\n");
    scanf(" %f", &pib1);

    // Cadastro da Carta 2
    printf("\nParabéns! Carta 1 criada. Agora vamos criar a Carta 2\n\n");

    printf("Escreva uma letra de 'A' a 'H' representando uma das oito cidades:\n");
    scanf(" %c", &estado2);

    printf("Escreva o código da cidade (ex: A01, B03):\n");
    scanf(" %s", codigo2);

    printf("Escreva o nome da cidade:\n");
    scanf(" %[^\n]", nome2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²) da cidade:\n");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontos2);

    printf("Digite o PIB (ex: 500000000):\n");
    scanf(" %f", &pib2);

    // Exibição das Cartas
    printf("\nSuas Cartas\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    // Comparação de Cartas
    int pontos_carta1 = 0, pontos_carta2 = 0;

    // População
    if (populacao1 > populacao2) {
        pontos_carta1++;
        printf("\nCarta 1 vence em População.\n");
    } else if (populacao2 > populacao1) {
        pontos_carta2++;
        printf("\nCarta 2 vence em População.\n");
    } else {
        printf("\nEmpate em População.\n");
    }

    // Área
    if (area1 > area2) {
        pontos_carta1++;
        printf("Carta 1 vence em Área.\n");
    } else if (area2 > area1) {
        pontos_carta2++;
        printf("Carta 2 vence em Área.\n");
    } else {
        printf("Empate em Área.\n");
    }

    // PIB
    if (pib1 > pib2) {
        pontos_carta1++;
        printf("Carta 1 vence em PIB.\n");
    } else if (pib2 > pib1) {
        pontos_carta2++;
        printf("Carta 2 vence em PIB.\n");
    } else {
        printf("Empate em PIB.\n");
    }

    // Pontos Turísticos
    if (pontos1 > pontos2) {
        pontos_carta1++;
        printf("Carta 1 vence em Pontos Turísticos.\n");
    } else if (pontos2 > pontos1) {
        pontos_carta2++;
        printf("Carta 2 vence em Pontos Turísticos.\n");
    } else {
        printf("Empate em Pontos Turísticos.\n");
    }

    // Resultado Final
    printf("\nResultado Final:\n");
    if (pontos_carta1 > pontos_carta2) {
        printf("Carta 1 é a grande vencedora com %d pontos!\n", pontos_carta1);
    } else if (pontos_carta2 > pontos_carta1) {
        printf("Carta 2 é a grande vencedora com %d pontos!\n", pontos_carta2);
    } else {
        printf("Empate! Ambas as cartas têm %d pontos.\n", pontos_carta1);
    }

    return 0;
}
