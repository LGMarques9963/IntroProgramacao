#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define INTERVALO_SUPERIOR 256

int main(){
    char prefixo[8];
    int sufixo1, sufixo2;

    printf("Entre com o prefixo do endereco de IP: \n");
    gets(prefixo);

    srand(time(NULL));
    sufixo1 = rand() % INTERVALO_SUPERIOR;
    sufixo2 = rand() % INTERVALO_SUPERIOR;





    return 0;
}