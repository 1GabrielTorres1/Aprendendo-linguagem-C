#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "pagamento.h"

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float valor, desconto, total;
    int forma;

    printf("\n\nDigite o valor da compra: R$ ");
    scanf("%f", &valor);

    do {
        exibirFormasPagamento();
        printf("\nEscolha a forma de pagamento (1 a 3): ");
        scanf("%d", &forma);

        if (forma < 1 || forma > 3) {
            printf("Opção inválida! Escolha 1, 2 ou 3.\n");
        }
    } while (forma < 1 || forma > 3);

    desconto = calcularDesconto(valor, forma);
    total = calcularTotal(valor, desconto);

    printf("\n--- Resumo do Pagamento ---\n");
    printf("\nValor da compra: R$ %.2f\n", valor);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Total à pagar: R$ %.2f\n", total);

    return 0;
}
