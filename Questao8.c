#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

 float valor;
 int horas;

 printf("Quanto você ganha por hora no seu trabalho? \n");
 scanf("%f", &valor);

 printf("Quantas horas você trabalha por mês? \n");
 scanf("%d", &horas);

 float total_salario = valor * horas;

 printf("O seu salário no referido mês é: %1.2f", total_salario);

  return 0;
}
