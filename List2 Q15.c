#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float temp[10];
    float soma=0, media, maior, menor;
    int i, acimamedia=0;

    for (i = 0; i < 10; i++) {
        printf("Digite a temperatura em °C %d: ", i + 1);
        scanf("%f", &temp[i]);

        soma += temp[i];

        if (i == 0) {
            maior = temp[i];
            menor = temp[i];
        } else {
            if (temp[i] > maior) {
                maior = temp[i];
            }
            if (temp[i] < menor) {
                menor = temp[i];}}}

    media=soma / 10;

    for (i = 0; i < 10; i++) {
        if (temp[i] > media) {
            acimamedia++;}}

    printf("\n|---Análise de Temperaturas---|\n");
    printf("\n\nMedia: %.2f\n", media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Acima da média: %d\n", acimamedia);

    return 0;
}
