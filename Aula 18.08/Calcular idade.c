#include <stdio.h>
#include <conio.h>

int calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<Calcular a Idade>>\n\n");
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	return idade;
}

void main(){
	int ret;
	ret = calcular_idade();
	printf("Idade: %d", ret);
}
