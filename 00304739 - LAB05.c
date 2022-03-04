#include <stdio.h>

int soma = 0;
int numeroInserido;

int main(){

    do{
        printf("Entre com um número inteiro:");
        scanf("%d", &numeroInserido);
        if (numeroInserido % 2 == 0) soma += numeroInserido;
    }while (numeroInserido != 0);

    printf("A soma dos numeros inseridos e: %d", soma);
    return 0;
}
