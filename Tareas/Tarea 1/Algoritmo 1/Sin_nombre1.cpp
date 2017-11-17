//Este Algoritmo responde si un año es bisiesto o no
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
	int ano;
	char opc='S';
	
	while(opc=='S'){
		system("cls");
		printf("\nPor favor ingrese el ANIO que desea verificar:\t");
		scanf("%d", &ano);
		if(ano%4==0 || (ano%400==0 || ano%100!=0)){
			printf("\n\n\tEl ANIO es BISIESTO\n");
		}
		else
			printf("\n\n\tEl ANIO NO es BISIESTO\n");
				
		do{
			printf("\n\nDesea verificar otro ANIO:\tS. Si\tN. No");
			printf("\n-->\t");
			opc=getche();
		}while(opc!='S' && opc!='N');
		/*printf("\n\nDesea verificar otro ANIO:\tS. Si\tN. No");
		printf("\n-->\t");
		opc=getche();
		if(opc!='S' && opc!='N'){
			printf("\n\nIngresaste un valor INCORRECTO");
			while(opc!='S' && opc!='N'){
				printf("\n\nDesea continuar:\tS. Si\tN. No");
				printf("\n-->\t");
				opc=getche();
			}
			printf("\n\nIngresaste un valor CORRECTO");
			getch();
		}*/
	}
	
}

