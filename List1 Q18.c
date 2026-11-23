#include <locale.h> // 18. Soma de 1 até N - Leia um número inteiro positivo N e calcule a soma de todos os números entre 1 e N.
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int num,soma;
    printf("\n\nDigite um número inteiro e positivo, isso irá calcular todos os números de 1 até ele:   ");
    scanf("%i",&num);
    printf("\n\n\n");
    for (int i=1;i<=num;i++)soma+=i;
    printf("  Soma de 1 até %i = %i ",num,soma);
    printf("\n\n\n");
    system("pause");
    return 0;
}
