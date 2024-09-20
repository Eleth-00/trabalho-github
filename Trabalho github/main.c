#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
                printf("O peímetro é de %.2f cm.", 2*M_PI*r);
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
    circulo();


    return 0;
}
