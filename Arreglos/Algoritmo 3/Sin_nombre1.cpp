#define max 10
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	char nombre[max][30];
	int k;
        
    for(k=0;k<max;k++){
        system("cls");
        printf("\n\nNombre:\t%d",k+1);
        printf("\t");
        gets(nombre[k]);
    }
    system("cls");
    printf("\n\nDatos leidos:\n");
    for(k=0;k<max;k++){
        printf("\n\nNombre:\t[%d]\t[%-30s]",k+1,nombre[k]);  
    }
    getche();
}
