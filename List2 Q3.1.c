#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int quantidade;

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &quantidade);

    printf("%s\n", (quantidade > 0) ? "\n\nTemos estoque disponível.\n\n" : "\n\nO Estoque está esgotado.\n\n");

    return 0;
}
