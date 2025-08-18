//3. Faça um procedimento que leia um valor inteiro e positivo e exiba se este ele é par ou ímpar.

#include <stdio.h>
#include <conio.h>


void ParOuImpar() {
    int numero;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Valor invalido! Digite apenas numeros positivos.\n");
    } 
    else {
        if (numero % 2 == 0) {
            printf("O numero %d eh PAR.\n", numero);
        } else {
            printf("O numero %d eh IMPAR.\n", numero);
        }
    }
}

int main() {
    ParOuImpar();
}
