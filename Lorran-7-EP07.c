// #include <stdio.h>

#define TamanhoVetor 5
int main(){
    int matriculas[TamanhoVetor], contador;
    float nota01[TamanhoVetor], nota02[TamanhoVetor], medias[TamanhoVetor], mediaTurma;
    mediaTurma = 0;
    contador = 0;
    for(int i=0;i<TamanhoVetor;i++){
        medias[i] = 0;
        printf("Digite a matricula do %d aluno: ", (i+1));
        scanf("%d", &matriculas[i]);
        printf("\nDigite a primeira nota do aluno %04d: ", matriculas[i]);
        scanf("%f", &nota01[i]);
        printf("\nDigite a segunda nota do aluno %04d: ", matriculas[i]);
        scanf("%f", &nota02[i]);
        printf("\n");

        medias[i] = (nota01[i] + nota02[i])/2;
        mediaTurma += medias[i];
    }

    mediaTurma = mediaTurma/TamanhoVetor;

    printf("No. Matricula \t\t\tNota 01 \tNota 02 \tNotaFinal\n");

    for(int j=0;j<TamanhoVetor;j++){
        if(medias[j]<mediaTurma) contador += 1;
        printf("%04d \t\t\t\t%.2f \t\t%.2f \t\t%.2f\n", matriculas[j], nota01[j], nota02[j], medias[j]);

    }

    printf("\nMedia da turma: %.2f", mediaTurma);
    printf("\nAlunos com nota inferior a media: %d", contador);

    return 0;
}
