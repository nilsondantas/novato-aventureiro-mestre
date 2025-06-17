#include <stdio.h>

// Estrutura que representa uma carta do jogo
struct Carta {
    char codigo[3];                  // Ex: "A1", "P4"
    unsigned long int populacao;    // População da cidade
    float area;                     // Área em km²
    float pib;                      // Produto Interno Bruto (bilhões)
    int pontos_turisticos;         // Quantidade de pontos turísticos
    float densidade;               // População / Área
    float pib_per_capita;          // PIB / População
    float super_poder;             // Super Poder (calculado)
};

// Função para exibir o resultado da comparação (1 se carta 1 vence, 0 se carta 2 vence)
void comparar_atributo(const char* nome, float valor1, float valor2, int inverso) {
    int resultado = 0;
    if (inverso) {
        resultado = valor1 < valor2 ? 1 : 0;
    } else {
        resultado = valor1 > valor2 ? 1 : 0;
    }
    printf("Comparação %s: %d\n", nome, resultado);
}

int main() {
    struct Carta cartas[2];

    // Entrada de dados - Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Informe o código da cidade (ex: A1, P4): ");
    scanf("%s", cartas[0].codigo);
    printf("Informe a população: ");
    scanf("%lu", &cartas[0].populacao);
    printf("Informe a área (em km²): ");
    scanf("%f", &cartas[0].area);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &cartas[0].pib);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &cartas[0].pontos_turisticos);

    // Cálculo - Carta 1
    cartas[0].densidade = cartas[0].populacao / cartas[0].area;
    cartas[0].pib_per_capita = cartas[0].pib / cartas[0].populacao;
    cartas[0].super_poder = cartas[0].populacao + cartas[0].area + cartas[0].pib +
                            cartas[0].pontos_turisticos + cartas[0].pib_per_capita +
                            (1.0f / cartas[0].densidade);

    printf("\n");

    // Entrada de dados - Carta 2
    printf("Cadastro da Carta 2\n");
    printf("Informe o código da cidade (ex: A1, P4): ");
    scanf("%s", cartas[1].codigo);
    printf("Informe a população: ");
    scanf("%lu", &cartas[1].populacao);
    printf("Informe a área (em km²): ");
    scanf("%f", &cartas[1].area);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &cartas[1].pib);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &cartas[1].pontos_turisticos);

    // Cálculo - Carta 2
    cartas[1].densidade = cartas[1].populacao / cartas[1].area;
    cartas[1].pib_per_capita = cartas[1].pib / cartas[1].populacao;
    cartas[1].super_poder = cartas[1].populacao + cartas[1].area + cartas[1].pib +
                            cartas[1].pontos_turisticos + cartas[1].pib_per_capita +
                            (1.0f / cartas[1].densidade);

    printf("\n");

    // Exibição dos dados
    for (int i = 0; i < 2; i++) {
        printf("===== Dados da Carta %d =====\n", i + 1);
        printf("Código da cidade: %s\n", cartas[i].codigo);
        printf("População: %lu habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: R$ %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[i].densidade);
        printf("PIB per Capita: R$ %.6f bilhões por habitante\n", cartas[i].pib_per_capita);
        printf("Super Poder: %.6f\n", cartas[i].super_poder);
        printf("\n");
    }

    // Comparações
    printf("===== Comparações =====\n");
    comparar_atributo("População", (float)cartas[0].populacao, (float)cartas[1].populacao, 0);
    comparar_atributo("Área", cartas[0].area, cartas[1].area, 0);
    comparar_atributo("PIB", cartas[0].pib, cartas[1].pib, 0);
    comparar_atributo("Pontos Turísticos", (float)cartas[0].pontos_turisticos, (float)cartas[1].pontos_turisticos, 0);
    comparar_atributo("Densidade Populacional", cartas[0].densidade, cartas[1].densidade, 1); // inverso
    comparar_atributo("PIB per Capita", cartas[0].pib_per_capita, cartas[1].pib_per_capita, 0);
    comparar_atributo("Super Poder", cartas[0].super_poder, cartas[1].super_poder, 0);

    return 0;
}
