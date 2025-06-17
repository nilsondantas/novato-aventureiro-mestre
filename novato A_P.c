#include <stdio.h>

// Estrutura que representa uma carta do jogo
struct Carta {
    char codigo[3];             // Ex: "A1", "P4"
    int populacao;             // População da cidade
    float area;                // Área em km²
    float pib;                 // Produto Interno Bruto
    int pontos_turisticos;    // Quantidade de pontos turísticos
};

int main() {
    struct Carta cartas[2];  // Leque para armazenar duas cartas
    int i;

    // Entrada de dados
    for (i = 0; i < 2; i++) {
        printf("Cadastro da Carta %d\n", i + 1);

        printf("Informe o código da cidade (ex: A1, P4): ");
        scanf("%s", cartas[i].codigo);

        printf("Informe a população: ");
        scanf("%d", &cartas[i].populacao);

        printf("Informe a área (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("Informe o PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);

        printf("Informe o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);

        printf("\n");  // Espaço entre cadastros
    }

    // Saída de dados
    for (i = 0; i < 2; i++) {
        printf("===== Dados da Carta %d =====\n", i + 1);
        printf("Código da cidade: %s\n", cartas[i].codigo);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: R$ %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("\n");
    }

    return 0;
}
