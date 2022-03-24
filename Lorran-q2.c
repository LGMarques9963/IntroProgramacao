/*
PROVA 1 - INF01040 - Questão 02
ALUNO: LORRAN GONÇALVES MARQUES
MATRICULA: 00304739
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR_1 10
#define TAMANHO_VETOR_2 5
#define INTERVALO_SUPERIOR_1 1000
#define INTERVALO_INFERIOR_1 100
#define INTERVALO_SUPERIOR_2 10
#define INTERVALO_INFERIOR_2 1

int main(){

    int vetor_1[TAMANHO_VETOR_1], vetor_2[TAMANHO_VETOR_2];
	int i,j,cont, numAleatorio;
	
	srand(time(NULL));
	
    for(i=0;i<TAMANHO_VETOR_1;i++){
		/*
			Utilizei essa estrutura de repeticao pois mesmo utilizando o metodo demonstrado na aula
			em algumas execucoes eu obtia valores acima de 1000 para o vetor 1 e 0 para o vetor 2
			No caso do vetor 2 era mais criticio, pois ao receber 0 o programa parava de funcionar
			ja que nao eh possivel dividir por 0
		*/
		numAleatorio = 0;
		do{
			numAleatorio = (rand() % (INTERVALO_SUPERIOR_1 + INTERVALO_INFERIOR_1)); 	
		}while(numAleatorio<INTERVALO_INFERIOR_1 || numAleatorio>INTERVALO_SUPERIOR_1);
		vetor_1[i] = numAleatorio;
		
    }
    for(j=0;j<TAMANHO_VETOR_2;j++){
        numAleatorio = 0;
		do{
			numAleatorio = (rand() % (INTERVALO_SUPERIOR_2 + INTERVALO_INFERIOR_2)); 	
		}while(numAleatorio<INTERVALO_INFERIOR_2 || numAleatorio>INTERVALO_SUPERIOR_2);
		vetor_2[j] = numAleatorio;
    }

	printf("Vetor 1 [ ");
	for(i=0;i<TAMANHO_VETOR_1;i++){
        printf("%i\t", vetor_1[i]);
    }
    printf(" ]\n");
    printf("Vetor 2 [ ");
	for(i=0;i<TAMANHO_VETOR_2;i++){
        printf("%i\t", vetor_2[i]);
    }
    printf(" ]\n");

    for(i=0;i<TAMANHO_VETOR_1;i++){
        printf("\n\nNumero %i", vetor_1[i]);
        cont = 0;
        for(j=0;j<TAMANHO_VETOR_2;j++){
            if(vetor_1[i] % vetor_2[j] == 0){
                printf("\nDivisivel por %i na posicao %i", vetor_2[j], j);
                cont++;
            }else if( (j == TAMANHO_VETOR_2 - 1) && (cont==0)){
                printf("\nNao possui divisores no segundo vetor");
            }
        }
    }
	printf("\n");
    return 0;
}
