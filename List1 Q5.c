#include <locale.h> // Positivo, negativo ou zero - Leia um número e determine se ele é positivo, negativo ou igual a zero
#include <stdio.h>
#include <stdlib.h>

int main(){


    float numero;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    printf("Digite um numero:");
    scanf("%g",&numero);
  if (numero>0){printf("\n\nEsse número é positivo.\n\n\n\n");}
  else if (numero<0){printf("\n\nEsse número é negativo\n\n\n\n");}
  else {printf("\n\nEsse número é zero, quer tirar onda é :(\n\n\n\n");}
  system("pause");

  return 0;
}
