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

void media_3_notas(){
	int nota1, nota2, nota3, media;
	printf("<<Media 3 notas>>\n\n");
	printf("Informe a primeira nota: ");
	scanf("%d", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%d", &nota2);
	printf("Informe a terceira nota: ");
	scanf("%d", &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	printf("Media: %d", media);
}

void menu(){
	int op = 1;
	while(op != 5){
		system("cls");
		printf("\n<<Menu de Opções>>");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media 3 notas");		
		printf("\n3 - Maior Numero");
		printf("\n4 - Menor Numero");
		printf("\n5 - Sair");
		printf("\nInforme a opcao: ");
		scanf("%d", &op);
		
		switch (op){
			case 1:
				calcular_idade();
				break;
			case 2:
				media_3_notas();
				break;
			case 3:
				break;
			case 4:
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
