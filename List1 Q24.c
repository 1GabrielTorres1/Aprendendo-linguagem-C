#include <stdio.h> // 24. Maior e menor número - Leia uma quantidade N(defini 50 números randômicos entre 1 a 500) de números e informe o maior e o menor, irei usar bool para declarar posições de um vetor e informar o maior e o menor número encontrados.
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    srand((unsigned int)time(NULL));

    int vetor[50];
    int i = 0;
    bool criando = true;

    while (criando) {
        int num = (rand() % 500) + 1;
        bool repetido = false;

        for (int j = 0; j < i; j++) {
            if (vetor[j] == num) {
                repetido =
                true;
                break;}}
        if (!repetido) {
            vetor[i] = num;
            i++;}
        if (i == 50) {
            criando = false;}}

    int maior = vetor[0];
    printf("\n\nValores gerados no vetor:\n\n");
    for (int k = 0; k < 50; k++) {
        printf("vetor[%d] = %d\n", k, vetor[k]);

        if (vetor[k] > maior) {
            maior = vetor[k];}}

    int menor = vetor[0];
    printf("\n\nValores gerados no vetor:\n\n");
    for (int k = 0; k < 50; k++) {
        printf("vetor[%d] = %d\n", k, vetor[k]);

        if (vetor[k] < menor) {
            menor = vetor[k];}}

    printf("\n\n\nO MAIOR valor encontrado é: %d\n\n\n", maior);
    printf("O MENOR valor encontrado é: %d\n\n\n", menor);

    return 0;
}
