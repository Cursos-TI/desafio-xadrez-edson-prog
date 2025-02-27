#include <stdio.h>

#define MOV_TORRE 5  // Número de casas para a Torre
#define MOV_BISPO 5  // Número de casas para o Bispo
#define MOV_RAINHA 8 // Número de casas para a Rainha

int main() {
    // Movimentação da Torre (5 casas para a direita) usando for
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal superior direita) usando while
    printf("Movimentação do Bispo:\n");
    int j = 0;
    while (j < MOV_BISPO) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    return 0;
}
