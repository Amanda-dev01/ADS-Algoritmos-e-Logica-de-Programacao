//4. Fa�a um procedimento que leia o tempo de dura��o de uma f�brica expressa em segundos e exiba esse tempo em horas, minutos e segundos.

#include <stdio.h>
#include <conio.h>

void ConverterTempo(){
	int segundos, horas, minutos, resto;
	
	printf("Digite o tempo de duracao em segundos: ");
	scanf("%d", &segundos);
	
	horas = segundos / 3600;
	resto = segundos % 3600;
	minutos = resto / 60;
	segundos = resto % 60;
	
	printf("Tempo convertido: %d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);
}

void main(){
	ConverterTempo();
}
