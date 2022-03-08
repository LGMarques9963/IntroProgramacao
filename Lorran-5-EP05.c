#include <stdio.h>

#define Numero 8
int numeroInserido;
int main(){
    do{
        printf("Entre com um número de 1 a 10\n");
        scanf("%d", &numeroInserido);

        // Se a diferença for maior que 3 então o numeroInserido é muito maior que o Numero, se for menor que 3, então ele é um pouco maior
        if (numeroInserido > Numero && numeroInserido - Numero > 3) printf("O Número é menor que o inserido\n");
        if (numeroInserido < Numero && numeroInserido - Numero < -3) printf("O Número é maior que o inserido\n");
        if (numeroInserido > Numero && numeroInserido - Numero <= 3) printf("Quase acertou, o Número é um pouco menor que o inserido\n");
        if (numeroInserido < Numero && numeroInserido - Numero >= -3) printf("Quase acertou, o Número é um pouco maior que o inserido\n");

    }while(numeroInserido != Numero);
    printf("Parabéns, você acertou o número!!\n");

    return 0;
}
