#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num, mult2, mult3, mult5;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);
    
    mult2 = num*2;
    mult3 = num*3;
    mult5 = num*5;

	printf("O produto de %d por 2 � %d\n", num, mult2);
	printf("O produto de %d por 3 � %d\n", num, mult3);
	printf("O produto de %d por 5 � %d\n", num, mult5);	

    return 0;
}
