// 6 -Faça um Programa que peça o raio de um círculo, calcule e mostre sua área

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>

int main(void) {
    setlocale(LC_ALL, "");

  float raio, area;

  printf("Informe o raio do círculo: \n");
  scanf("%f", &raio);

  area = 3.14*(raio * raio);

  printf("A área do cículo é: %0.2fcm²", area);

  return 0;
}
