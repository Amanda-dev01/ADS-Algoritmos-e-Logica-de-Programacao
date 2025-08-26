#include<stdio.h>
#include<conio.h>

int area(int larg, int comp){
	return comp * larg;
}

void main(){
	int larg, comp;
	printf("Informe a Largura: ");
	scanf("%d", &larg);
	printf("Informe o Comprimento: ");
	scanf("%d", &comp);
	printf("Area: %d", area(larg, comp));
}
