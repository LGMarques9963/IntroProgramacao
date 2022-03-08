#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_FRASE 501

int main(){
    char frase[501];
    int indice = 0;
    int contador = 0;
    printf("Digite uma frase: \n");
    gets(frase);

    do {
        if(frase[indice] == ' '){
            contador += 1;
        }
        indice += 1;
    }while(frase[indice] != '\0');

    printf("O numero de espacos eh: %d", contador);
    return 0;
}