#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num1, num2, produto;
    
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Informe o segundo n�mero: ");
	scanf("%d", &num2);
	produto = num1*num2;
	printf("O produto dos dois n�meros � %d\n", produto);

    return 0;
}
