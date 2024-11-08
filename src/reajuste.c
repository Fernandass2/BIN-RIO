#include <stdio.h>
#include "../lib/reajuste.h"

void calcular_reajuste(float salario){
    float percentual_aumento, valor_aumento, novo_salario;

    if (salario <= 280.00){
        percentual_aumento = 20.0; // aumento de 20%

    } else if (salario <= 700.00){
        percentual_aumento = 15.0; // aumento de 15%
    } else if (salario <=1500.00){
        percentual_aumento = 10.0; // aumento de 10%
    } else {
        percentual_aumento = 5.0; // aumento de 5%
    }

    valor_aumento = (salario * percentual_aumento) / 100;

    novo_salario = salario + valor_aumento;

    printf("\n-- Informações sobre o reajuste --\n");
    printf("Salário antes do reajuste: R$ %.2f\n", salario);
    printf("Percentual de aumento aplicado: %.2f%%\n", percentual_aumento);
    printf("Valor do aumento R$ %2.f\n", valor_aumento);
    printf("Novo salário após o aumento: %.2f\n", novo_salario);

}

int main(){
    float salario;

    printf("Digite o salário do colaborador: R$");
    scanf("%f", &salario);

    calcular_reajuste(salario);

    return 0;
    }