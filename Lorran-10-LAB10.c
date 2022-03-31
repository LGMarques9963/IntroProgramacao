#include <stdio.h>
#include <string.h>

#define QTDE_ALUNOS 10

char lerSexo(){
    char sexo;
    do{
        printf("Entre com o sexo (M ou F)\n");
        scanf("%s", &sexo);
        if( ( sexo != 'M' ) && ( sexo != 'F' ) ) printf("TRUE\n");
    }while( ( sexo != 'M' ) && ( sexo != 'F' ) );

    return sexo;

}

int main(){
    char sexoMain;
    int qtdeMasculino = 0;
    int qtdeFeminino = 0;
    int i;


    printf("feminino %i, masculino %i\n", qtdeFeminino, qtdeMasculino);

    for (i=0;i<QTDE_ALUNOS;i++){
        printf("feminino %i, masculino %i\n", qtdeFeminino, qtdeMasculino);
        sexoMain = lerSexo();
        printf("feminino %i, masculino %i\n", qtdeFeminino, qtdeMasculino);

        if( sexoMain == 'F' ) {
            printf("Eh feminino\n");
            printf("feminino antes %i\n", qtdeFeminino);
            qtdeFeminino++;
            printf("feminino dps %i\n", qtdeFeminino);
        }else{
            printf("Eh masculino\n");
            printf("masculino antes %i\n", qtdeMasculino);
            qtdeMasculino++;
            printf("masculino dps %i\n", qtdeMasculino);
        }
        printf("feminino %i masculino %i\n", qtdeFeminino, qtdeMasculino);

    }

    printf("Ha %i homens e %i mulheres", qtdeMasculino, qtdeFeminino);
    return 0;
}
