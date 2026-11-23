#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float valorCompra, frete, total;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra >= 200) {
        frete = 0;}
    else {
        frete = 20;}

    total = valorCompra + frete;

    printf("\n--- Resumo do Pedido ---\n");
    printf("\n\nValor da compra: R$ %.2f\n", valorCompra);
    printf("Frete:           R$ %.2f\n", frete);
    printf("Total do pedido: R$ %.2f\n", total);

    return 0;
}
