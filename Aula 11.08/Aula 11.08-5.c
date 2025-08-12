#include <stdio.h>
#include <conio.h>

void multiplicar_quatro_numeros(){
	int num1, num2, num3, num4, multiplicar;
	printf("Infome o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &num3);
	printf("Informe o quarto numero: ");
	scanf("%d", &num4);
	multiplicar = num1 * num2 * num3 * num4;
	printf("Resultado: %d", multiplicar);
}

void main(){
	multiplicar_quatro_numeros();
}
