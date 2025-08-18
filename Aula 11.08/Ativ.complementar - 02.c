//2. Escreva um procedimento que leia as 3 notas de um aluno e um número. 
//Se o número for 1 o procedimento calcula a média aritmética das notas do aluno, se for 2, a sua média ponderada (pesos: 5, 3 e 2) e se for 3, a sua soma. 
//Exibir a resultado calculado.

#include <stdio.h>
#include <conio.h>

void calculo_notas(){
	float n1, n2, n3, resultado;
	int opcao;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota do aluno: ");
	scanf("%f", &n3);
	
	printf("Digite a opcao desejada (1 - Media Aritmetica, 2 - Media Ponderada, 3 - Soma): ");
	scanf("%d", &opcao);
	
	if (opcao == 1){
		resultado = (n1 + n2 + n3) / 3.0;
		printf("Media Aritmetica = %.2f\n", resultado);
	}
	else if (opcao == 2){
		resultado = (n1*5 + n2*3 + n3*2) / (5+3+2);
		printf("Media Ponderada = %.2f\n", resultado);
	}
	else if (opcao == 3){
		resultado = n1 + n2 + n3;
		printf("Soma das notas: %.2f\n", resultado);
	}
	else{
		printf("Opcao invalida!\n");
	}
}

void main(){
	calculo_notas();
}
