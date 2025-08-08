#include <stdio.h>

int main() {
    char estado1[50], cidade1[50], codigo1[50];
    char estado2[50], cidade2[50], codigo2[50];
    unsigned long population1, population2;
    double area1, area2, pib1, pib2;
    unsigned int pontos1, pontos2;
    double densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    printf("Digite o ESTADO da primeira carta: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o CÓDIGO da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite a CIDADE da primeira carta: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &population1);
    printf("Área: ");
    scanf("%lf", &area1);
    printf("PIB: ");
    scanf("%lf", &pib1);
    printf("Pontos turísticos: ");
    scanf("%u", &pontos1);

    printf("\nDigite o ESTADO da segunda carta: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o CÓDIGO da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite a CIDADE da segunda carta: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &population2);
    printf("Área: ");
    scanf("%lf", &area2);
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Pontos turísticos: ");
    scanf("%u", &pontos2);
    
    densidade1 = (double)population1 / area1;
    densidade2 = (double)population2 / area2;
    pib_per_capita1 = pib1 / population1;
    pib_per_capita2 = pib2 / population2;

    int atributo1, atributo2;
    double valor1_c1 = 0, valor1_c2 = 0;
    double valor2_c1 = 0, valor2_c2 = 0;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1: valor1_c1 = population1; valor1_c2 = population2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pib_per_capita1; valor1_c2 = pib_per_capita2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica (menor vence)\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6) {
        printf("Opção inválida!\n");
        return 1;
    }

    switch (atributo2) {
        case 1: valor2_c1 = population1; valor2_c2 = population2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pib_per_capita1; valor2_c2 = pib_per_capita2; break;
    }

    int v1_attr1 = (atributo1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    int v1_attr2 = (atributo2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    
    double soma_c1 = valor1_c1 + valor2_c1;
    double soma_c2 = valor1_c2 + valor2_c2;

    printf("\n===== RESULTADO =====\n");
    printf("Estado Carta 1: %s\n", estado1);
    printf("Estado Carta 2: %s\n\n", estado2);

    printf("Atributo 1: ");
    switch (atributo1) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
        case 6: printf("PIB per Capita"); break;
    }
    printf(" -> Carta 1: %.2f | Carta 2: %.2f | %s\n",
           valor1_c1, valor1_c2,
           (valor1_c1 == valor1_c2) ? "Empate" : (v1_attr1 ? "Venceu Carta 1" : "Venceu Carta 2"));

    printf("Atributo 2: ");
    switch (atributo2) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
        case 6: printf("PIB per Capita"); break;
    }
    printf(" -> Carta 1: %.2f | Carta 2: %.2f | %s\n",
           valor2_c1, valor2_c2,
           (valor2_c1 == valor2_c2) ? "Empate" : (v1_attr2 ? "Venceu Carta 1" : "Venceu Carta 2"));

    printf("\nSoma dos atributos -> Carta 1: %.2f | Carta 2: %.2f\n", soma_c1, soma_c2);

    if (soma_c1 > soma_c2) printf("Vencedor final: Carta 1\n");
    else if (soma_c2 > soma_c1) printf("Vencedor final: Carta 2\n");
    else printf("Empate!\n");

    return 0;
}

