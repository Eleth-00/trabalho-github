#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    int choice;
    setlocale(LC_ALL,"Portuguese");
do{
    printf("--------------------Menu-----------------------\n");
    printf("Decida a figura geometrica: \n");
    printf("1-Triangulo\n");
    printf("2-Retângulo\n");
    printf("3-Circulo\n");
    printf("4-Pentagono\n");
    printf("5-Sair\n");
    printf("Sua escolha: ");
    scanf("%i",&choice);

    switch(choice){
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            printf("Saindo do programa......");
            break;
        default:
            printf("Opção invalida, tente novamente\n");
        break;
    }
}while(choice!=5);
    return 0;
}
