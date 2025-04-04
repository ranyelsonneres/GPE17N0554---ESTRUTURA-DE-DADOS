#include <stdio.h>
#include "conta_bancaria.h"

void iniciarConta(ContaBancaria *conta, int numero, float saldoInicial){
    conta->numero = numero;
    conta->saldo = saldoInicial;
}

void depositar(ContaBancaria *conta, float valor)
{
    if(valor >0){
        conta->saldo += valor;
        printf("Deposito realizado com sucesso!\n");
    } else {
        printf("Valor invalido\n");
    }
}

int sacar(ContaBancaria *conta, float valor)
{
    if(valor >0 && conta->saldo>=valor){
        conta->saldo -= valor;
        printf("Saque realizado!\n");
        return 1;
    } else {
        printf("Saldo insuficiente!\n");
        return 0;
    }
    
}

void imprimirSaldo(const ContaBancaria *conta)
{
    printf("Conta %d - Saldo: R$ %.2f\n", conta->numero, conta->saldo);
}
