#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num, antecessor, sucessor;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);
    antecessor = num-1;
    sucessor = num+1;

	printf("O antecessor de %d � %d\n", num, antecessor);
	printf("O sucessor de %d � %d\n", num, sucessor);

    return 0;
}
