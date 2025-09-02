//3.	POR VALOR - Fa�a um programa que:
//a.	leia os valores de A, B e C;
//b.	chamar um procedimento com passagem de par�metros para efetuar os c�lculos e exibir o resultado da adi��o;
//c.	chamar um procedimento com passagem de par�metros para efetuar os c�lculos e exibir o resultado da m�dia;
//d.	chamar um procedimento com passagem de par�metros para verificar e exibir o maior n�mero;
//e.	chamar um procedimento com passagem de par�metros para verificar e exibir o menor n�mero;

#include <stdio.h>
#include <conio.h>

void adicao(int a, int b, int c){
	int soma = a +b + c;
	printf("Adicao = %d\n", soma);
}

void media (int a, int b, int c){
	float media = (a + b + c ) / 3;
	printf("Media = %.2f\n", media);
}

void maior_numero (int a, int b, int c){
	int maior = a;
	if (b > maior) maior = b;
	if (c > maior) maior = c;
	printf("Maior numero %d\n", maior);
}

void menor_numero (int a, int b, int c){
	int menor = a;
	if (b < menor) menor = b;
	if (c < menor) menor = c;
	printf("Menor numero %d\n", menor);
}

int main(){
	int a, b, c;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	adicao(a, b, c);
	media(a, b, c);
	maior_numero(a, b, c);
	menor_numero(a, b, c);
	
	return 0;
}


