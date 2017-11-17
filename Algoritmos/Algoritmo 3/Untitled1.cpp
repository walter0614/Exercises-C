#include <conio.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	/*char nombre[40];
	system("cls");
	printf("\n\n\tIngrese un Nombre:\t");
	scanf("%40s",nombre);
	printf("\n\n\tEl Nombre es:\t\t%s",nombre);
	getch();*/
	
	char nombre[40],nombre1[40],nombre2[40];
	system("cls");
	printf("\n\n\tIngrese un Nombre:\t");
	gets(nombre);
	printf("\n\n\tIngrese un Nombre:\t");
	gets(nombre1);
	printf("\n\n\tIngrese un Nombre:\t");
	gets(nombre2);
	printf("\n\n\tEl Primer Nombre es:\t%s \ty la Tercera letra es:\t%c",nombre,nombre[2]);
	printf("\n\n\tEl Segundo Nombre es:\t%s \ty la Tercera letra es:\t%c",nombre1,nombre1[2]);
	printf("\n\n\tEl Tercer Nombre es:\t%s \ty la Tercera letra es:\t%c",nombre2,nombre2[2]);
	getch();
	

}
