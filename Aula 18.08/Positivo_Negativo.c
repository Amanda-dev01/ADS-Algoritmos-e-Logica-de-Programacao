#include <stdio.h>
#include <conio.h>

int par_impar(){
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	if (num % 2 == 0){
		return 1;
	}
	else{
		return 2;
	}
}

void main(){
	printf("Seu numero eh: %d (1-par; 2-impar)", par_impar());
}
