#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	float n1, n2, n3;
	char v;
	do {
		printf("Informe tr�s n�meros reais n�o negativos: ");
		scanf("%f%f%f", &n1, &n2, &n3);
		v = n1 < 0 || n2 < 0 || n3 < 0;
		if (v)
			printf("Algum dos n�meros � negativo, tente de novo.\n");
	}
	while (v);
	float average = (n1 + n2 + n3) / 3;
	printf("A m�dia aritm�tica de %f, %f e %f �: %f.", n1, n2, n3, average);
}
