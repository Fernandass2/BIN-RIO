#include <stdio.h>

void verificaEstacao(int mes) {
    switch (mes) {
        case 1: // Janeiro
        case 2: // Fevereiro
        case 3: // Março
            printf("Estação: Verão\n");
            break;
        case 4: // Abril
        case 5: // Maio
        case 6: // Junho
            printf("Estação: Outono\n");
            break;
        case 7: // Julho
        case 8: // Agosto
        case 9: // Setembro
            printf("Estação: Inverno\n");
            break;
        case 10: // Outubro
        case 11: // Novembro
        case 12: // Dezembro
            printf("Estação: Primavera\n");
            break;
        default:
            printf("Número inválido! Digite um número de 1 a 12.\n");
            break;
    }
}

int main() {
    int mes;

    printf("Digite o número correspondente ao mês (1-12): ");
    scanf("%d", &mes);

    verificaEstacao(mes);

    return 0;
}
