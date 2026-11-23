#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float cpu,totalLeituras = 0,criticas = 0;
    while (1) {
        printf("\n\nDigite o uso da CPU (0 a 100, ou -1 para encerrar): ");
        scanf("%g", &cpu);
        if (cpu == -1) {
            break;}
        if (cpu < 0 || cpu > 100) {
            printf("Valor inválido! Informe um percentual entre 0 e 100.\n\n");
            continue;}
          totalLeituras++;

        if (cpu <= 69) {
            printf("Status: NORMAL\n\n");}
        else if (cpu <= 89) {
            printf("Status: ALERTA\n\n");}
        else {
            printf("Status: CRÍTICO\n\n");
          criticas++;}}

    printf("\n--- Resumo do Monitoramento ---\n");
    printf("Total de leituras válidas: %g\n", totalLeituras);
    printf("Leituras críticas: %g\n", criticas);

    return 0;
}
