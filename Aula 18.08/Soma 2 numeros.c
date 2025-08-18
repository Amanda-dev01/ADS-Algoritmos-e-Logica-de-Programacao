#include <stdio.h>
#include <conio.h>

void somar_2_numeros(){
	int n1, n2, soma;
	printf("<<Soma com procedimento>>\n");
	printf("Informe n1: ");
	scanf("%d", &n1);
	printf("Informe n2: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	printf("Soma: %d", soma);
}

int f_somar_2_numeros(){
	int n1, n2, soma;
	printf("<<Soma com Funcao>>\n");
	printf("Informe n1: ");
	scanf("%d", &n1);
	printf("Informe n2: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	return soma;
}

void main(){
	int ret;
	somar_2_numeros();
	ret = f_somar_2_numeros();
	printf("Soma: %d", ret);
	
	//printf("Soma: %d", f_somar_2_numeros());
}
