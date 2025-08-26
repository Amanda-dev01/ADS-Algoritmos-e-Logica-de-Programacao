#include<stdio.h>
#include<conio.h>

void calculo_area(int larg, int comp, int *area){
	*area = comp * larg;
}

void main(){
	int larg, comp, area;
	printf("Informe a Largura: ");
	scanf("%d", &larg);
	printf("Informe o Comprimento: ");
	scanf("%d", &comp);
	calculo_area(larg, comp, &area);
	printf("\nArea: %d", area);
}
