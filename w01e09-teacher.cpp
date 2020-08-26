#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float tempCelsius,tempFahrenheit;
	    
    printf("Informe a temperatura em graus Celsius: ");
    scanf("%f", &tempCelsius);
    
    tempFahrenheit = (9*tempCelsius+160)/5;
    
	printf("%2.1f° Celsius equivalem a %2.1f° Fahrenheit\n", tempCelsius, tempFahrenheit);

    return 0;
}
