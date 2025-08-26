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
            printf("Par: True.\n", numero);
        } else {
            printf("Impar: False.\n", numero);
        }
    }
}

int main() {
    ParOuImpar();
}
