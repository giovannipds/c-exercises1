#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float num1, num2, num3;
    float media;
    
    printf("Informe o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Informe o segundo n�mero: ");
    scanf("%f", &num2);
    printf("Informe o terceiro n�mero: ");
    scanf("%f", &num3);
    
    media = (num1+num2+num3)/3;
    
	printf("A m�dia dos tr�s n�meros � %4.2f\n", media);

    return 0;
}
