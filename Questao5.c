// 5 - Faça um Programa que converta metros para centímetros.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

float m, cm;

  printf("Insira a distância em metros: \n");
  scanf("%f", &m);

cm = m * 100;

printf("A distância em cm equivale a: %0.0f cm", cm);

  return 0;
}
