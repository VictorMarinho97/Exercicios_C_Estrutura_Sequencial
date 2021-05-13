
//João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
//Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo
//(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia
//a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite
//e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {

  float peso;

  printf("Digite o peso total dos peixes pegos em Kg: \n");
  scanf("%f", &peso);

  float excesso = peso - 50;
  float multa = excesso * 4;

  if(peso <= 50){
    printf("Peso total: %0.2f", peso);
    printf("\nSem taxa de multa");
  } else{
    printf("Peso total: %0.2f \n", peso);
    printf("\n O excesso de peso foi de %0.2f Kg \n", excesso);
    printf("\n O valor da multa a ser pago será de: %0.2f R$",  multa);

  }





  return 0;
}
