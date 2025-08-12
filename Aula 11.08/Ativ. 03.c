#include <stdio.h>
#include <conio.h>

void ler_nome_completo(){
	char nome[100], sobrenome[100];
	printf("Informe o primeiro nome: ");
	scanf("%s", nome);
	printf("Informe seu sobrenome: ");
	scanf("%s", sobrenome);
	printf("Nome completo: %s %s", nome, sobrenome);
}

void main(){
	ler_nome_completo();
}
