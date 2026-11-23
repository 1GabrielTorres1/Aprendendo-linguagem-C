#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    char opcao;
    do {
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &opcao);
        opcao = toupper(opcao);

        if (opcao != 'S' && opcao != 'N') {
            printf("Opção inválida! Digite apenas S ou N.\n\n");
        }
    } while (opcao != 'S' && opcao != 'N');

    printf("\n%s\n", (opcao == 'S') ? "Operação continuará." : "Operação encerrada.");

    return 0;
}
