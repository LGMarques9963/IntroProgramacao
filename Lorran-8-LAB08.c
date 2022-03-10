#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define INTERVALO_SUPERIOR 256

int main(){
    char prefixo[8];
    int sufixo1, sufixo2;
    char endereco_ip[16];
    char sufixo[8];

    strcpy(endereco_ip,"");
    
    printf("Entre com o prefixo do endereco de IP: \n");
    gets(prefixo);

    srand(time(NULL));
    sufixo1 = rand() % INTERVALO_SUPERIOR;
    sufixo2 = rand() % INTERVALO_SUPERIOR;

    printf("%s %d %d", prefixo,sufixo1,sufixo2);
    sprintf(sufixo,".%d.%d",sufixo1,sufixo2);
    strcat(endereco_ip,prefixo);
    strcat(endereco_ip,sufixo);

    printf("\nO endereco IP gerado eh:\t %s", endereco_ip);



    return 0;
}