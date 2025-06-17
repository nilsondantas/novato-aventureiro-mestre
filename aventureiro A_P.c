#include <stdio.h>

// Estrutura que representa uma carta do jogo
struct Carta {
    char codigo[3];             // Ex: "A1", "P4"
    int populacao;             // População da cidade
    float area;                // Área em km²
    float pib;                 // Produto Interno Bruto
    int pontos_turisticos;     // Quantidade de pontos turísticos
    float densidade;           // População / Área
    float pib_per_capita;      // PIB / População
};

int main() {
    struct Carta cartas[2];  // Leque para armazenar duas cartas

    // Entrada de dados - Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Informe o código da cidade (ex: A1, P4): ");
    scanf("%s", cartas[0].codigo);
    printf("Informe a população: ");
    scanf("%d", &cartas[0].populacao);
    printf("Informe a área (em km²): ");
    scanf("%f", &cartas[0].area);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &cartas[0].pib);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &cartas[0].pontos_turisticos);

    // Cálculo dos atributos derivados - Carta 1
    cartas[0].densidade = cartas[0].populacao / cartas[0].area;
    cartas[0].pib_per_capita = cartas[0].pib / cartas[0].populacao;

    printf("\n");

    // Entrada de dados - Carta 2
    printf("Cadastro da Carta 2\n");
    printf("Informe o código da cidade (ex: A1, P4): ");
    scanf("%s", cartas[1].codigo);
    printf("Informe a população: ");
    scanf("%d", &cartas[1].populacao);
    printf("Informe a área (em km²): ");
    scanf("%f", &cartas[1].area);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &cartas[1].pib);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &cartas[1].pontos_turisticos);

    // Cálculo dos atributos derivados - Carta 2
    cartas[1].densidade = cartas[1].populacao / cartas[1].area;
    cartas[1].pib_per_capita = cartas[1].pib / cartas[1].populacao;

    printf("\n");

    // Saída dos dados - Carta 1
    printf("===== Dados da Carta 1 =====\n");
    printf("Código da cidade: %s\n", cartas[0].codigo);
    printf("População: %d habitantes\n", cartas[0].populacao);
    printf("Área: %.2f km²\n", cartas[0].area);
    printf("PIB: R$ %.2f bilhões\n", cartas[0].pib);
    printf("Pontos turísticos: %d\n", cartas[0].pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", cartas[0].densidade);
    printf("PIB per Capita: R$ %.6f bilhões por habitante\n", cartas[0].pib_per_capita);
    printf("\n");

    // Saída dos dados - Carta 2
    printf("===== Dados da Carta 2 =====\n");
    printf("Código da cidade: %s\n", cartas[1].codigo);
    printf("População: %d habitantes\n", cartas[1].populacao);
    printf("Área: %.2f km²\n", cartas[1].area);
    printf("PIB: R$ %.2f bilhões\n", cartas[1].pib);
    printf("Pontos turísticos: %d\n", cartas[1].pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", cartas[1].densidade);
    printf("PIB per Capita: R$ %.6f bilhões por habitante\n", cartas[1].pib_per_capita);
    printf("\n");

    return 0;
}
