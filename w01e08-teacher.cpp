#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int a1, razao, n, an;
	    
    printf("Informe o termo inicial: ");
    scanf("%d", &a1);
    printf("Informe a raz�o: ");
    scanf("%d", &razao);
    printf("Informe a quantidade de termos: ");
    scanf("%d", &n);
    
    an = a1+(n-1)*razao;
    
	printf("O %d� termo da PA � %d\n", n, an);

    return 0;
}
