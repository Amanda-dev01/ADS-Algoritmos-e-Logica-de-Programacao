#include<stdio.h>
#include<conio.h>

void inverter_valores(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void main(){
	int a, b;
	printf("Inforeme o valor de A: ");
	scanf("%d", &a);
	printf("Informe o valor de B: ");
	scanf("%d", &b);
	inverter_valores(&a, &b);
	printf("\n\nValor de A: %d", a);
	printf("\n\nValor de B: %d", b);
}
