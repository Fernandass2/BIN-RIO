#include <stdio.h>

int main(){
    int n []= {3,8,7,11,54,77,13,16};
    int tamanho = sizeof(n) / sizeof(n[0]);

    printf("Número pares no array: \n");
    for(int i = 0; i <= tamanho; i++){
        if(n[i] % 2 == 0){
            printf("%d\n", n[i]);
        }
    }

return 0;
}
