#include <stdio.h>

#define TAM_A 5
#define TAM_B 4

// Função que imprime a interseção entre os vetores
void imprimirIntersecao(int A[], int tamanhoA, int B[], int tamanhoB) {
    int encontrou = 0; // flag para saber se encontrou algum elemento em comum

    printf("Intersecao: { ");
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                encontrou = 1;
                break; // evita repetir a comparação com o mesmo elemento de B
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum elemento em comum");
    }

    printf("}\n");
}

int main() {
    int A[TAM_A] = {7, 2, 5, 8, 4};
    int B[TAM_B] = {4, 2, 9, 5};

    imprimirIntersecao(A, TAM_A, B, TAM_B);

    int C[3] = {3, 9, 11};
    int D[3] = {2, 6, 1};

    imprimirIntersecao(C, 3, D, 3);

    return 0;
}
