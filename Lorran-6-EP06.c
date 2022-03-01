#include <stdio.h>

int main(){
    int numDias, diaSemana;
    int contadorSemana,contadorDia;

    do{
        printf("Digite o numero de dias no mes: ");
        scanf("%d", &numDias);
        printf("\nDigite o dia da semana que o mes comeca: ");
        scanf("%d", &diaSemana);
        printf("\n");
    }while((numDias < 1 || numDias > 31) || (diaSemana < 1 || diaSemana > 7 ));

    printf("\n\t  Dia em que comeca: %d \t\t Numero de dias: %d", diaSemana, numDias);
    printf("\n\n");
    printf("\t D \t S \t T \t Q \t Q \t S \t S\n");

    //Para a primeira linha do calendário
    for(contadorSemana=1;contadorSemana<=7;contadorSemana++){
        if(contadorSemana<diaSemana){
            printf("\t");
        }else{
            printf("\t %d", (contadorSemana - (diaSemana - 1)));
        }
    }

    printf("\n");
    contadorDia = (contadorSemana - (diaSemana - 1));
    contadorSemana = 1;

    //Para as próximas linhas
    do{
        if(contadorSemana>7){
            printf("\n");
            contadorSemana = 1;
        }
        printf("\t %d", contadorDia);
        contadorDia++;
        contadorSemana++;
    }while(contadorDia<=numDias);

    printf("\n\n\n");

    return 0;
}
