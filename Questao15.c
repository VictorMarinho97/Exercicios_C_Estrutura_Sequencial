//15. Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre
//o total do seu sal�rio no referido m�s, sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e
//5% para o sindicato, fa�a um programa que nos d�:
//sal�rio bruto.
//quanto pagou ao INSS.
//quanto pagou ao sindicato.
//o sal�rio l�quido.
//calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
//+ Sal�rio Bruto : R$
//- IR (11%) : R$
//- INSS (8%) : R$
//- Sindicato ( 5%) : R$
//= Sal�rio Liquido : R$
//Obs.: Sal�rio Bruto - Descontos = Sal�rio L�quido.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

  float salario_hora, hora_mes, salario_bruto, ir, inss, sindicato;

  printf("Defina quanto voc� ganha por hora trabalhada: \n");
  scanf("%f", &salario_hora);

  printf("Agora, defina quantas horas voc� trabalha por m�s: \n");
  scanf("%f", &hora_mes);

   salario_bruto = salario_hora * hora_mes;

   ir = salario_bruto * 0.11;

   inss = salario_bruto * 0.08;

   sindicato = salario_bruto * 0.05;

   float salario_liquido = salario_bruto - (salario_bruto * 0.24);

   printf("Sal�rio bruto: %0.2f \n", salario_bruto);
   printf("Valor para IR: %0.2f \n", ir);
   printf("Valor para INSS: %0.2f \n", inss);
   printf("Valor para sindicato: %0.2f \n", sindicato);
   printf("Sal�rio l�quido: %0.2f \n", salario_liquido);



  return 0;
}
