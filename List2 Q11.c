#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int numsec, palpite, tentativas = 0;

    srand(time(NULL));
    numsec = (rand() % 100) + 1;

    do {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numsec) {
            printf("O número secreto é MAIOR.\n");}
        else if (palpite > numsec) {
            printf("O número secreto é MENOR.\n");
        }}
        while (palpite != numsec);
    printf("\nParabéns! Voce acertou o número %d em %d tentativas.\n", numsec, tentativas);

    return 0;
}
