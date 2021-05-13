//16. Fa�a um programa para uma loja de tintas. O programa dever� pedir o tamanho em metros quadrados da �rea a ser pintada.
//Considere que a cobertura da tinta � de 1 litro para cada 3 metros quadrados e que a tinta � vendida em latas de
//18 litros, que custam R$ 80,00. Informe ao usu�rio a quantidade de latas de tinta a serem compradas e o pre�o total.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

  float area, qtd_latas, preco;

  printf("Informe o tamanho da �rea a ser pintada, em m�: ");
scanf("%f", &area);

float litro = area / 3;

qtd_latas = ceil(litro / 18);

preco = qtd_latas * 80;

printf("Voc� precisar� de %0.2f litros \n", litro);

printf("Quantidade de latas: %0.2f latas \n", qtd_latas);

printf("O pre�o ser� de: %0.2f R$ \n", preco);


  return 0;
}
