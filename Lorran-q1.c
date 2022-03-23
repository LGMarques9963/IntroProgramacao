/*
PROVA 1 - INF01040 - Questão 01
ALUNO: LORRAN GONÇALVES MARQUES
MATRICULA: 00304739
*/

#include <stdio.h>

#define COLUNAS_MATRIZ 3
#define LINHAS_MATRIZ 6

int main(){

    float matriz[LINHAS_MATRIZ][COLUNAS_MATRIZ];
	int i,j,aux;

    for(i=0;i<LINHAS_MATRIZ;i++){
        printf("Escreva as notas do Aluno %i\n", i);
        for(j=0;j<COLUNAS_MATRIZ;j++){
            do{
                printf("Nota da prova %i", j);
                scanf("%d", &matriz[i][j]);
                printf("\n")
            }while ( (matriz[i][j]<0) || (matriz[i][j]>10) );  //As notas devem ser entre 0 e 10
            
        }
    }
	

	
	printf("\nNro Aluno\t\tProva 0\t\tProva 1\t\tProva 2\n");

    for(i=0;i<LINHAS_MATRIZ;i++){
        printf("%i\t",i);
        aux = 10;
        for(j=0;j<COLUNAS_MATRIZ;j++){
            if(matriz[i][j]<aux) aux=j;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
	}
	
	printf("\nVALORES MAXIMOS DE CADA COLUNA\n");
	for(i=0;i<LINHAS_MATRIZ;i++){
		aux = 0;
		for(j=0;j<LINHAS_MATRIZ;j++){
			if(matriz[j][i]>aux) aux=matriz[j][i]; 
		}
		printf("[%i]: %i \t", i,aux);
	}
	printf("\n");


    return 0;
}
