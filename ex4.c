#include <stdio.h>

int main() {
    int A[5] = {7, 2, 5, 8, 4};
    int B[4] = {4, 2, 9, 5};
    int i, j, encontrado;

    printf("A - B = { ");

    for (i = 0; i < 5; i++) {
        encontrado = 0; // assume que A[i] não está em B
        for (j = 0; j < 4; j++) {
            if (A[i] == B[j]) {
                encontrado = 1; // achou A[i] em B
                break;
            }
        }
        if (!encontrado) {
            printf("%d ", A[i]);
        }
    }

    printf("}\n");

    return 0;
}
