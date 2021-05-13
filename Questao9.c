//Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

  float fahrenheit;

  printf("Digite a temperatura em Fahrenheit: \n");
  scanf("%f", &fahrenheit);

  float celsius = 5 * ((fahrenheit-32) / 9);

  printf("A temperatura, em graus Celsius, é: %1.2f C", celsius);

  return 0;
}
