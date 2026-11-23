#include <stdio.h> //
#include <locale.h>
#include <stdlib.h>


int main() {
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    double gb, mb, kb;

    printf("Digite a quantidade de armazenamento em GB: ");
    scanf("%lf", &gb);

    mb = gb * 1024;
    kb = mb * 1024;

    printf("\n--- Conversão de Armazenamento ---\n");
    printf("\n%.2f GB equivalem a:\n", gb);
    printf("Megabytes (MB): %.2f MB\n", mb);
    printf("Kilobytes (KB): %.2f KB\n", kb);

    return 0;
}
