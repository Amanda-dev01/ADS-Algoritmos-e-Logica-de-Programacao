#include <stdio.h>
#include <conio.h>
#define TF 4

void carregar_vetor(int vet[TF]){
	int i;
	for (i=0; i<TF; i++){
	printf("\nInforme Vet[%d]: ", i);
	scanf("%d", &vet[i]);
	}
} 

void inverter_posicoes(int vet_d[TF], int vet_e[TF]){
	int i, j;
	for (i=0, j=TF-1; i<TF; i++, j--){
	vet_e[j] = vet_d[i];
	}
}
void exibir_vetor (int vet[TF]){
	int i;
	for (i=0; i<TF; i++){
		printf("\nVetor[%d]: %d", i, vet[i]);
	}
}
void main(){
	int vet_d[TF], vet_e[TF];
	carregar_vetor(vet_d);
	inverter_posicoes(vet_d, vet_e);
	exibir_vetor(vet_e);
}

