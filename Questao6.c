// 6 -Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<math.h>

int main(void) {
    setlocale(LC_ALL, "");

  float raio, area;

  printf("Informe o raio do c�rculo: \n");
  scanf("%f", &raio);

  area = 3.14*(raio * raio);

  printf("A �rea do c�culo �: %0.2fcm�", area);

  return 0;
}
