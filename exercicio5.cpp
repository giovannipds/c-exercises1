#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	float n1, n2;
	do {
		printf("Informe um número real não negativo: ");
		scanf("%f", &n1);
		if (n1 < 0)
			printf("Este é negativo, por favor insira um maior que 0.\n");
	}
	while (n1 < 0);
	do {
		printf("Informe mais um número real não negativo: ");
		scanf("%f", &n2);
		if (n2 < 0)
			printf("Este é negativo, por favor insira um maior que 0.\n");
	}
	while (n2 < 0);
	float average = (n1 + n2) / 2;
	printf("A média aritmética de %f e %f é: %f.", n1, n2, average);
}
