#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void area_perimetro_pentagono(){
    float lado;
    printf("Insira o valor do lado: ");
    scanf("%f",&lado);
    //perimetro
    float perimetro = 5 * lado;
    //apotema
    float apotema = (lado /(2 * tan(M_PI /5)));
    //area
    float area = (perimetro * apotema) / 2;
    printf("Per�metro do pentagono = %.2f\n",perimetro);
    printf("\�rea do pentagono = %.2f\n",area);
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
            printf("a area do triangulo � %.2f\n", a);

        break;
        case 2:
            p = perimetro_triangulo();
            printf("o perimetro do triangulo � %.2f\n", p);

        break;
    }
}

void circulo(){
    float r;
    int op;
    do{
        printf("Digite o raio do c�rculo:\n");
        scanf("%f", &r);
    }while (r <= 0);
    printf("Qual a medida que precisa:\n\n");
    do{
        do{
            printf("1 - �rea.\n2 - Per�metro.\n3 - Sa�r.\n");
            scanf("%d", &op);
            getchar();
        }while (op < 1 || op > 3);
        switch (op){
            case 1:
                printf("A �rea � de %.2f cm2.", M_PI*pow(r,2));
                printf("\nPrima qualquer tecla para continuar.");
                getchar();
                break;
            case 2:
                printf("O per�metro � de %.2f cm.", 2*M_PI*r);
                printf("\nPrima qualquer tecla para continuar.\n");
                getchar();
                break;
            case 3:
                break;
        }
    system("cls");
    }while (op != 3);
}

void AreaPerimetroDoRetangulo(){

float width, height, area, perimeter;

    printf("Indica a largura do retangulo:\n");
    scanf("%f", &width);
    printf("Indica a altura do retangulo:\n");
    scanf("%f", &height);

    area = width * height;
    perimeter = 2* width + 2* height;

    printf("A area do retangulo = %.2f\n", area);
    printf("O perimetro do retangulo = %.2f", perimeter);
}



int main()
{
    int choice;
    setlocale(LC_ALL,"Portuguese");
do{
    printf("\n--------------------Menu-----------------------\n");
    printf("Decida a figura geometrica: \n");
    printf("1-Triangulo\n");
    printf("2-Ret�ngulo\n");
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
            AreaPerimetroDoRetangulo();
            break;
        case 3:
            circulo();
            break;
        case 4:
            area_perimetro_pentagono();
            break;
        case 5:
            printf("Saindo do programa......");
            break;
        default:
            printf("Op��o invalida, tente novamente\n");
        break;
    }
}while(choice!=5);


    return 0;
}

