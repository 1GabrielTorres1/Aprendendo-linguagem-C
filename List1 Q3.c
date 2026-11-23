#include <stdio.h> // Conversor de temperatura - Leia uma temperatura em Celsius e converta para Fahrenheit.
#include <stdlib.h>
#include <locale.h>

int main(){

    float c;
    float f;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");

    printf("Digite a temperatura atual em celsius para converter em Fahrenheit:");
    scanf("%g",&c);

    printf("\n\n\nA temperatura %g°c é: %g°f\n\n\n\n\n", c, f = c*1.8+32);

    system("pause");

    return 0;
}
