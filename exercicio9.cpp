#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(1252);
	int celsius;
	printf("Qual é a temperatura em graus celsius (centígrados)? ");
	scanf("%d", &celsius);
	int fahrenheit = (9 * celsius + 160) / 5;
	printf("Em Fahrenheit então, a temperatura é %d.", fahrenheit);
}
