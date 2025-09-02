//4.	POR VALOR - Uma empresa deseja especificar um programa para gerar sua folha de pagamentos. Seu programa deve:

//a.	Fazer uma função que leia e retorne o salário_bruto;
//b.	Fazer uma função que leia e retorne o total de horas extras;
//c.	Fazer uma função que leia e retorne os descontos;
//d.	Fazer uma função que receba o total de horas extras e retorne os valores correspondes a essas horas sabendo que cada hora extra custa R$ 20,00;
//e.	Fazer uma função que calcule e retorne o salário bruto total passando por parâmetro as informações necessárias para isso;
//f.	Fazer um procedimento que calcule e exiba o salário líquido do funcionário passando por parâmetros as informações necessárias.

//Esta empresa possui 5 funcionários, e todos precisaram ter seus salários calculados.

#include <stdio.h>
#include <conio.h>

float ler_salario_bruto() {
    float salario;
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario);
    return salario;
}


int ler_horas_extras() {
    int horas;
    printf("Digite o total de horas extras: ");
    scanf("%d", &horas);
    return horas;
}


float ler_descontos() {
    float desconto;
    printf("Digite o valor dos descontos: R$ ");
    scanf("%f", &desconto);
    return desconto;
}


float calcular_valor_horas_extras(int horas) {
    return horas * 20.0;
}


float calcular_salario_bruto_total(float salario_bruto, float valor_horas_extras) {
    return salario_bruto + valor_horas_extras;
}


void calcular_salario_liquido(float salario_bruto_total, float descontos) {
    float liquido = salario_bruto_total - descontos;
    printf("Salario Liquido: R$ %.2f\n", liquido);
}

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        printf("\nFuncionario %d\n", i);

        float salario_bruto = ler_salario_bruto();
        int horas_extras = ler_horas_extras();
        float descontos = ler_descontos();

        float valor_horas_extras = calcular_valor_horas_extras(horas_extras);
        float salario_bruto_total = calcular_salario_bruto_total(salario_bruto, valor_horas_extras);

        printf("Salario Bruto: R$ %.2f\n", salario_bruto);
        printf("Horas Extras (%d h): R$ %.2f\n", horas_extras, valor_horas_extras);
        printf("Descontos: R$ %.2f\n", descontos);
        printf("Salario Bruto Total: R$ %.2f\n", salario_bruto_total);

        calcular_salario_liquido(salario_bruto_total, descontos);
    }

    return 0;
}
