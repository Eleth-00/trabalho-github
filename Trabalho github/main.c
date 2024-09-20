#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


// Function prototypes
float area_triangulo();
float perimetro_triangulo();
void funcao_triangulo();


void funcao_triangulo(){
    int op;
    float a;
    float p;

    do{
        printf("1-Area\n2-Perimetro\n");
        scanf("%d",&op);
    }while (op<1 || op>2);

    switch(op){
        case 1: //area
            a = area_triangulo();
            printf("a area do triangulo é %.2f\n", a);

        break;
        case 2:
            p = perimetro_triangulo();
            printf("o perimetro do triangulo é %.2f\n", p);

        break;
    }
}


float area_triangulo(){
    float b, h;
    printf("base do triangulo: ");
    scanf("%f",&b);
    printf("altura do triangulo: ");
    scanf("%f",&h);

    return(b*h/2);
}

float perimetro_triangulo (){
    float a, b, c;
    printf("tamanho do lado a: ");
    scanf("%f",&a);
    printf("tamanho do lado b: ");
    scanf("%f",&b);
    printf("tamanho do lado c: ");
    scanf("%f",&c);

    return(a+b+c);
}


void circulo(){
    float r;
    int op;
    do{
        printf("Digite o raio do círculo:\n");
        scanf("%f", &r);
    }while (r <= 0);
    printf("Qual a medida que precisa:\n\n");
    do{
        do{
            printf("1 - Área.\n2 - Perímetro.\n3 - Saír.\n");
            scanf("%d", &op);
            getchar();
        }while (op < 1 || op > 3);
        switch (op){
            case 1:
                printf("A área é de %.2f cm2.", M_PI*pow(r,2));
                printf("\nPrima qualquer tecla para continuar.");
                getchar();
                break;
            case 2:
                printf("O perímetro é de %.2f cm.", 2*M_PI*r);
                printf("\nPrima qualquer tecla para continuar.");
                getchar();
                break;
            case 3:
                break;
        }
    system("cls");
    }while (op != 3);
}


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
            funcao_triangulo();
            break;
        case 2:

            break;
        case 3:
            circulo();
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
