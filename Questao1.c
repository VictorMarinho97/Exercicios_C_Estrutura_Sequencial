// 1 - Faça um Programa que mostre a mensagem "Alo mundo" na tela

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    printf("Alô mundo!\n");

    return 0;
}
