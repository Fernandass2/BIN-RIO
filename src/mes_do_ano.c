#include <stdio.h>

int ehBissexto(int ano) {
    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                return 1; // É bissexto
            } else {
                return 0; // Não é bissexto
            }
        }
        return 1; // É bissexto
    }
    return 0; // Não é bissexto
}

int main() {
    int ano;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    if (ehBissexto(ano)) {
        printf("%d É um ano bissexto.\n", ano);
    } else {
        printf("%d Não é um ano bissexto.\n", ano);
    }
    
    return 0;
}
