//6. Faça um procedimento que leia um valor inteiro e exiba se o valor é positivo ou negativo.

#include <stdio.h>
#include <conio.h>

void posi_nega(){
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if (num == 0){
		printf("Neutro");
	}
	else
		if (num >= 1){
			printf("Positivo");
		}
		else{
			printf("Negativo");
		}
}

void main(){
	posi_nega();
}
