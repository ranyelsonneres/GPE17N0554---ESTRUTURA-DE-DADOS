#include <stdio.h>
#include "conta_bancaria.h"

int main(){

    ContaBancaria conta;

    iniciarConta(&conta, 12345, 1000.00);
    imprimirSaldo(&conta);

    depositar(&conta, 500.00);
    imprimirSaldo(&conta);

    sacar(&conta, 300.00);
    imprimirSaldo(&conta);

    sacar(&conta, 2000.00);
    imprimirSaldo(&conta);
    
    return 0;
}
