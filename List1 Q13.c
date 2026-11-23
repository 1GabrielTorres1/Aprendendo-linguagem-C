#include <locale.h> // Contagem crescente - Leia um número inteiro positivo N e mostre todos os números de 1 até N.
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int num;
    printf("\n\nDigite um número inteiro e positivo:  ");
    scanf("%i",&num);
    printf("\n\n\n");
    for (int i=1;i<=num;i++){printf("%i,  ", i);}
    printf("\n\n\n");
    return 0;
}
