#include<stdio.h>
#include<conio.h>

void calculo_idade(int aa, int an, int *idade){
	*idade = aa - an;
}

void main(){
	int an, aa, idade;
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	calculo_idade(aa, an, &idade);
	printf("\nIdade: %d", idade);
}
