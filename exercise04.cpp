#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	int n;
	printf("Informe um número inteiro qualquer: ");
	scanf("%d", &n);
	int by2 = n * 2, by3 = n * 3, by5 = n * 5;
	printf("O número %d multiplicado por 2 é %d;\nPor 3, é %d;\nE por 5, é %d.", n, by2, by3, by5);
}
