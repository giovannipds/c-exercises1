#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float num1, num2;
    float media;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &num1);
    printf("Informe o segundo número: ");
    scanf("%f", &num2);
    
    media = (num1+num2)/2;
    
	printf("A média dos dois números é %4.2f\n", media);

    return 0;
}
