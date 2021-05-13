//Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número]


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numero;

  printf("Digite um número:\n");
  scanf("%d", &numero);

  printf("O número digitado foi: %d", numero);

  return 0;
}
