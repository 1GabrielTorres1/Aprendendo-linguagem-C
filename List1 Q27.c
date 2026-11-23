#include <stdio.h> // Número primo - Leia um número inteiro positivo e determine se ele é primo, deixei o programa infinito sem chegar no return 0; para ficar testando vários números sem parar.
#include <locale.h
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    inicio:
    int num, divisores=0;

    printf("\n\nDigite um número inteiro positivo:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;}}

    if (divisores == 2) {
        printf("\n\n\n '%d' Esse número é primo.\n\n", num);}
    else {
        printf("\n\n\n'%d' Esse número não é primo.\n\n", num);}

    goto inicio;
    return 0;
}
