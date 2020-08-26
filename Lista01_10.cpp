#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float saldoInicial,saldoAtual;
	    
    printf("Informe o saldo inicial: ");
    scanf("%f", &saldoInicial);
    
    saldoAtual = (saldoInicial*1.01);
    
	printf("O saldo atual é %7.2f\n", saldoAtual);

    return 0;
}
