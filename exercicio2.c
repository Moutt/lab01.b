#include <stdio.h>
#include <stdlib.h>

int main() {
  int N1, N2, N3, mediaExs;
  char nota;

  printf("Insira a nota 1: ");
  scanf("%d", &N1);
  printf("Insira a nota 2: ");
  scanf("%d", &N2);
  printf("Insira a nota 3: ");
  scanf("%d", &N3);
  printf("Insira a nota dos exercícios realizados: ");
  scanf("%d", &mediaExs);

  int MA = (N1 + N2 + N3 + mediaExs) / 4;

  if (MA < 4) {
    nota = 'E';
  } else if (MA < 6) {
    nota = 'D';
  } else if (MA < 7.5) {
    nota = 'C';
  } else if (MA < 9) {
    nota = 'B';
  } else {
    nota = 'A';
  }
  printf("Sua nota final é: %c\n", nota);
}