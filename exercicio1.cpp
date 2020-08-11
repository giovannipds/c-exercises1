#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	int n1, n2;
	printf("Informe o primeiro número: ");
	scanf("%d", &n1);
	printf("Informe o segundo número: ");
	scanf("%d", &n2);
	int sum = n1 + n2;
	printf("A soma dos números %d e %d é %d.", n1, n2, sum);
}
