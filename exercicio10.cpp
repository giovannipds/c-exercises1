#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	float oldBalance;
	printf("Bem-vindo Chico Bento.\nQual seu saldo anterior? ");
	scanf("%f", &oldBalance);
	const int readjustment = 1;
	float balance = oldBalance * (100 + readjustment) / 100;
	printf("De acordo com o reajuste de %d%%, seu saldo atual é %.2f.", readjustment, balance);
}
