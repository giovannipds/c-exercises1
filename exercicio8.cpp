#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	int a1, r, n;
	printf("Informe o termo inicial A1, raz�o R e um n�mero positivo N: ");
	scanf("%d%d%d", &a1, &r, &n);
	int pa = a1 + (n - 1) * r;
	printf("A PA de AN � %d", pa);
}
