#include <locale.h> // 17. Tabuada - Leia um número e apresente sua tabuada de multiplicação de 1 a 10.
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int num;
    printf("\n\nDigite um número e gere sua tabuada de 1 a 10:   ");
    scanf("%i",&num);
    printf("\n\n\n");
    for (int i=1;i<=10;i++){printf("  %i x %i = %i\n ",num,i,num*i);}// No for (Começa por 1 / limitei o cálculo até 10 /e condicionei a incrementar)e o printf é desenhando da forma de tabuada, seguido das váriaveis e o cálculo necessário.
    printf("\n\n\n");
    return 0;
}
