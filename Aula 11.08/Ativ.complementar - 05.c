//5. Faça um procedimento que leia a idade de um nadador por e exiba a categoria desse nadador de acordo com a tabela abaixo:  
//Idade/Categoria
//5 a 7 anos/Infantil A
//8 a 10 anos/Infantil B
//11-13 anos/Juvenil A
//14-17 anos/Juvenil B
//Maiores de 18 anos (inclusive)/Adulto

#include <stdio.h>
#include <conio.h>

void CategoriaNadador(){
	int idade;
	
	printf("Digita a idade do nadador: ");
	scanf("%d", &idade);
	
	if (idade >= 5 && idade <= 7){
		printf("Categoria: Infantil A\n");
	}
	else if (idade >= 8 && idade <= 10){
		printf("Categoria: Infantil B\n");
	}
	else if (idade >= 11 && idade <= 13){
		printf("Categoria: Juvenil A\n");
	}
	else if (idade >= 14 && idade <= 17){
		printf("Categoria: Juvenil B\n");
	}
	else if (idade >= 18){
		printf("Categoria: Adulto\n");
	}
	else{
		printf("Idade invalida! Nao existe categoria para menos de 5 anos.\n");
	}
}

void main(){
	CategoriaNadador();
}
