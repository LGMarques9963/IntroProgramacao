#include <stdio.h>

#define COLUNAS_MATRIZ 3
#define LINHAS_MATRIZ 3

int main(){
    float matrizA[LINHAS_MATRIZ][COLUNAS_MATRIZ];
    float matrizB[LINHAS_MATRIZ][COLUNAS_MATRIZ];
    float matrizResultado[LINHAS_MATRIZ][COLUNAS_MATRIZ];
	int i,j;

    printf("Entre com os valores, linha a linha, da Matriz A\n");
    for(i=0;i<LINHAS_MATRIZ;i++){
        for(j=0;j<COLUNAS_MATRIZ;j++){
            scanf("%f", &matrizA[i][j]);
        }
    }

    printf("Entre com os valores, linha a linha, da Matriz B\n");
    for(i=0;i<LINHAS_MATRIZ;i++){
        for(j=0;j<COLUNAS_MATRIZ;j++){
            scanf("%f", &matrizB[i][j]);
        }
    }


    for(i=0;i<LINHAS_MATRIZ;i++){
        for(j=0;j<COLUNAS_MATRIZ;j++){
            matrizResultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nMATRIZ A:\n \n");
    for(i=0;i<LINHAS_MATRIZ;i++){
        printf("\t");
        for(j=0;j<COLUNAS_MATRIZ;j++){
            printf("%.2f \t", matrizA[i][j]);
        }
        printf("\n");
	}

    printf("\nMATRIZ B:\n \n");
    for(i=0;i<LINHAS_MATRIZ;i++){
        printf("\t");
        for(j=0;j<COLUNAS_MATRIZ;j++){
            printf("%.2f \t", matrizB[i][j]);
        }
        printf("\n");
	}

	printf("\nMATRIZ A + B:\n");
    for(i=0;i<LINHAS_MATRIZ;i++){
        printf("\t");
        for(j=0;j<COLUNAS_MATRIZ;j++){
            printf("%.2f \t", matrizResultado[i][j]);
        }
        printf("\n");
	}
	printf("\n");


    return 0;
}
