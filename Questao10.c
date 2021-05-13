//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

  float celsius;

  printf("Digite a temperatura em Celsius: \n");
  scanf("%f", &celsius);

  float fahrenheit = (1.8 * celsius) + 32;

  printf("A temperatura, em Fahrenheit, é: %f F", fahrenheit);

  return 0;
}
