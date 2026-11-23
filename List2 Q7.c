#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float preco, total=0;
    int quantidade=0;

    do {
        printf("Digite o preço do produto (0 para encerrar o lançamento de valores): R$ ");
        scanf("%f", &preco);

        if (preco < 0) {
            printf("Valor inválido! Preços negativos são rejeitados.\n");
        } else if (preco > 0) {
            total += preco;
            quantidade++;}}

    while (preco != 0);
    printf("\n--- Resumo da Compra ---\n");
    printf("\nQuantidade de produtos: %d\n", quantidade);
    printf("Total da compra: R$ %.2f\n", total);

    return 0;
}
