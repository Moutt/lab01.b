#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int linhas;
  srand(time(NULL));
  printf("Digite o quantas linha tera sua matriz quadrada: ");
  scanf("%d", &linhas);
  int matriz[linhas][linhas];
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < linhas; j++) {
      matriz[i][j] = rand() % 100;
    }
  }
  int menor = matriz[0][0];
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < linhas; j++) {
      printf("\n%d\n", matriz[i][j]);
      if (matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
    }
  }
  printf("\n%d", menor);
  return 0;
}