#include <locale.h> // Números ímpares - Leia um número inteiro positivo N e mostre todos os números ímpares existentes entre 1 e N.
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int num;
    printf("\n\nDigite um número inteiro e positivo:  ");
    scanf("%i",&num);
    printf("\n\n\n");
    for (int i=3;i<=num-1;i++){if (i%2!=0){printf("  %i,  ",i);}}
    printf("\n\n\n");
    return 0;
}
