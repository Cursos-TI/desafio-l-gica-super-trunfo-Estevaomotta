#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1 ,estado2;
    char codigo1[3] ,codigo2[3];
    char nome1[30] ,nome2[30];
    int populacao1 ,populacao2;
    float area1 ,area2;
    float pib1 ,pib2;
    int pontos1 ,pontos2;
    float populacao = 500000000000000;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Jogo SUPER TRUNFO ! \n");
    printf("\n");
    printf("Crie a Carta 1 \n");
    printf("\n");
    printf("Escreva uma letra de 'A' a 'H' representando umas das oitos cidades:  \n" );
    scanf(" %c", &estado1 );

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", codigo1);
    
    printf("Escreva o nome da cidade: \n");
    scanf(" %[^\n]", nome1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d%*c", &populacao1);

    printf("Digite a área (em km²) da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos1);

    printf("Escreva o PIB (ex 500000000): \n");
    scanf(" %f", &pib1);
    printf("\n");
    printf("\n");


    printf("Parabens Carta 1 criada agora vamos criar a Carta 2 \n");
    printf("\n");
    printf("Crie a Carta 2 \n");
    printf("\n");
    printf("Escreva uma letra de 'A' a 'H' representando umas das oitos cidades:  \n" );
    scanf(" %c", &estado2 );

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf(" %s", codigo2);

    printf("Escreva o nome da cidade: \n");
    scanf(" %[^\n]", nome2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²) da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos2);

    printf("Escreva o PIB (ex: 500000000): \n");
    scanf(" %f", &pib2);

                                                                                                                                                                                                                           
    printf("Suas Cartas \n");
    printf("\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s \n",codigo1);
    printf("Nome da Cidade: %s \n" ,nome1);
    printf("População: %d \n" ,populacao1);
    printf("Área: %.2f km² \n" ,area1);
    printf("PIB: %f Bilhões \n" ,pib1);
    printf("Número de Pontos Turísticos: %d \n" ,pontos1);

    printf("\n");
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n",estado2);
    printf("Código: %s \n",codigo2);
    printf("Nome da Cidade: %s \n" ,nome2);
    printf("População: %d \n" ,populacao2);
    printf("Área: %.2f km² \n" ,area2);
    printf("PIB: %f Bilhões \n" ,pib2);
    printf("Número de Pontos Turísticos: %d \n" ,pontos2);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (populacao1 > populacao2) {
             printf("Cidade 1 tem maior população. \n Carta 1 é a vencedora. Parabens!! \n");
         } else {
             printf("Cidade 2 tem maior população. \n Carta 2 é a vencedora. Parabens!! \n");
         }
    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    

    return 0;
}
