#include <stdio.h>

// Função recursiva para simular o movimento da Torre
void moverTorreRecursivo(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Direita\n");
    moverTorreRecursivo(casas - 1); // Chamada recursiva
}

// Função recursiva para simular o movimento do Bispo usando loops aninhados
void moverBispoRecursivo(int casas, int movidos) {
    if (movidos == casas) return; // Condição de parada
    // Loop aninhado para representar o movimento diagonal
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispoRecursivo(casas, movidos + 1); // Chamada recursiva
}

// Função recursiva para simular o movimento da Rainha
void moverRainhaRecursivo(int casas) {
    if (casas == 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1); // Chamada recursiva
}

// Função para simular o movimento do Cavalo usando loops complexos
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    int movimentos = 0;
    for (int i = 0; i < 2; i++) { // Duas casas para cima
        printf("Cima\n");
        movimentos++;
        if (movimentos == 2) {
            for (int j = 0; j < 1; j++) { // Uma casa para a direita
                printf("Direita\n");
                break; // Saída do loop interno
            }
            break; // Saída do loop externo após o movimento em "L"
        }
    }
}

int main() {
    // Número de casas a serem movidas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Simulando os movimentos
    printf("Movimento da Torre:\n");
    moverTorreRecursivo(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(casasBispo, 0);

    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursivo(casasRainha);

    moverCavalo();

    return 0;
}