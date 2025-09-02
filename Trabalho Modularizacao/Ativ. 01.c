//1.	POR VALOR - Fa�a um programa que:
//a.	leia os valores de A, B;
//b.	se o n�mero A e B for pares, fazer o procedimento soma;
//c.	se o n�mero A e B forem impares, fazer a fun��o subtra��o;
//d.	se o n�mero A for PAR e B for IMPAR, fazer a m�dia de ambos os n�meros;
//e.	se o n�mero A for IMPAR e B for PAR, fazer uma fun��o para exibir o maior n�mero;


#include <stdio.h>
#include <conio.h>

void soma(int a, int b){
	int resultado = a + b;
	printf("Soma = %d\n", resultado);
}

int subtracao(int a, int b){
	return a - b;
}

int maior_numero(int a, int b){
	return (a > b) ? a : b;
}

int main(){
	int A, B;
	printf("Informe o valor de A: ");
	scanf("%d", &A);
	printf("Informe o valor de B: ");
	scanf("%d", &B);
	
	if(A %2 == 0 && B %2 == 0 ){
		soma (A, B);
	}
	else if (A % 2 !=0 && B %2 != 0){
		printf("Subtracao = %d\n", subtracao(A, B));
	}
	else if (A % 2==0 && B %2 != 0){
		float media = (A + B) / 2.0;
		printf("Media = %.2f\n", media);
	}
	else if (A % 2 != 0 && B % 2 == 0){
		printf("Maior numero = %d\n", maior_numero(A, B));
	}
	return 0;
}


