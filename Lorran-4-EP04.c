#include <stdio.h>

#define PrecoA 12.0
#define PrecoB 15.50
#define PrecoC 21.30
#define LimiteA 50
#define LimiteB 30
#define LimiteC 20

int main(){
    double total;
    int qtdeOvo;
    char tipoOvo;
    int valido = 0;


    printf("Entre com o tipo de ovo (A, B ou C): ");
    scanf("%c", &tipoOvo);


    //Permito também entrar com o tipo de ovo em minúsuclo (case insentive)
    switch(tipoOvo){

        case 'A':
            printf("Entre com a quantidade: ");
            scanf("%d", &qtdeOvo);
            printf("Qtde ovo %d\n", qtdeOvo);

            if (qtdeOvo > LimiteA) {
                printf("Nao poderemos atender o total do pedido, forneceremos apenas o limite maximo para o ovo %c de %d ovos\n", tipoOvo, LimiteA);
                qtdeOvo = LimiteA;
            }

            total = PrecoA * qtdeOvo;
            printf("Foram comprados %d ovos do tipo A \nO total a ser pago e de: %.2f R$\n", qtdeOvo,total);
            valido = 1;
            break;

        case 'B':
            printf("Entre com a quantidade: ");
            scanf("%d", &qtdeOvo);
            printf("%d\n", qtdeOvo);
            if (qtdeOvo > LimiteB) {
                printf("Nao poderemos atender o total do pedido, forneceremos apenas o limite maximo para o ovo %c de %d ovos\n", tipoOvo, LimiteB);
                qtdeOvo = LimiteB;
            }
            total = PrecoB * qtdeOvo;
            printf("Foram comprados %d ovos do tipo B \nO total a ser pago e de: %.2f R$\n", qtdeOvo,total);
            valido = 1;
            break;

        case 'C':
            printf("Entre com a quantidade: ");
            scanf("%d", &qtdeOvo);
            printf("%d\n", qtdeOvo);
            if (qtdeOvo > LimiteC) {
                printf("Nao poderemos atender o total do pedido, forneceremos apenas o limite maximo para o ovo %c de %d ovos\n", tipoOvo, LimiteC);
                qtdeOvo = LimiteC;
            }
            total = PrecoC * qtdeOvo;
            printf("Foram comprados %d ovos do tipo C \nO total a ser pago e de: %.2f R$\n", qtdeOvo,total);
            valido = 1;
            break;

        case 'a':
            printf("Entre com a quantidade: ");
            scanf("%d", &qtdeOvo);
            printf("%d\n", qtdeOvo);
            if (qtdeOvo > LimiteA) {
                printf("Nao poderemos atender o total do pedido, forneceremos apenas o limite maximo para o ovo %c de %d ovos\n", tipoOvo, LimiteA);
                qtdeOvo = LimiteA;
            }
            total = PrecoA * qtdeOvo;
            printf("Foram comprados %d ovos do tipo A \nO total a ser pago e de: %.2f R$\n", qtdeOvo,total);
            valido = 1;
            break;

        case 'b':
            printf("Entre com a quantidade: ");
            scanf("%d", &qtdeOvo);
            printf("%d\n", qtdeOvo);
            if (qtdeOvo > LimiteB) {
                printf("Nao poderemos atender o total do pedido, forneceremos apenas o limite maximo para o ovo %c de %d ovos\n", tipoOvo, LimiteB);
                qtdeOvo = LimiteB;
            }
            total = PrecoB * qtdeOvo;
            printf("Foram comprados %d ovos do tipo B \nO total a ser pago e de: %.2f R$\n", qtdeOvo,total);
            valido = 1;
            break;

        case 'c':
            printf("Entre com a quantidade: ");
            scanf("%d", &qtdeOvo);
            printf("%d\n", qtdeOvo);
            if (qtdeOvo > LimiteC) {
                printf("Nao poderemos atender o total do pedido, forneceremos apenas o limite maximo para o ovo %c de %d ovos\n", tipoOvo, LimiteC);
                qtdeOvo = LimiteC;
            }
            total = PrecoC * qtdeOvo;
            printf("Foram comprados %d ovos do tipo C \nO total a ser pago e de: %.2f R$\n", qtdeOvo,total);
            valido = 1;
            break;

        default:
            printf("Tipo invalido!\n");
    }

    return 0;
}
