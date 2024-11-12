#include <stdio.h>

int main (){
    FILE *arquivo;
    arquivo = fopen("files/texto.txt","a");

    //W --> escrever (write)
    //R --> ler (read)
    //a -->  adicionar (append)
    fprintf(arquivo, "Hoje é terça-feira, que Deus nos abençoe!");
    fclose(arquivo);


    printf ("Criamos um arquivo\n");
    return 0;
}