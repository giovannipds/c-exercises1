#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	int n;
	printf("Informe um número inteiro qualquer: ");
	scanf("%d", &n);
	int prevN = n - 1, nextN = n + 1; // ++n ou --n?
	printf("O antecessor de %d é %d e o sucessor é %d.", n, prevN, nextN);
}
