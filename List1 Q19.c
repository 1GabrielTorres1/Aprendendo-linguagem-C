#include <locale.h> // 19. Somatório de pares - Leia um número inteiro positivo N e calcule a soma de todos os números pares entre 1 e N.
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int num,soma;
    printf("\n\nDigite um número inteiro e positivo, isso irá somar todos os números pares de 1 até ele:   ");
    scanf("%i",&num);
    printf("\n\n\n");
    for (int i=1;i<=num;i++){if (i%2==0)soma+=i;}
    printf("  Soma de 1 até %i = %i ",num,soma);
    printf("\n\n\n");
    system("pause");
    return 0;
}
