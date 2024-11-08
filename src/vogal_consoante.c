#include <stdio.h>
#include "../lib/consoante.h"
#include <ctype.h>


void verificar_vogal_consoante(char letra){
    letra = tolower(letra);
        if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' ||
        letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U') {
        printf("A letra '%c' é uma vogal.\n", letra);
        }
         else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        printf("A letra '%c' é uma consoante.\n", letra);
}
        else {
        printf("'%c' não é uma letra válida.\n", letra);
    }
}
int main(){
     char letra;

     printf("Digite uma letra: ");
     scanf(" %c", &letra);

     verificar_vogal_consoante(letra);

     return 0;
}