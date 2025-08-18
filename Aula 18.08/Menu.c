#include <stdio.h>
#include <conio.h>

void calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<Calcular a Idade>>\n\n");
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	printf("Idade: %d", idade);
}

void media_4_notas(){
	int nota1, nota2, nota3, nota4, media;
	system("cls");
	printf("<<Media 4 notas>>\n\n");
	printf("Informe a primeira nota: ");
	scanf("%d", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%d", &nota2);
	printf("Informe a terceira nota: ");
	scanf("%d", &nota3);
	printf("Informe a quarta nota: ");
	scanf("%d", &nota4);
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("Media: %d", media);
}

void multi_2_numeros(){
	int num1, num2, multi;
	system("cls");
	printf("<<Multiplicar 2 numeros>>\n\n");
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	multi = num1 * num2;
	printf("Multiplicacao: %d\n", multi);
}

void div_2_numeros(){
	int num1, num2, div;
	system("cls");
	printf("<<Divisao 2 numeros>>\n\n");
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	div = num1 / num2;
	printf("Divisao: %d\n", div);
}

void menu(){
	int op = 1;
	while(op != 5){
		system("cls");
		printf("\n<<Menu de Opcoes>>");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media 4 notas");		
		printf("\n3 - Multiplicar 2 Numeros");
		printf("\n4 - Dividir 2 Numeros");
		printf("\n5 - Sair\n");
		printf("\nInforme a opcao: ");
		scanf("%d", &op);
		
		switch (op){
			case 1:
				calcular_idade();
				break;
			case 2:
				media_4_notas();
				break;
			case 3:
				multi_2_numeros();
				break;
			case 4:
				div_2_numeros();
				break;
			case 5:
				printf("\nFim!!");
				break;
			defaut:
				printf("\nOpcao invalida!!!");
		}
		printf("\n\n");
		system("pause");
	}
}

void main(){
	menu();
}
