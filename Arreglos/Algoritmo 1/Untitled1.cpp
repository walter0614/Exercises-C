#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    short int i;
    float nota[9],prom,my,mn;
    
    for(i=0;i<=9;i++){
        system("cls");
        printf("\n\nIngrese la nota\t[%d]\t\t",i+1);
        scanf("%f",&nota[i]);
    }
    system("cls");
    printf("\n\nLas notas que ingreso son:\t\t");
    for(i=0;i<=9;i++){
        printf("\n\n[%d]:%f",i+1,nota[i]);
    }
    getche();
    system("cls");
    prom=0;
    my=nota[0];
    mn=nota[0];
    for(i=0;i<=9;i++){
        prom=prom+nota[i];
        if(nota[i]>my){
            my=nota[i];
        }
        if(nota[i]<mn){
            mn=nota[i];
        }
    }
    prom=prom/10;
    printf("\n\nEl promedio es:\t\t\t%f",prom);
    printf("\n\nLa nota mayor es:\t\t%f",my);
    printf("\n\nLa nota menor es:\t\t%f",mn);
    getche();
}
