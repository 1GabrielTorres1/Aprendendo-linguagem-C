#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

void exibirMapa(int sala[4][5]) {
    int i, j;
    printf("\n--- Mapa de Assentos (0 = Livre, 1 = Ocupado) ---\n");
    for (i = 0; i < 4; i++) {
        printf("Linha %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("[%d] ", sala[i][j]);}
        printf("\n");}}
int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int sala[4][5] = {0};
    int linha, coluna;
    char continuar;

    exibirMapa(sala);

    do {
        printf("\nDigite a linha (1 a 4): ");
        scanf("%d", &linha);
        printf("Digite o assento (1 a 5): ");
        scanf("%d", &coluna);

        if (linha < 1 || linha > 4 || coluna < 1 || coluna > 5) {
            printf("Posição inválida! Informe linha de 1 a 4 e assento de 1 a 5.\n");}
        else if (sala[linha - 1][coluna - 1] == 1) {
            printf("Assento já está ocupado! Escolha outro.\n");}
        else {
            sala[linha - 1][coluna - 1] = 1;
            printf("Reserva confirmada!\n");}
            exibirMapa(sala);

        printf("\nDeseja reservar outro assento? (S/N): ");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);}
        while (continuar == 'S');
        printf("\nEncerrando sistema de reservas...\n");

    return 0;
}
