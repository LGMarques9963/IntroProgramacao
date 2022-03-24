/*
PROVA 1 - INF01040 - Questão 01
ALUNO: LORRAN GONÇALVES MARQUES
MATRICULA: 00304739
*/

#include <stdio.h>

#define COLUNAS_MATRIZ 3
#define LINHAS_MATRIZ 6
#define NOTA_MAXIMA 10
#define NOTA_MINIMA 0
int main(){

    float matriz[LINHAS_MATRIZ][COLUNAS_MATRIZ];
	int i,j,menorNota,indiceMenorNota;

    for(i=0;i<LINHAS_MATRIZ;i++){
        printf("\nEscreva as notas do Aluno %i\n", i);
        for(j=0;j<COLUNAS_MATRIZ;j++){
            do{
                printf("Nota da prova %i: ", j);
                scanf("%f", &matriz[i][j]);
                //printf("\n");
            }while ( (matriz[i][j]<NOTA_MINIMA) || (matriz[i][j]>NOTA_MAXIMA) );  //As notas devem ser entre 0 e 10
            
        }
    }
	

	
	printf("\nNro Aluno\t\tProva 0\t\t\tProva 1\t\t\tProva 2\n");

    for(i=0;i<LINHAS_MATRIZ;i++){
        printf("\t%i\t\t",i);
        for(j=0;j<COLUNAS_MATRIZ;j++){
            printf("%f\t\t", matriz[i][j]);
        }
        printf("\n");
	}
	
	printf("\n");
	for(i=0;i<LINHAS_MATRIZ;i++){
		menorNota = NOTA_MAXIMA;
		for(j=0;j<COLUNAS_MATRIZ;j++){
			if(matriz[i][j]<menorNota) {
				menorNota=matriz[i][j];
				indiceMenorNota = j;	
			}
		}
		printf("Aluno [%i] menor nota na prova %i\t\n", i,indiceMenorNota);
	}
	printf("\n");


    return 0;
}
