#include <stdio.h> // Senha de acesso - Defina uma senha numérica no programa e continue solicitando a senha enquanto o usuário não informar o valor correto. Ao acertar, exiba uma mensagem de acesso permitido.
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int senhaDefinida;
    int tentativa;

    while (1) {
        printf("\n\nDefina a senha númerica de acesso: ");
        if (scanf("%d", &senhaDefinida) == 1) {
            break;}
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Entrada inválida! Digite apenas números.\n\n");}

    printf("\nSenha definida com sucesso!\n\n");

    do {printf("Digite a senha para acessar: ");
            if (scanf("%d", &tentativa) != 1){
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Entrada inválida! Digite apenas números.\n\n");
            tentativa = senhaDefinida - 1;
            continue;}
            if (tentativa != senhaDefinida) {
            printf("Senha incorreta! Tente novamente.\n\n");}}
            while (tentativa != senhaDefinida);
    printf("\nAcesso permitido!\n");

    return 0;
}
