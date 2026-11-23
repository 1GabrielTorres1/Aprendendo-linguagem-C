#include <stdio.h> // Sequência de Fibonacci - Leia a quantidade N de termos desejada e apresente os primeiros N termos da sequência de Fibonacci. (Usei longlong para chegar ao máximo de termos)
#include <locale.h>
#include <stdlib.h>

long long main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    long long n;
    long long a=0,b=1,proximo;
    printf("Digite a quantidade de termos N: ");
    scanf("%lld", &n);
    for (long long i = 0; i < n; i++) {
        printf("%lld ", a);
        proximo = a + b;
        a = b;
        b = proximo;}
    printf("\n");
    return 0;
}
