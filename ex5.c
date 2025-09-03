#include <stdio.h>

int main() {
    int A[5] = {7, 2, 5, 8, 4};
    int B[4] = {4, 2, 9, 5};
    int i, j, encontrado;

    printf("A ∪ B = { ");

    
    for (i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }

  
    for (j = 0; j < 4; j++) {
        encontrado = 0; 
        for (i = 0; i < 5; i++) {
            if (B[j] == A[i]) {
                encontrado = 1; 
                break;
            }
        }
        if (!encontrado) {
            printf("%d ", B[j]);
        }
    }

    printf("}\n");

    return 0;
}
