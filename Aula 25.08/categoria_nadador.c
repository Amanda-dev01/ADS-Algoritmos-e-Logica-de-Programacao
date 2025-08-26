#include<stdio.h>
#include<conio.h>


void main(){
	int idade;
	printf("Digita a idade do nadador: ");
	scanf("%d", &idade);
	
	if (idade >= 5 && idade <= 7){
		printf("Categoria: 1\n");
	}
	else if (idade >= 8 && idade <= 10){
		printf("Categoria: 2\n");
	}
	else if (idade >= 11 && idade <= 13){
		printf("Categoria: 3\n");
	}
	else if (idade >= 14 && idade <= 17){
		printf("Categoria: 4\n");
	}
	else if (idade >= 18){
		printf("5\n");
	}
	else{
		printf("Idade invalida! Nao existe categoria para menos de 5 anos.\n");
	}
}
