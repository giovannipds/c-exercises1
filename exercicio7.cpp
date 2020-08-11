#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	float n;
	printf("Informe um número real qualquer: ");
	scanf("%f", &n);
	float third = n / 3;
	printf("A terça parte de %f é: %f.", n, third);
}
