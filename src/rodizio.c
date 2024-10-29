#include <stdio.h>

int main (){
    int placa;
    printf("Digite o número final da placa do seu veículo e tecle Enter\n");
    scanf("%d", &placa);

    if(placa == 1|| placa == 2) {
        printf ("Este veículo não pode circular na Segunda-Feira\n");
    }

    else if(placa == 3 || placa == 4) {
        printf("Este veículo não pode circular na Terça-Feira\n");
    }

    else if(placa == 5 || placa == 6) {
        printf("Este veículo não pode circular na Quarta-Feira\n");
    }
    else if(placa == 7 || placa == 8) {
        printf("Este veículo não pode circular na Quinta-Feira\n");
    }
    else if(placa == 9|| placa == 0) {
        printf("Este veículo não pode circular na Sexta-Feira\n");
    }
    else{
        printf("Número da placa inválido\n");
    }
    printf("\n");
    return 0;
}