#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	float n;
	printf("Informe um n�mero real qualquer: ");
	scanf("%f", &n);
	float third = n / 3;
	printf("A ter�a parte de %f �: %f.", n, third);
}
