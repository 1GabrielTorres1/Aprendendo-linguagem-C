#include <locale.h> // Maior entre três números - Leia três números e determine o maior deles.(Adicionei linhas para resultar caso eles foram iguais)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero01, numero02,numero03;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");

    printf("Digite o primeiro número :");
    scanf("%i",&numero01);
    printf("\n\n\nDigite o segundo número :");
    scanf("%i",&numero02);
    printf("\n\n\nDigite o terceiro número :");
    scanf("%i",&numero03);

  if(numero01>numero02&&numero01>numero03){printf("\n\nO primeiro número é maior\n\n\n\n");}
  else if(numero02>numero01&&numero02>numero03){printf("\n\nO segundo número é maior\n\n\n\n");}
  else if(numero03>numero01&&numero03>numero02){printf("\n\nO terceiro número é o maior.\n\n\n\n");}
  else if(numero01==numero02&&numero01>numero03){printf("O primeiro e o segundo número ambos são maiores.\n\n\n\n");}
  else if(numero01==numero03&&numero01>numero02){printf("O primeiro e o terceiro número ambos são maiores.\n\n\n\n");}
  else if(numero03==numero02&&numero03>numero01){printf("O Terceiro o segundo números ambos são maiores.\n\n\n\n");}
  else{printf("Todos números são iguais.\n\n\n\n");}

  system("pause");
  return 0;
}
