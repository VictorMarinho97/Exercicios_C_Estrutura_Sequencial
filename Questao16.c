//16. Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
//Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de
//18 litros, que custam R$ 80,00. Informe ao usuário a quantidade de latas de tinta a serem compradas e o preço total.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

  float area, qtd_latas, preco;

  printf("Informe o tamanho da área a ser pintada, em m²: ");
scanf("%f", &area);

float litro = area / 3;

qtd_latas = ceil(litro / 18);

preco = qtd_latas * 80;

printf("Você precisará de %0.2f litros \n", litro);

printf("Quantidade de latas: %0.2f latas \n", qtd_latas);

printf("O preço será de: %0.2f R$ \n", preco);


  return 0;
}
