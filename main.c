#include <stdio.h> // Antecessor e sucessor - Leia um número inteiro e exiba seu antecessor e seu sucessor.
#include <stdlib.h>
#include <locale.h>

int main(){

    int numero;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");

    printf("Digite um numero:");
    scanf("%i",&numero);

    printf("\n\nO antecessor do número %i é: %i\n\n", numero, numero-1);
    printf("O sucessor do número %i é: %i\n\n\n\n", numero, numero+1);

    system("pause");

    return 0;
}
