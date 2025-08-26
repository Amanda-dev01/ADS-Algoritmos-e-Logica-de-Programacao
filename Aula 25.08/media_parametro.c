#include<stdio.h>
#include<conio.h>

void calculo_media(float n1, float n2, float *media){
	*media = (n1 + n2)/2;
}

void main(){
	float n1, n2, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	calculo_media(n1, n2, &media);
	printf("\nMedia: %.2f", media);
}
