#include <stdio.h>

#define QTDE_ALUNOS 10

char lerSexo(){
    char sexo;
    do{
        printf("Entre com o sexo (M ou F)\n");
        scanf("%s", &sexo);
        if( (sexo != 'M' ) && ( sexo != 'F' ) ) printf("Valor invalido, entre com M ou F (maisculo)\n");
    }while( (sexo != 'M' ) && ( sexo != 'F' ) );

    return sexo;

}

int main(){
    char sexoMain;
    int qtdeFeminino = 0, qtdeMasculino = 0, i;
    /*
        Prof, por alguma razao a segunda variavel declarada, no caso agr a qtdeMasculino, nao era inicializada corretamente
        Isso fazia com que o resultado final fosse algo do tipo "Ha X mulheres e 419512 homens".

        Tentei declaracoes em linha separadas, e separar a declaracao da atribuicao. Ambos sem sucesso
        Por alguma razao, ao printar as "Condicoes de inicio" abaixo, ela eh inicializada corretamente e o programa funciona
    */

    printf("Condicoes de inicio: feminino %i, masculino %i\n", qtdeFeminino, qtdeMasculino);
    for (i=0;i<QTDE_ALUNOS;i++){
        sexoMain = lerSexo();

        if( sexoMain == 'F' ) {
            qtdeFeminino++;
        }else{
            qtdeMasculino++;
        }
    }

    printf("Ha %i homens e %i mulheres", qtdeMasculino, qtdeFeminino);
    return 0;
}
