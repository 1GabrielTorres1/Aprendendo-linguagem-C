#include <locale.h> // Faixa etária - Leia a idade de uma pessoa e classifique-a em criança, adolescente, adulto ou idoso. Defina no programa os intervalos utilizados para cada classificação.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");

    printf("\n\n\nQual a idade do paciente?\n\n\n");
    scanf("%i",&idade);

  if(idade>=0&&idade<=12){printf("\n\nO paciente é uma criança.\n\n\n\n");}
  else if(idade>=13&&idade<=18){printf("\n\nO paciente é um adolescente.\n\n\n\n");}
  else if(idade>=19&&idade<=59){printf("\n\nO paciente é um adulto.\n\n\n\n");}
  else if(idade>=60&&idade<=3000000){printf("\n\nO paciente é um idoso.\n\n\n\n");}
  else {printf("\n\nSimplesmente MUMM-RÁ, o ser de vida eterna!.\n\n\n\n");}

  system("pause");
  return 0;
}
