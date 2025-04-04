
#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

typedef struct
{
    int numero;
    float saldo;
} ContaBancaria;

void iniciarConta(ContaBancaria *conta, int numero, float saldoInicial);
void depositar(ContaBancaria *conta, float valor);
int sacar(ContaBancaria *conta, float valor);
void imprimirSaldo(const ContaBancaria *conta);

#endif