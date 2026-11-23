#include <locale.h> // Calculadora simples - Leia dois números e uma operação (+, -, * ou /) e apresente o resultado.Trate adequadamente a tentativa de divisão por zero.
#include <stdio.h>  // Tá questão 10 e 11 fiz juntas, já tinha utilizado o switch na questão 10 em vez de if e else, então fundo logo as duas.
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    char operacao;
    float num1,num2,numfinal;
    system ("color 74");
    printf("\n\n\nAdicione sua operação completa(somente +,-,* ou /.\n\n\n");
    scanf("%g",&num1);
    scanf("%c",&operacao);
    scanf("%g",&num2);
    switch(operacao){
    case'+':
        numfinal=num1+num2; printf("\n\nValor final é:%g+%g=%g\n\n\n",num1,num2,numfinal);
    break;
    case'-':
        numfinal=num1-num2; printf("\n\nValor final é:%g-%g=%g\n\n\n",num1,num2,numfinal);
    break;
    case'*':
        numfinal=num1*num2; printf("\n\nValor final é:%g*%g=%g\n\n\n",num1,num2,numfinal);
    break;
    case'/':
        if (num2==0){printf("\n\nERRO:Divisão com zero não é permitida(Ai quer resenhar né).\n\n\n\n");}
        else {numfinal=num1/num2; printf("\n\nValor final é:%g/%g=%g\n\n\n\n",num1,num2,numfinal);}
    break;
    default:printf("Operação inválida. Usar apenas as operações +,-,*,/.\n\n\n\n");
    break;
    system("pause");
    return 0;}
    }
