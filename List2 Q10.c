#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

double calcularRaiz(double n) {
    return sqrt(n);}
double calcularQuadrado(double n) {
    return pow(n, 2);}
double arredondarProximo(double n) {
    return round(n);}
double arredondarCima(double n) {
    return ceil(n);}
double arredondarBaixo(double n) {
    return floor(n);}

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int opcao;
    double num;
    inicio:
    do {
        printf("\n=== Calculadora Científica ===\n");
        printf("\n1 - Raíz quadrada\n");
        printf("2 - Potência ao quadrado\n");
        printf("3 - Arredondar (mais próximo)\n");
        printf("4 - Arredondar para cima\n");
        printf("5 - Arredondar para baixo\n");
        printf("0 - Sair\n");
        printf("\n\nEscolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 5) {
            printf("Digite o número: ");
            scanf("%lf", &num);
        }

        switch (opcao) {
            case 1:
                if (num < 0) {
                    printf("Erro: não existe raíz real de número negativo.\n");
                } else {
                    printf("Raíz quadrada de %.2f = %.2f\n", num, calcularRaiz(num));
                }
                break;
            case 2:
                printf("%.2f ao quadrado = %.2f\n", num, calcularQuadrado(num));
                break;
            case 3:
                printf("Arredondado (mais próximo): %.0f\n", arredondarProximo(num));
                break;
            case 4:
                printf("Arredondado para cima: %.0f\n", arredondarCima(num));
                break;
            case 5:
                printf("Arredondado para baixo: %.0f\n", arredondarBaixo(num));
                break;
            case 0:
                printf("Encerrando a calculadora...\n");
                break;
            default:
                printf("Opção inválida! Escolha entre 0 e 5.\n");
                goto inicio;
                break;
        }
    } while (opcao != 0);

    return 0;
}
