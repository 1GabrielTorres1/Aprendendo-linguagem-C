#include <stdio.h>0
#include <locale.h>
#include <stdlib.h>
#include "calculadora.h"

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n=== Calculadora Modular ===\n");
        printf("\n\n1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                resultado = somar(num1, num2);
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = subtrair(num1, num2);
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 == 0.0f) {
                    printf("Erro: não é possível dividir por zero!\n");
                } else {
                    resultado = dividir(num1, num2);
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                }
                break;
            case 0:
                printf("Encerrando a calculadora...\n");
                break;
            default:
                printf("Opção inválida! Escolha um número entre 0 e 4.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
