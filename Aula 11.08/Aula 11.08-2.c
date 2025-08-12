#include <stdio.h>
#include <conio.h>

void ler_nome(){
	char nome[100];
	printf("Informe o primeiro nome: ");
	scanf("%s", nome);
	printf("Nome: %s", nome);
}

void main(){
	ler_nome();
}
