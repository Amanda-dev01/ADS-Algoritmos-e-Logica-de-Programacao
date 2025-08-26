#include<stdio.h>
#include<conio.h>

int somar_numeros(int a, int b){
	return a + b;
}

void main(){
	int a, b;
	printf("Infome o valor de A: ");
	scanf("%d", &a);
	printf("Informe o valor de B: ");
	scanf("%d", &b);
	printf("\nSoma: %d", somar_numeros (a, b));
}
