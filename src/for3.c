#include <stdio.h>

int  main(){
    int ano;
    int contador = 0;
    printf ("Anos bissextos de 1930 a 2024\n");
    for(ano = 1930; ano <=2024; ano ++){
        if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("%d\n", ano);
        contador ++;

        }

    }
    printf("\n-----------------------\n");
    printf("Total de anos bissextos: %d\n", contador);
    return 0;
}