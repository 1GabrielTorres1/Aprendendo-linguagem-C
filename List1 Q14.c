#include <locale.h> // Contagem regressiva - Leia um número inteiro positivo N e faça uma contagem regressiva de N até zero.
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int num;
    printf("\n\nDigite um número inteiro e positivo:  ");
    scanf("%i",&num);
    printf("\n\n\n");
    for (int i=num;i>=0;i--){printf("%i,  ", i);}
    printf("\n\n\n");
    return 0;
}
