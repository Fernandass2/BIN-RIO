#include <stdio.h>

int main (){
    char nome[20];
    printf("Digite seu nome e tecle enter\n");
    scanf("%[^\n]s", &nome);
    printf("Olá, %s. Seja bem-vindo ao sistema.\n", nome);

    return 0;
}