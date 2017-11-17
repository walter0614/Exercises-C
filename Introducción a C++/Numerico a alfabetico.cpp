#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int main ()
{
    int a;

    printf("Por favor digite la calificacion del 0 a 10:\t");
    scanf("%d",&a);

    if(a<6)
    {
        printf("\n\n R=Reprobado (1-5)\t A=Aceptable (6-7)\t E=Excelente (8-10) \n");
        printf("\n\nSu calificacion es: Reprobado");
    }

    if(a>=6 && a<8 )
    {
        printf("\n\n R=Reprobado (1-5)\t A=Aceptable (6-7)\t E=Excelente (8-10) \n");
        printf("\n\nSu calificacion es: Aceptable");
    }

    if(a>=8 && a<=10)
    {
        printf("\n\n R=Reprobado (1-5)\t A=Aceptable (6-7)\t E=Excelente (8-10) \n");
        printf("\n\nSu calificacion es: Excelente\n");

    }
    if(a>10)
        printf("\n\nPor favor digite un valor menor a 10");


    getch();
    return 0;
}
