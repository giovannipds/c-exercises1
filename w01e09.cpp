#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	int celsius;
	printf("Qual � a temperatura em graus celsius (cent�grados)? ");
	scanf("%d", &celsius);
	int fahrenheit = (9 * celsius + 160) / 5;
	printf("Em Fahrenheit ent�o, a temperatura � %d.", fahrenheit);
}
