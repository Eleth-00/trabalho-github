#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
            printf("a area do triangulo é %.2f", a);

        break;
        case 2:
            p = perimetro_triangulo();
            printf("o perimetro do triangulo é %.2f", p);

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



int main()
{
funcao_triangulo();
}
