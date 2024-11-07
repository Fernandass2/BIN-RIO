#include <stdio.h>
#include "../lib/comparar.h"

float maior_numero_array(float numeros[], int tamanho){
    float maior = numeros[0];

    for(int i = 1; i < tamanho; i++){
        if (numeros[i] > maior){
            maior = numeros[i];
        }
    }
    return 0;
}
int main (){
    int n;
    printf("Quantos números você deseja comparar? \n");
    scanf("%d", &n);

    float numeros [n];

    for (int i = 0; i < n; i++){
        printf("Digite o %d número", i =+ 1);
        scanf("%f", &numeros[i]); 
    }

    float maior = maior_numero_array(numeros, n);
    printf("O maior número é: %.2f\n", maior);
    return 0;
    
}