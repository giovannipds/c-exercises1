#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	int n;
	printf("Informe um n�mero inteiro qualquer: ");
	scanf("%d", &n);
	int by2 = n * 2, by3 = n * 3, by5 = n * 5;
	printf("O n�mero %d multiplicado por 2 � %d;\nPor 3, � %d;\nE por 5, � %d.", n, by2, by3, by5);
}
