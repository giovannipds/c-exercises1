#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	float n1, n2;
	do {
		printf("Informe um n�mero real n�o negativo: ");
		scanf("%f", &n1);
		if (n1 < 0)
			printf("Este � negativo, por favor insira um maior que 0.\n");
	}
	while (n1 < 0);
	do {
		printf("Informe mais um n�mero real n�o negativo: ");
		scanf("%f", &n2);
		if (n2 < 0)
			printf("Este � negativo, por favor insira um maior que 0.\n");
	}
	while (n2 < 0);
	float average = (n1 + n2) / 2;
	printf("A m�dia aritm�tica de %f e %f �: %f.", n1, n2, average);
}
