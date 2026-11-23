#include <stdio.h> // Validação de entrada - Solicite ao usuário uma nota entre 0 e 10. Enquanto for informado um valor inválido, solicite novamente. O programa somente deve continuar quando uma nota válida for digitada.
#include <locale.h> // Tive que adicione o scanf especial e o getchar com ajuda do gege para evitar loop eterno com letras, porque não queria usar while.
#include <stdlib.h>

int main() {
    system ("color 74");
    setlocale (LC_ALL, "Portuguese");
    int nota;

    Relancar_nota:
    printf("\n\n\nDigite uma nota entre 0 e 10: ");
    if (scanf("%d", &nota) != 1) {
        scanf("%*[^\n]");
        getchar();
        nota = -1;}

    switch (nota) {
        case 0:
            printf("Nota 0 registrada.\n");
            break;
        case 1:
            printf("Nota 1 registrada.\n");
            break;
        case 2:
            printf("Nota 2 registrada.\n");
            break;
        case 3:
            printf("Nota 3 registrada.\n");
            break;
        case 4:
            printf("Nota 4 registrada.\n");
            break;
        case 5:
            printf("Nota 5 registrada.\n");
            break;
        case 6:
            printf("Nota 6 registrada.\n");
            break;
        case 7:
            printf("Nota 7 registrada.\n");
            break;
        case 8:
            printf("Nota 8 registrada.\n");
            break;
        case 9:
            printf("Nota 9 registrada.\n");
            break;
        case 10:
            printf("Nota 10 registrada.\n");
            break;
        default:
            printf("Valor inválido! Informe um número entre 0 e 10.\n\n");
            goto Relancar_nota;
    }

    printf("\nValidação concluída. O programa seguiu com a nota= %d. \n\n\n", nota);

    system("pause");

    return 0;
}
