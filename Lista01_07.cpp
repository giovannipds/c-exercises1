#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float num;
    float razao;
	    
    printf("Informe o n�mero: ");
    scanf("%f", &num);
    
    razao = num/3;
    
	printf("A raz�o do n�mero %4.2f por 3 � %4.2f\n", num, razao);

    return 0;
}
