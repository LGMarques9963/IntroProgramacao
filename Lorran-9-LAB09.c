#include <stdio.h>

#define COLUNAS_MATRIZ 3
#define LINHAS_MATRIZ 3

int main(){
    int matriz[LINHAS_MATRIZ][COLUNAS_MATRIZ];
	int i,j,aux;
    for(i=0;i<LINHAS_MATRIZ;i++){
        for(j=0;j<COLUNAS_MATRIZ;j++){
            do{
                scanf("%i", &matriz[i][j]);
            }while ( (matriz[i][j]>30) || (matriz[i][j]<1) );
            
        }
    }
	
	
	printf("\nMATRIZ ORIGINAL\n");
    for(i=0;i<LINHAS_MATRIZ;i++){
        for(j=0;j<COLUNAS_MATRIZ;j++){
            printf("%i \t", matriz[i][j]);
        }
        printf("\n");
	}
	
	printf("\nVALORES MAXIMOS DE CADA COLUNA\n");
	for(i=0;i<COLUNAS_MATRIZ;i++){
		aux = 0;
		for(j=0;j<LINHAS_MATRIZ;j++){
			if(matriz[j][i]>aux) aux=matriz[j][i]; 
		}
		printf("[%i]: %i \t", i,aux);
	}
	printf("\n");


    return 0;
}
