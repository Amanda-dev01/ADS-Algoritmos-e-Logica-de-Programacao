#include <stdio.h>
#include <conio.h>

void conta_tres_numeros(){
	float num1, num2, num3, conta;
	printf("Infome o primeiro numero: ");
	scanf("%f", &num1);
	printf("Informe o segundo numero: ");
	scanf("%f", &num2);
	printf("Informe o terceiro numero: ");
	scanf("%f", &num3);
	conta = (num2 - num1) / num3;
	printf("Resultado: %0.2f", conta);
}

void main(){
	conta_tres_numeros();
}
