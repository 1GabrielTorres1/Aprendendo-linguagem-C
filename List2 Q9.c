#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    double venda, faturamento=0, ticketMedio=0;
    int quantidade=0;

    do {
        printf("Digite o valor da venda (0 para encerrar):R$ ");
        scanf("%lf", &venda);

        if (venda < 0) {
            printf("Valor inválido! Vendas negativas são ignoradas.\n");
        } else if (venda > 0) {
            faturamento += venda;
            quantidade++;}}
    while (venda != 0);

    if (quantidade > 0) {
        ticketMedio = faturamento / quantidade;}

    printf("\n--- Resumo do Expediente ---\n");
    printf("Quantidade de vendas: %d\n", quantidade);
    printf("Faturamento total: R$ %.lf\n", faturamento);
    printf("Ticket médio: R$ %.lf\n", ticketMedio);

    return 0;
}
