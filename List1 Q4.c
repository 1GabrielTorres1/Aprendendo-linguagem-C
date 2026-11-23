#include <stdio.h> // Média de três notas - Leia três notas, calcule a média e informe se o aluno foi aprovado ou reprovado.
#include <stdlib.h>
#include <locale.h>

int main(){

    float nota1,nota2,nota3,notafinal;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");

    printf("\n\nDigite nota 01:\n\n");
    scanf("%g",&nota1);
    printf("\n\nDigite nota 02:\n\n");
    scanf("%g",&nota2);
    printf("\n\nDigite nota 03:\n\n");
    scanf("%g",&nota3);

    printf("\n\nA nota final do aluno foi:  %g\n\n\n", notafinal=(nota1+nota2+nota3)/3);

    system("pause");

    return 0;
}
