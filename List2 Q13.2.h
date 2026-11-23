#ifndef PAGAMENTO_H
#define PAGAMENTO_H

void exibirFormasPagamento();
float calcularDesconto(float valor, int forma);
float calcularTotal(float valor, float desconto);

#endif
