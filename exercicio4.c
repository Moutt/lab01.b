#include <stdio.h>
#include <stdlib.h>

int main() {
  char nome[50];
  char nome2[50];

  printf("Digite um nome: ");
  scanf("%s", nome);

  printf("Digite outro nome: ");
  scanf("%s", nome2);

  int tamanho1 = 0, tamanho2 = 0;
  while (nome[tamanho1] != '\0'){
    tamanho1 ++ ;
  }
  while (nome2[tamanho2] != '\0'){
    tamanho2 ++ ;
  }

  int menor, nomeMenor, tamanhoIgual = 0, maior;
  if(tamanho1 == tamanho2){tamanhoIgual = 1;}
  if(tamanho1 < tamanho2){
    menor = tamanho1;
    maior = 1;
  }else{menor = tamanho2; maior = 2;}

  for(int i = 0; i < menor; i++){
    if(nome[i] < nome2[i]){
      nomeMenor = 1;
      break;
    }
    if(nome[i] > nome2[i]){
      nomeMenor = 2;
      break;
    }
    if(i == menor - 1 && nome[i] == nome2[i]){
      nomeMenor = 3;
      if(tamanhoIgual == 0){
        nomeMenor = maior;
      }
    }
  }
  if (nomeMenor == 1) {
    printf("%s \n%s\n", nome, nome2);
  } else if (nomeMenor == 2) {
    printf("%s \n%s\n", nome2, nome);
  } else {
    printf("Os nomes são iguais: %s\n", nome);
  }

  return 0;
}