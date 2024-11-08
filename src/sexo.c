#include <stdio.h>
#include "../lib/sexo.h"

void verificar_sexo (char sexo){
    switch(sexo){   // Switch para tornar a comparação mais clara e direta.
        
        case 'F':
        printf("Feminino\n");
        break;

        case'M':
        printf("Masculino\n");
        break;

    }
}

int main(){
    char sexo;
  // Vai solicitar a letra para identificar o sexo correto.

  printf("Digite o genero pra, Masculino ou Feminino:");
  scanf(" %c", &sexo); // O espaço antes é para limpar. O buffer o %c serve para ler ou imprimir um único caracter. Quando usamos o %c ele vai fazer a leitura e esperar o usuário colocar o caracter para escrever se é certo ou inválido.
  printf("Caso for digitado errado, é invalido: \n");  
  
  //Verificação do sexo

  verificar_sexo(sexo);
  return 0;
}