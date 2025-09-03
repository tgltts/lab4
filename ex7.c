#include <stdio.h>    
#include <stdlib.h>
#define TAM 5

int buscaValor(int vetor[], int x) {   
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == x) {
            return i;
        }
    }
    return -1;   
}

int main() {
    int vetor[TAM];
    int x;

    printf("Digite 5 números inteiros: \n");
    for (int i = 0; i < TAM; i++) {   
        scanf("%d", &vetor[i]);       
    }

    printf("Digite o valor que deseja procurar: ");
    scanf("%d", &x);

    int posicao = buscaValor(vetor, x);

    if (posicao != -1) {
        printf("O valor %d está na posição %d do vetor \n", x, posicao);  
    } else {
        printf("O valor %d não foi encontrado no vetor \n", x);         
    }
    return 0;
}
