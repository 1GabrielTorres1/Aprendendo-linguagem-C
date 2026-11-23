#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int codigos[10];
    int busca, i;
    int indiceencontrado = -1;

    for (i = 0; i < 10; i++) {
        printf("Digite o codigo %d: ", i + 1);
        scanf("%d", &codigos[i]);}

    printf("\nDigite o codigo que deseja buscar: ");
    scanf("%d", &busca);

    for (i = 0; i < 10; i++) {
        if (codigos[i] == busca) {
            indiceencontrado = i;
            break;}}

    if (indiceencontrado != -1) {
        printf("\nCodigo %d encontrado no indice %d.\n", busca, indiceencontrado);}
    else {
        printf("\nCodigo %d nao encontrado.\n", busca);}

    return 0;
}
