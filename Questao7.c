// 7 - Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
    setlocale(LC_ALL, "");

float lado, area, dobro;

printf("Informe o valor do lado do quadrado:");
scanf("%f", &lado);

area = lado * lado;

printf("\n O valor da �rea do quadrado �: %2.2f \n", area);

dobro = area * 2;

printf("\n O dobro da  �rea do quadrado �: %2.2f", dobro);

  return 0;
}
