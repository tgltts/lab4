#include <stdio.h>

#define TAM 5

// Função que inverte os valores do vetor
void inverterVetor(int vetor[]) {
    int temp;
    for (int i = 0; i < TAM / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[TAM - 1 - i];
        vetor[TAM - 1 - i] = temp;
    }
}

int main() {
    int V[TAM] = {4, 9, 10, 8, 6};

    printf("Vetor original: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    inverterVetor(V);

    printf("Vetor invertido: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}
