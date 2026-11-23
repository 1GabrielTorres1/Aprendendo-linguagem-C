#include <stdio.h> // Dobro, triplo e metade - Leia um número e mostre seu dobro, triplo e metade.
#include <stdlib.h>
#include <locale.h>

int main(){

    float numero;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");

    printf("Digite um numero:");
    scanf("%g",&numero);

    printf("\n\nO dobro do número %g é: %g\n\n", numero, numero*2);
    printf("\n\nO triplo do número %g é: %g\n\n", numero, numero*3);
    printf("\n\nA metade do número %g é: %g\n\n", numero, numero/2);

    system ("pause");

    return 0;
}
