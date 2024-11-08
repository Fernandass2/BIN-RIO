#include <stdio.h>
#include "../lib/numeromaior.h"

int maior_numero(int a, int b){
    return (a > b) ? a : b ;
}
int main (){

    int num1, num2;
    
    
    printf("Digite o primeiro número: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número: \n");
    scanf("%d", &num2);

    printf("O maior número é: %d\n", maior_numero(num1,num2));

    return 0; 
    }
