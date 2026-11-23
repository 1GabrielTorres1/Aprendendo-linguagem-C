#include <stdio.h> // Terminal de atendimento (Adicionei o goto para retornar antes de fechar o programa.
#include <locale.h>
#include <stdlib.h>

int main() {
    inicio:
    int opcao;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    printf("=== Terminal de Atendimento ===\n");
    printf("1 - Suporte técnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Comercial\n");
    printf("4 - Cancelamento\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Atendimento encaminhado para o setor de suporte técnico.\n");
            break;
        case 2:
            printf("Atendimento encaminhado para o setor financeiro.\n");
            break;
        case 3:
            printf("Atendimento encaminhado para o setor comercial.\n");
            break;
        case 4:
            printf("Atendimento encaminhado para o setor de cancelamento.\n");
            break;
        default:
            printf("Opção inválida! Escolha um número entre 1 e 4.\n");
            goto inicio;
            break;
    }

    return 0;
}
