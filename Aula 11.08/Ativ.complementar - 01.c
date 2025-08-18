#include <stdio.h>
#include <conio.h>

//1. Faça um procedimento que leia o raio de uma esfera e calcula o seu volume (v = 4/3.p .R3).

void volum_esfera(){
	float raio, volume;
	const float PI = 3.14159/
	
	printf("Digite o raio da esfera: ");
	scanf("%f", &raio);
	
	volume = (4.0/3.0) * PI * (raio * raio * raio);
	
	printf("O volume da esfera eh: %.2f\n", volume);
}

void main(){
	volum_esfera();
}
