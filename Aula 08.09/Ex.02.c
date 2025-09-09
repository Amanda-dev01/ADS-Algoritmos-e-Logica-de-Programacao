#include <stdio.h>
#include <conio.h>
#define TF 5

void carregar_vetor(int vet[TF]){
	int i;
	for (i=0; i<TF; i++){
	printf("\nInforme Vet[%d]: ", i);
	//vet[i] = (i + 1) * 10;
	scanf("%d", &vet[i]);
	vet[i] = vet[i] % 2;
	}
}
void exibir_vetor (int vet[TF]){
	int i;
	for (i=0; i<TF; i++){
		printf("\nVetor[%d]: %d", i, vet[i]);
	}
}
void main(){
	int vet[TF];
	carregar_vetor(vet);
	exibir_vetor(vet);
}

