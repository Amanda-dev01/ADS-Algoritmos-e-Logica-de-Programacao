#include <stdio.h>
#include <conio.h>

void somar_dois_numeros(){
	int num1, num2, soma;
	printf("Infome o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	soma = num1 + num2;
	printf("Resultado: %d", soma);
}

void main(){
	somar_dois_numeros();
}
