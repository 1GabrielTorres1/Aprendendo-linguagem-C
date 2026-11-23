#include <locale.h> // Par ou ímpar - Leia um número inteiro e informe se ele é par ou ímpar.
#include <stdio.h>
#include <stdlib.h>

int main(){


    int numero;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    printf("Digite um numero:");
    scanf("%i",&numero);
  if (numero%2==0){printf("\n\nEsse número é par.\n\n\n\n");}
  else {printf("\n\nEsse número é ímpar.\n\n\n\n");}

  system("pause");

  return 0;
}
