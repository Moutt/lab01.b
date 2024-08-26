#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanho;
  printf("Digite o tamanho da sua matriz quadrada: ");
  scanf("%d", &tamanho);
  int matriz[tamanho][tamanho];
  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < tamanho; j++) {
      printf("digite o numero da casa [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  int local, LouC = 3, mult;
  printf("Digite o número que você desseja multiplicar sua linha ou coluna: ");
  scanf("%d", &mult);
  while (LouC != 1 && LouC != 2) {
    printf("Digite 1 para multiplicar por uma linha ou 2 para multiplicar por "
           "uma coluna: ");
    scanf("%d", &LouC);
  }

  if (LouC == 1) {
    printf("Digite a linha que deseja multiplicar: ");
    scanf("%d", &local);
    for (int i = 0; i < tamanho; i++) {
      matriz[local - 1][i] = matriz[local - 1][i] * mult;
    }
  } else {
    printf("Digite a caluna que deseja multiplicar: ");
    scanf("%d", &local);
    for (int i = 0; i < tamanho; i++) {
      matriz[i][local - 1] = matriz[i][local - 1] * mult;
    }
  }

  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < tamanho; j++) {
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}