#include <stdio.h>

// Função para simular o movimento da Torre
void moverTorre(int casas) {
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas; i++) {
        printf("Direita\n");
    }
}

// Função para simular o movimento do Bispo
void moverBispo(int casas) {
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casas) {
        printf("Cima, Direita\n");
        i++;
    }
}

// Função para simular o movimento da Rainha
void moverRainha(int casas) {
    printf("\nMovimento da Rainha:\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casas);
}

int main() {
    // Número de casas a serem movidas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Simulando os movimentos
    moverTorre(casasTorre);
    moverBispo(casasBispo);
    moverRainha(casasRainha);

    return 0;
}
