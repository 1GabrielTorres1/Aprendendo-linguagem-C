#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define SETORES 3
#define VAGAS 5

void exibirVagas(int est[SETORES][VAGAS]) {
    int i, j;
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    printf("\n--- Mapa do Estacionamento (L = Livre, O = Ocupada) ---\n");
    for (i = 0; i < SETORES; i++) {
        printf("Setor %d: ", i + 1);
        for (j = 0; j < VAGAS; j++) {
            printf("[%c] ", (est[i][j] == 0) ? 'L' : 'O');}
        printf("\n");}}
void ocuparVaga(int est[SETORES][VAGAS]) {
    int setor, vaga;
    printf("Informe o setor (1 a %d): ", SETORES);
    scanf("%d", &setor);
    printf("Informe a vaga (1 a %d): ", VAGAS);
    scanf("%d", &vaga);

    if (setor < 1 || setor > SETORES || vaga < 1 || vaga > VAGAS) {
        printf("Erro: setor ou vaga inválidos!\n");}
    else if (est[setor - 1][vaga - 1] == 1) {
        printf("Operação negada: a vaga já está ocupada.\n");}
    else {est[setor - 1][vaga - 1] = 1;
        printf("Vaga ocupada com sucesso!\n");}}

void liberarVaga(int est[SETORES][VAGAS]) {
    int setor, vaga;
    printf("Informe o setor (1 a %d): ", SETORES);
    scanf("%d", &setor);
    printf("Informe a vaga (1 a %d): ", VAGAS);
    scanf("%d", &vaga);

    if (setor < 1 || setor > SETORES || vaga < 1 || vaga > VAGAS) {
        printf("Erro: setor ou vaga inválidos!\n");
    } else if (est[setor - 1][vaga - 1] == 0) {
        printf("Operação negada: a vaga já esta livre.\n");
    } else {est[setor - 1][vaga - 1] = 0;
        printf("Vaga liberada com sucesso!\n");}}

int contarVagasLivres(int est[SETORES][VAGAS]) {
    int i, j, livres = 0;
    for (i = 0; i < SETORES; i++) {
        for (j = 0; j < VAGAS; j++) {
            if (est[i][j] == 0) {
                livres++;}}}
    return livres;
}
int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int estacionamento[SETORES][VAGAS] = {0};
    int opcao, livres;
    do {
        printf("\n=== Painel de Estacionamento ===\n");
        printf("1 - Exibir vagas\n");
        printf("2 - Ocupar vaga\n");
        printf("3 - Liberar vaga\n");
        printf("4 - Contar vagas livres\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                exibirVagas(estacionamento);
                break;
            case 2:
                ocuparVaga(estacionamento);
                break;
            case 3:
                liberarVaga(estacionamento);
                break;
            case 4:
                livres = contarVagasLivres(estacionamento);
                printf("\nVagas livres: %d de %d\n", livres, SETORES * VAGAS);
                break;
            case 0:
                printf("Encerrando o painel...\n");
                break;
            default:
                printf("Opção inválida! Escolha um número entre 0 e 4.\n");
                break;}}
            while (opcao != 0);

    return 0;
}
