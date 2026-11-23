#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int quantidade;

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &quantidade);

    if (quantidade > 0) {
        printf("\n\nTemos estoque disponível.\n");}
    else {
        printf("\n\n O Estoque está esgotado.\n");}

    return 0;
}
