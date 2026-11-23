#include <locale.h> // 20. Fatorial - Leia um número inteiro não negativo e calcule seu fatorial.
#include <stdio.h> // Tentei fazer o fatorial de 15 e deu errado vi que int só tem mémoria até 12!, então mudei para llu que libera até 20!, não sabia dessa limitação de mémoria e não conhecia essa variável.
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    unsigned long long num,fatorial=1;
    printf("\n\nDigite um número inteiro e não negativo, e iremos calcular  fatorial desse número:   ");
    scanf("%llu",&num);
    printf("\n\n\n");
    for (int i=1;i<=num;i++){fatorial*=i;}
    printf("  \nO fatorial de %llu é %llu  ",num,fatorial);
    printf("\n\n\n");
    system("pause");
    return 0;
}
