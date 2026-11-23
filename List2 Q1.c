#include <stdio.h> // Simulador de salário líquido
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float salariobruto, desconto1, desconto2;
    float valordesc1, valordesc2, salarioliquido;

    printf("Digite o salário bruto: R$ ");
    scanf("%f", &salariobruto);

    printf("Digite o primeiro desconto (em %%): ");
    scanf("%f", &desconto1);

    printf("Digite o segundo desconto (em %%): ");
    scanf("%f", &desconto2);

    valordesc1 = salariobruto * (desconto1 / 100);
    valordesc2 = salariobruto * (desconto2 / 100);
    salarioliquido = salariobruto - valordesc1 - valordesc2;

    printf("\n Resumo do Cálculo \n");
    printf("Salário Bruto:      R$ %.2f\n", salariobruto);
    printf("Desconto 1 (%.1f%%):  R$ %.2f\n", desconto1, valordesc1);
    printf("Desconto 2 (%.1f%%):  R$ %.2f\n", desconto2, valordesc2);
    printf("Salário Líquido:    R$ %.2f\n", salarioliquido);

    return 0;
}
