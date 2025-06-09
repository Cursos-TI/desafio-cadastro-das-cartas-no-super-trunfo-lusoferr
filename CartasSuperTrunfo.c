#include <stdio.h>

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

float calcular_densidade_populacional(Carta carta) {
    if (carta.area == 0) {
        return 0; // Evita divisão por zero 
    }
    return carta.populacao / carta.area;
}

float calcular_pib_per_capita(Carta carta) {
    if (carta.populacao == 0) {
        return 0; // Evita divisão por zero
    }
    return (carta.pib * 1000000000) / carta.populacao;
}

int main() {
    Carta carta1, carta2;
    char estado;
    int cidade;
    
    printf("=== CADASTRO DE CARTAS SUPER TRUNFO - PAÍSES ===\n\n");
    
    // Cadastro da primeira carta
    printf("*** CADASTRO DA PRIMEIRA CARTA ***\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1 a 4): ");
    scanf("%d", &cidade);
    sprintf(carta1.codigo, "%c%02d", estado, cidade); 
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    // Cálculo dos atributos derivados da primeira carta
    carta1.densidade_populacional = calcular_densidade_populacional(carta1);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1);
    
    printf("\n");
    
    // Cadastro da segunda carta
    printf("*** CADASTRO DA SEGUNDA CARTA ***\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1 a 4): ");
    scanf("%d", &cidade);
    sprintf(carta2.codigo, "%c%02d", estado, cidade); 
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    
    // Cálculo dos atributos derivados da segunda carta
    carta2.densidade_populacional =  calcular_densidade_populacional(carta2);
    carta2.pib_per_capita =  calcular_pib_per_capita(carta2);
    
    // Exibição dos dados cadastrados
    printf("\n=== CARTAS CADASTRADAS ===\n\n");
    
    printf("*** CARTA 1 ***\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta1.pib_per_capita);
    
    printf("\n*** CARTA 2 ***\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta2.pib_per_capita);
    
    return 0;
}


