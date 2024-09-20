#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcao pentagono
float area_perimetro_pentagono(){
    float lado;
    printf("Insira o valor do lado: ");
    scanf("%f",&lado);
    //perimetro
    float perimetro = 5 * lado;
    //apotema
    float apotema = (lado /(2 * tan(M_PI /5)));
    //area
    float area = (perimetro * apotema) / 2;
    printf("Perímetro do pentagono = %.2f",perimetro);
    printf("\Área do pentagono = %.2f",area);
}


int main()
{
    area_perimetro_pentagono();
    return 0;
}
