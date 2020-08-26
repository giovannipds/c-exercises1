#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num1, num2, soma;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
	scanf("%d", &num2);
	soma = num1+num2;
	printf("A soma dos dois números é %d\n", soma);

    return 0;
}
