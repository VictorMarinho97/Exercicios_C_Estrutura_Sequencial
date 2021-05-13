//Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
//a. o produto do dobro do primeiro com metade do segundo .
//b. a soma do triplo do primeiro com o terceiro.
//c. o terceiro elevado ao cubo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

  int num1, num2;
  float num3;

  printf("Digite um número inteiro: \n");
  scanf("%d", &num1);

  printf("Digite outro número inteiro: \n");
  scanf("%d", &num2);

  printf("Agora, digite um número real: \n");
  scanf("%f", &num3);

  int prob_a =  (num1 * 2) * num2 / 2;

  float prob_b = (num1 * 3) + num3;

  float prob_c = pow(num3, 3);

  printf("\n o produto do dobro do primeiro número com metade do segundo é: %d \n", prob_a);

  printf(" \n a soma do triplo do primeiro número com o terceiro é: %1.2f \n", prob_b);

  printf(" \n o terceiro número elevado ao cubo é: %1.2f \n", prob_c);

  return 0;
}
