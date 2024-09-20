#include <stdio.h>
#include <stdlib.h>


void AreaPerimetroDoRetangulo(){

float width, height, area, perimeter;

    printf("Indica a largura do retangulo:\n");
    scanf("%f", &width);
    printf("Indica a altura do retangulo:\n");
    scanf("%f", &height);

    area = width * height;
    perimeter = 2* width + 2* height;

    printf("A area do retangulo = %f\n", area);
    printf("O perimetro do ratangulo = %f", perimeter);
}



