// 3 - Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int a, b;

  printf("\n Digite o primeiro número:");
  scanf("%d", &a);

  printf("\n Digite o Segundo número:");
  scanf("%d", &b);

  printf("\n O resultado da soma entre %d e %d é: %d ", a, b, a+b);


  return 0;
}
