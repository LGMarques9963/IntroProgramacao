#include <stdio.h>

#define Numero 8
int numeroInserido;
int main(){
    do{
        printf("Entre com um n�mero de 1 a 10\n");
        scanf("%d", &numeroInserido);

        // Se a diferen�a for maior que 3 ent�o o numeroInserido � muito maior que o Numero, se for menor que 3, ent�o ele � um pouco maior
        if (numeroInserido > Numero && numeroInserido - Numero > 3) printf("O N�mero � menor que o inserido\n");
        if (numeroInserido < Numero && numeroInserido - Numero < -3) printf("O N�mero � maior que o inserido\n");
        if (numeroInserido > Numero && numeroInserido - Numero <= 3) printf("Quase acertou, o N�mero � um pouco menor que o inserido\n");
        if (numeroInserido < Numero && numeroInserido - Numero >= -3) printf("Quase acertou, o N�mero � um pouco maior que o inserido\n");

    }while(numeroInserido != Numero);
    printf("Parab�ns, voc� acertou o n�mero!!\n");

    return 0;
}
