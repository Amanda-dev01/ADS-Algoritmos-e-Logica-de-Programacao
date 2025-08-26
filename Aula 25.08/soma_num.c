#include<stdio.h>
#include<conio.h>

void soma_num(int n1, int n2){
	int soma;
	printf("\nN1 antes somar_num: %d", n1);
	n1 = 50;
	soma = n1 + n2;
	printf("\nSoma: %d", soma);
	printf("\nN1 depois somar_num: %d", n1);
}

void main (){
	int n1 = 10, n2 = 20;
	printf("N1 no main: %d", n1);
	soma_num(n1, n2);
	printf("\nN1 antes main: %d", n1);
}
