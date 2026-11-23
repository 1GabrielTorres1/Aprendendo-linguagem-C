#include <locale.h> // Maior entre dois números - Leia dois números e informe qual é o maior ou se os dois valores são iguais
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero01, numero02;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");

    printf("Digite o primeiro número:");
    scanf("%i",&numero01);
    printf("Digite o segundo número:");
    scanf("%i",&numero02);

  if (numero01>numero02){printf("\n\nO primeiro número é maior.\n\n\n\n");}
  else if (numero02>numero01){printf("\n\nO segundo número é maior.\n\n\n\n");}
  else {printf("\n\nOs números são iguais.\n\n\n\n");}

  system("pause");
  return 0;
}
