//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal,
//usando a seguinte f�rmula: (72.7*altura) - 58

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

 float altura;

 printf("Informe a sua altura para calcularmos o seu peso ideal: \n");
 scanf("%f", &altura);

 float ideal = (72.7 * altura) - 58;

 printf("O seu peso ideal �: %1.1f Kg \n", ideal);

  return 0;
}
