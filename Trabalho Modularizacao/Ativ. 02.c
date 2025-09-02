//2.	POR VALOR - Faça um programa que simule um calculador de 4 operações. Seu programa devera:
//a.	ler dois números e o operador;
//b.	chamar procedimentos/função com passagem de parâmetros para efetuar os cálculos;
//c.	escrever o resultado ao final.


#include <stdio.h>
#include <conio.h>

int soma(int n1,int n2){
	return n1 + n2;
}

int subtracao(int n1, int n2){
	return n1 - n2;
}

int mult(int n1, int n2){
	return n1 * n2;
}

int div(int n1, int n2){
	return n1 / n2;
}

int main(){
	int n1, n2;
	char operacao;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	printf("Informe a operacao (+, -, *, /): ");
	scanf(" %c", &operacao);
	
	switch (operacao){
		case '+':
			printf("Resultado: %d\n", soma(n1, n2));
			break;
		case '-':
			printf("Resultado %d\n", subtracao(n1, n2));
			break;
		case '*':
			printf("Resultado %d\n", mult(n1, n2));
			break;
		case '/':
			printf("Resultado %d\n", div(n1, n2));
			break;
	}
	return 0;
}
