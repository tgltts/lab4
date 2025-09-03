
#include <stdio.h>
#include <stdbool.h>

bool estaCrescente(int vetor[], int tamanho){
    for(int i = 0; i < tamanho - 1; i++){
        if(vetor[i] > vetor[i + 1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    // Leitura dos elementos
    for (int i = 0; i < n; i++){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Verificação da ordem crescente
    if (estaCrescente(vetor, n)){
        printf("O vetor está em ordem crescente.\n");
    } else{
        printf("O vetor não está em ordem crescente.\n");
    }

    return 0;
}



  
