#include <stdio.h>
#include "../lib/calculos.h"

/*O comando ../ faz saída de pasta atualizada(src) e lib é a pasta onde o arquivo de cabeçalho calculos.h*/

int main (){
    int valores[] = {5,23,5,7,10,4,12,30};
    printf("O resultado da soma é: %d\n",somaArray(valores,8));
    printf("O resultado da media é: %d\n", mediaArray(valores,8));
    printf("O maior valor é: %d\n", maiorValor(valores,8));
    return 0;
}