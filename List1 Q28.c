#include <stdio.h>  // Divisores de um número - Leia um número inteiro positivo e apresente todos os seus divisores.
#include <locale.h>
#include <stdlib.h>

int main() {

    int num;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    printf("\n\nDigite um número inteiro positivo:  ");
    scanf("%d", &num);
    printf("\n\nOs divisores de %d são: \n", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);}}

    return 0;
}
