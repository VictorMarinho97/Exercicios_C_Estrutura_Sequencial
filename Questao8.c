#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");

 float valor;
 int horas;

 printf("Quanto voc� ganha por hora no seu trabalho? \n");
 scanf("%f", &valor);

 printf("Quantas horas voc� trabalha por m�s? \n");
 scanf("%d", &horas);

 float total_salario = valor * horas;

 printf("O seu sal�rio no referido m�s �: %1.2f", total_salario);

  return 0;
}
