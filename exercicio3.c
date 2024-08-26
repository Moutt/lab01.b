#include <stdio.h>
#include <stdlib.h>

int main() {
  int quant = 2;
  while(quant%2 == 0){
    printf("Quantos números vão ter a matriz que não pode ser par: ");
  scanf("%d", &quant);
    if(quant%2 == 0){
      printf("Lembre-se, número não pode ser par !!!\n");
    }
  }
  int matriz[quant];
  for(int i = 0; i < quant; i++){
    matriz[i] = i+1;
  }

  int x = quant - (quant / 2);
  for(int i = 0; i < x; i++){
    for(int k = 0; k < i; k++){
      printf("  ");
    }
    for(int j = i; j < quant - i; j++ ){
      printf("%d ", matriz[j]);
    }
    printf("\n");
  }

}