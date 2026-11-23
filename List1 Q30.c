#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("color 74");
    int numsec, palpite, numanterior = 0, numposterior = 0, penalizado = 0;

    do {
        printf("\n\nDefina o número secreto de 1 a 50: ");
        scanf("%d", &numsec);

        if (numsec < 1 || numsec > 50) {
            printf("Valor inválido! O número secreto deve estar entre 1 e 50.\n");
        }}
         while (numsec < 1 || numsec > 50);
     if (numsec == 1) {
        numanterior = 1;}
        else if (numsec == 50) {
        numposterior = 1;}

    system("cls");

    do {
        do {
            printf("\n\nDigite seu palpite de 1 a 50: ");
            scanf("%d", &palpite);
            if (palpite < 1 || palpite > 50) {
                printf("Palpite inválido! Digite apenas números entre 1 e 50.\n");
            }}
            while (palpite < 1 || palpite > 50);

        if (palpite == numsec - 1) {
            numanterior = 1;}
            else if (palpite == numsec + 1) {
            numposterior = 1;}

        if (numanterior && numposterior) {
            penalizado = 1;
            break;}

        if (palpite < numsec) {
            printf("O número secreto é MAIOR.\n");
        } else if (palpite > numsec) {
            printf("O número secreto é MENOR.\n");}
    } while (palpite != numsec);

    if (penalizado) {
        printf("\nPENALIDADE! Que pena ocultador, os jogadores imprensaram seu número secreto que era = %d  beba uma dose.\n\n", numsec);}
        else {
        printf("\nQue AZAR! Você acertou o número secreto: %d  beba uma dose.\n", numsec);}

    return 0;
}
