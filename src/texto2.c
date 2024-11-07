#include <stdio.h>

int main (){
    char nome[20];
    printf("Digite seu nome e tecle enter\n");
    /*Foi necessário utilizar o colchetes para que o comando scanf
    receba toda a cadeia de caracteres o elemento ^ (circunflexo) foi usado para indicar
    onde começa o primeiro caracter. E comando \n, neste caso, esta sendo usando para ler
    o espaço aplicado. Ao final é utilizado o caracter s(string)*/ 
   
    scanf("%[^\n]s", &nome);
    printf("Olá, %s. Seja bem-vindo ao sistema.\n", nome);

    return 0;
}