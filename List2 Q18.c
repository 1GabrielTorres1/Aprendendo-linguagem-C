#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float notas[5][3];
    float soma, media, maiornota;
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("\n|---Aluno %d---|\n", i + 1);
    for (j = 0; j < 3; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);

        if (i == 0 && j == 0) {
                maiornota = notas[i][j];
                }
        else if (notas[i][j] > maiornota) {
                maiornota = notas[i][j];}}}

    printf("\n|===Resultado da Turma===|\n");
    for (i = 0; i < 5; i++) {
        soma = 0.0f;
        for (j = 0; j < 3; j++) {
            soma += notas[i][j];}
        media = soma / 3;
        printf("\nAluno %d - Media: %.2f - Situação: %s\n",
               i + 1, media, (media >= 7) ? "Aprovado" : "Reprovado");}
    printf("\nMaior nota registrada na turma: %.2f\n", maiorn
           7ota);

    return 0;
}
