// 5 - Fa�a um Programa que converta metros para cent�metros.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

float m, cm;

  printf("Insira a dist�ncia em metros: \n");
  scanf("%f", &m);

cm = m * 100;

printf("A dist�ncia em cm equivale a: %0.0f cm", cm);

  return 0;
}
