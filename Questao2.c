//Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero informado foi [n�mero]


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

  int numero;

  printf("Digite um n�mero:\n");
  scanf("%d", &numero);

  printf("O n�mero digitado foi: %d", numero);

  return 0;
}
