#include <stdio.h>
#include <conio.h>

int multiplicar_4_numeros(){
	int n1, n2, n3, n4, mult;
	printf("<<Multiplicacao com Funcao>>\n");
	printf("Informe n1: ");
	scanf("%d", &n1);
	printf("Informe n2: ");
	scanf("%d", &n2);
	printf("Informe n3: ");
	scanf("%d", &n3);
	printf("Informe n4: ");
	scanf("%d", &n4);
	mult = n1 * n2 * n3 * n4;
	return mult;
}

void main(){
	int ret;
	ret = multiplicar_4_numeros();
	printf("Resultado: %d", ret);
}
