#include <stdio.h>

void verificaEstacao(int mes) {
    switch (mes) {
        case 12: // Dezembro
        case 1: // Janeiro
        case 2: // Fevereiro
            printf("Estação: Verão\n");
            break;
        case 3: // Março
        case 4: // Abril
        case 5: // Maio
            printf("Estação: Outono\n");
            break;
        case 6: // Junho
        case 7: // Julho
        case 8: // Agosto
       
            printf("Estação: Inverno\n");
            break;
        case 9: // Setembro
        case 10: // Outubro
        case 11: // Novembro
        
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
