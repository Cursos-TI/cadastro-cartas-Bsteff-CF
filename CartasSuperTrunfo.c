#include <stdio.h>

int main() {
    char estado[50];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    ("\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}