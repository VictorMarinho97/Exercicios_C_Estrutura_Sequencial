// 3 - Fa�a um Programa que pe�a dois n�meros e imprima a soma.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int a, b;

  printf("\n Digite o primeiro n�mero:");
  scanf("%d", &a);

  printf("\n Digite o Segundo n�mero:");
  scanf("%d", &b);

  printf("\n O resultado da soma entre %d e %d �: %d ", a, b, a+b);


  return 0;
}
