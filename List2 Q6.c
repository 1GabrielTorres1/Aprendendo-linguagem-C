#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int senhacorreta, senhadigitada,tentativas = 0;

    printf("Defina a senha númerica do sistema: ");
    scanf("%d", &senhacorreta);
    system("cls");
    senhadigitada = senhacorreta - 1;

    while (tentativas < 3 && senhadigitada != senhacorreta) {
        printf("Digite a senha (tentativa %d de 3): ", tentativas + 1);
        scanf("%d", &senhadigitada);
        tentativas++;

        if (senhadigitada != senhacorreta && tentativas < 3) {
            printf("Senha incorreta! Tente novamente.\n\n");}}

    if (senhadigitada == senhacorreta) {
        printf("\nAcesso autorizado\n");}
    else {
        printf("\nUsúario bloqueado\n");}

    return 0;
}
