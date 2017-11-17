#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
	char opc;
	system("cls");
	
	do{
	printf("\n\tMenu Principal\n\n");
	printf("\t1. Adicionar\n");
	printf("\t2. Eliminar\n");
	printf("\t3. Modificar\n");
	printf("\tS. Salir\n\n");
	printf("\n\tOpcion:\t");
	opc=getche();		
	if(opc=='1'||opc=='2'||opc=='3'||opc=='S')
	{
		printf("\n\n\n\n\tSu opcion es Correcta\n\n");
		getch();
	}
	else{
		printf("\n\n\n\n\tOpcion errada\n");
		do{
			printf("\n\tOpcion:\t");
			opc=getche();	
			if(opc=='1'||opc=='2'||opc=='3'||opc=='S'){
				printf("\n\n\n\n\tSu opcion es Correcta\n\n");
				getch();
			}
			else
			printf("\n\n\n\n\tOpcion errada\n");
		}while(opc!='1' && opc!='2' && opc!='3' && opc!='S');
		
	}
	
	system("cls");
	
	}while(/*opc!='1' && opc!='2' && opc!='3' && */opc!='S');
		
	
}
