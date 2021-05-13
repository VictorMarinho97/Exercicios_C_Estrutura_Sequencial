//Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//a. Para homens: (72.7*h) - 58
//b. Para mulheres: (62.1*h) - 44.7

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {

  float altura;
  char sexo;
  float peso_ideal = 0;

  printf("Digite a sua altura: \n");
  scanf("%f", &altura);

  printf("Digite o seu sexo('m' para masculino e 'f' para feminino) \n");
  scanf("%s", &sexo);

  if(sexo == 'm'){
    peso_ideal = (72.7*altura) - 58;
    printf("O seu peso ideal é: %0.2f Kg", peso_ideal);
  } else if (sexo == 'f'){
    peso_ideal = (62.1*altura) - 44.7;
    printf("O seu peso ideal é: %0.2f Kg", peso_ideal);
  } else{
    printf("Sexo inválido!");
  }

  return 0;
}
