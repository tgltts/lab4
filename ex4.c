#include <stdio.h>

#define TAM_A 5
#define TAM_B 4


void imprimirDiferenca(int A[], int tamanhoA, int B[], int tamanhoB) {
    int encontrou = 0; 

    printf("Diferença: { ");
    for (int i = 0; i < tamanhoA; i++) {
        for (int j = 0; j < tamanhoB; j++) {
            if (A[i] != B[j]) {
                printf("%d ", A[i]);
                encontrou = 1;
                break; 
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum elemento diferente");
    }

    printf("}\n");
}

int main() {
    int A[TAM_A] = {7, 2, 5, 8, 4};
    int B[TAM_B] = {4, 2, 9, 5};

    imprimirDiferenca(A, TAM_A, B, TAM_B);

    int C[3] = {3, 9, 11};
    int D[3] = {2, 6, 1};

    imprimirDiferenca(C, 3, D, 3);

    return 0;
}
