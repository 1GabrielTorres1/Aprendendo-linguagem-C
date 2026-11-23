#include <locale.h> // Dia da semana - Leia um número de 1 a 7 e utilize switch para mostrar o dia da semana correspondente. Caso o valor esteja fora desse intervalo, informe que a opção é inválida.
#include <stdio.h>  //
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    int dia;
    printf("Escolhe um número de 1 a 7 para saber os dias da semana:    ");
    scanf("%i",&dia);

    switch(dia){

    case 1: printf("\n\nDomingo\n\n");
    break;
    case 2:printf("\n\nSegunda-feira\n\n");
    break;
    case 3:printf("\n\nTerça-feira\n\n");
    break;
    case 4:printf("\n\nQuarta-feira\n\n");
    break;
    case 5:printf("\n\nQuinta-feira\n\n");
    break;
    case 6:printf("\n\nSexta-feita\n\n");
    break;
    case 7:printf("\n\nSábado, se até Deus descansou imagine eu.\n\n");
    break;
    default:printf("\n\nERRO: VOCÊ LEU NO COMEÇO QUE É SÓ DE 1 A 7, QUER GRAÇA É?\n\n");
    break;
    }
    return 0;
}
