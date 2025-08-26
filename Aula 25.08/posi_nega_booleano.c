#include <stdio.h>
#include <conio.h>

void posi_nega(){
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if (num == 0){
		printf("False");
	}
	else
		if (num >= 1){
			printf("Positivo: True");
		}
		else{
			printf("Negativo: True");
		}
}

int main(){
	posi_nega();
}
