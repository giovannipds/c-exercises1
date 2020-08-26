#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float num;
    float razao;
	    
    printf("Informe o número: ");
    scanf("%f", &num);
    
    razao = num/3;
    
	printf("A razão do número %4.2f por 3 é %4.2f\n", num, razao);

    return 0;
}
