#include <stdio.h> // 23 - Maior número digitado - Leia 10 números e informe qual foi o maior valor digitado (Fiz com bool para gerar números randômicos e apresentar o maior número encontrado).
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    srand((unsigned int)time(NULL));

    int vetor[10];
    int i = 0;
    bool gerando = true;

    while (gerando) {
        int num = (rand() % 25000) + 1;
        bool repetido = false;

        for (int j = 0; j < i; j++) {
            if (vetor[j] == num) {
                repetido =
                true;
                break;}}
        if (!repetido) {
            vetor[i] = num;
            i++;}
        if (i == 10) {
            gerando = false;}}

    int maior = vetor[0];
    printf("\n\nValores gerados no vetor:\n\n");
    for (int k = 0; k < 10; k++) {
        printf("vetor[%d] = %d\n", k, vetor[k]);

        if (vetor[k] > maior) {
            maior = vetor[k];}}

    printf("\nO maior valor encontrado: %d\n\n\n", maior);

    system("pause");
    return 0;
}
