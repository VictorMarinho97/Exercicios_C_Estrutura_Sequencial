// 4 - Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

  float nota1, nota2, nota3, nota4;

  printf("Insira a primeira nota: \n");
  scanf("%f", &nota1);

  printf("Insira a segunda nota: \n");
  scanf("%f", &nota2);

  printf("Insira a terceira nota: \n");
  scanf("%f", &nota3);

 printf("Insira a quarta nota: \n");
  scanf("%f", &nota4);

  float media = (nota1 + nota2 + nota3 + nota4) /4;

printf("A m�dia bimestral do aluno �: %1.2f ", media);


  return 0;
}
