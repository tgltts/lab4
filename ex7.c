#include <stdion.h>
#include <stdlib.h>
#define TAM 5

int buscaValor(int vetor[];intx){
  for (int i=0; i < 5; i++) {
      if (vetor[i] == x ){
          return i;
      }
  }
  return -1
}

int main(){
  int vetor[5];
  int x;

  printf("Digite 5 números inteiros: \n");
  for ( i=0 ; i<5; i++){
      scanf("%d", ¨&vetor[i]);
  }

  printf("Digite o valor que deseja procurar: ");
  scanf("%d" , &x);

  int posicao = buscaValor(vetor,x);

  if (posicao != -1){
      printf("O valor %d esta na posição %d do vetor \n, x, posicao)
   } 
        else { 
        printf("O valor %d nao foi encontrado no vetor \n", x)
        }
    return 0;
  }
  

  
