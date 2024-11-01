#include <stdio.h>

int main (){
    int valores[]={13,8,23,95,47,14,10,45,165};
    int tamanho = sizeof(valores) / sizeof(valores[0]);
    int soma = 0;
    double media; // Representação de números pontos flutuante 

      for (int i = 0; i < tamanho; i++){
        soma += valores[i];
      }
       media = soma / (double)tamanho;
       printf("A média dos valores do array é: %2.f\n", media);
       return 0;
}