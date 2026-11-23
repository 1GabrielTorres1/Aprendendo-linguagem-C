#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void exibirVendas(float vendas[], int tamanho) {
    int i;
    printf("\n--- Vendas Registradas ---\n");
    for (i = 0; i < tamanho; i++) {
        printf("Venda %d: R$ %.2f\n", i + 1, vendas[i]);}}

float calcularfaturamento(float vendas[], int tamanho) {
    int i;
    float total = 0.0f;
    for (i = 0; i < tamanho; i++) {
        total += vendas[i];}
    return total;}

float localizarmaiorvenda(float vendas[], int tamanho) {
    int i;
    float maior = vendas[0];
    for (i = 1; i < tamanho; i++) {
        if (vendas[i] > maior) {
            maior = vendas[i];}}
    return maior;}
int contaracima500(float vendas[], int tamanho) {
    int i;
    int contador = 0;
    for (i = 0; i < tamanho; i++) {
        if (vendas[i] > 500.0f) {
            contador++;}}
    return contador;}

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float vendas[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite o valor da venda %d: R$ ", i + 1);
        scanf("%f", &vendas[i]);}

    exibirVendas(vendas, 10);

    printf("\n|---Resumo das Vendas---|\n");
    printf("Faturamento total: R$ %.2f\n", calcularfaturamento(vendas, 10));
    printf("Maior venda: R$ %.2f\n", localizarmaiorvenda(vendas, 10));
    printf("Vendas acima de R$ 500: %d\n", contaracima500(vendas, 10));

    return 0;
}
