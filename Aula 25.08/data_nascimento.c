#include<stdio.h>
#include<conio.h>

int data_nascimento (int an, int aa){
	return aa - an;
}

void main(){
	int an, aa;
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	printf("Idade: %d", data_nascimento(an, aa));
}
