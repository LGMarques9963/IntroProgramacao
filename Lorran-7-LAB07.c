#include <stdio.h>

#define tamanhoVetor 20

int main(){
    
    int numeros[tamanhoVetor], indice, numRepetido, contador, i;
    indice=0;
    contador = 0;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[indice]);
        printf("\n");
        indice++;
    }while(indice<tamanhoVetor);

    printf("\nDigite o numero que deseja verificar: ");
    scanf("%d", &numRepetido);

    for(i=0;i<tamanhoVetor;i++){
        if(numRepetido == numeros[i]) {
                contador += 1;
        }
    }

    printf("\nO numero %d se repete %d vezes", numRepetido, contador);
    return 0;
}
