#include <locale.h> // 21. Quantidade de positivos e negativos - Leia 10 números e, ao final, informe quantos valores são positivos e quantos são negativos. Caso deseje, contabilize separadamente os valores iguais a zero.
#include <stdio.h>
#include <stdlib.h>

int main(){

    setlocale (LC_ALL, "Portuguese");
    system ("color 74");

    float num,positivos=0,negativos=0,zeros=0;

    for(float i=1;i<=10;i++)
    {printf("          \n\nDigite os 10 números desejados e pressione enter em cada um:    ",i);
    scanf("%g",&num);

    if(num>0){positivos++;}
    else if(num<0){negativos++;}
    else{zeros++;}
    }
    printf("\n\n\n");
    printf(" Números Positivos=  %g  ",positivos);
    printf("\n\n\n");
    printf(" Números Negativos=  %g  ",negativos);
    printf("\n\n\n");
    printf("  Zeros=  %g  ",zeros);
    printf("\n\n\n");

    system("pause");
    return 0;
}
