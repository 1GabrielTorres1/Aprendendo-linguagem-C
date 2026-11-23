#include <locale.h> // Média da turma - Leia a quantidade de alunos de uma turma. Em seguida, leia a nota de cada aluno e apresente a média geral da turma.
#include <stdio.h>
#include <stdlib.h>

int main(){

    setlocale (LC_ALL, "Portuguese");
    system ("color 74");
    float alunos,notas,soma;
    printf("\n\nDigite a quantidades de alunos da turma:");
    scanf("%g",&alunos);

    for(float i=1;i<=alunos;i++)
    {printf("Digite as notas dos alunos da turma:",notas);
    scanf("%g",&notas);

    if(num>0){positivos++;}
    else if(num<0){negativos++;}
    else{zeros++;}
    }
    printf("\n\n\n");
    printf("\n\n\n");

    system("pause");
    return 0;
}
