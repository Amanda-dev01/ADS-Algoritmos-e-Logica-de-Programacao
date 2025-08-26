#include<stdio.h>
#include<conio.h>

int media(int nota1, int nota2){
	return (nota1 + nota2) / 2;
}

void main(){
	int nota1, nota2;
	printf("Informe a nota 1: ");
	scanf("%d", &nota1);
	printf("Informe a nota 2: ");
	scanf("%d", &nota2);
	printf("Media: %d", media(nota1, nota2));
}
