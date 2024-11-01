#include <stdio.h>

int main(){
    int valores []= {13,8,23,95,47,14,10,45,165};
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    int soma = 0;

    for(int i = 0; i < tamanho; i++){
        soma += valores[i];
           
        }
    printf("A soma dos valores do array: %d\n", soma);
    return 0;
 
}