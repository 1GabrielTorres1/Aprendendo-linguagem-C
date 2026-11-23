#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "pagamento.h"

void exibirFormasPagamento() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    printf("\n|---Formas de pagamento:---|\n");
    printf("\n\n1 - PIX (5%% de desconto)\n");
    printf("2 - Cartão (sem desconto)\n");
    printf("3 - Dinheiro (sem desconto)\n");
}

float calcularDesconto(float valor, int forma) {
    if (forma == 1) {
        return valor * 0.05f;
    }
    return 0.0f;
}

float calcularTotal(float valor, float desconto) {
    return valor - desconto;
}
