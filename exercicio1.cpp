#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	int n1, n2;
	printf("Informe o primeiro n�mero: ");
	scanf("%d", &n1);
	printf("Informe o segundo n�mero: ");
	scanf("%d", &n2);
	int sum = n1 + n2;
	printf("A soma dos n�meros %d e %d � %d.", n1, n2, sum);
}
