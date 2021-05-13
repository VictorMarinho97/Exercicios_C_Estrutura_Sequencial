//15. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre
//o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e
//5% para o sindicato, faça um programa que nos dê:
//salário bruto.
//quanto pagou ao INSS.
//quanto pagou ao sindicato.
//o salário líquido.
//calcule os descontos e o salário líquido, conforme a tabela abaixo:
//+ Salário Bruto : R$
//- IR (11%) : R$
//- INSS (8%) : R$
//- Sindicato ( 5%) : R$
//= Salário Liquido : R$
//Obs.: Salário Bruto - Descontos = Salário Líquido.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

  float salario_hora, hora_mes, salario_bruto, ir, inss, sindicato;

  printf("Defina quanto você ganha por hora trabalhada: \n");
  scanf("%f", &salario_hora);

  printf("Agora, defina quantas horas você trabalha por mês: \n");
  scanf("%f", &hora_mes);

   salario_bruto = salario_hora * hora_mes;

   ir = salario_bruto * 0.11;

   inss = salario_bruto * 0.08;

   sindicato = salario_bruto * 0.05;

   float salario_liquido = salario_bruto - (salario_bruto * 0.24);

   printf("Salário bruto: %0.2f \n", salario_bruto);
   printf("Valor para IR: %0.2f \n", ir);
   printf("Valor para INSS: %0.2f \n", inss);
   printf("Valor para sindicato: %0.2f \n", sindicato);
   printf("Salário líquido: %0.2f \n", salario_liquido);



  return 0;
}
