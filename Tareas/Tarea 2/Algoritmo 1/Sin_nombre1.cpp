//Este programa responde si un numero es primo o no
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int num,i,cont;
	char opc='S';
	
	do{
		system("cls");
		printf("\n\n\n\t***Numero Primo***");
		printf("\n\n\nIngrese un numero:\t\t");
		scanf("%d",&num);
		cont=0;
		for(i=1;i<=num;i++){
			if(num%i==0){
				cont++;
			}
		}
		if(cont==2){
			printf("\n\nEl Numero es primo");
		}
		else{
			printf("\n\nEl Numero No es primo");
		}
		
		printf("\n\n\nIngrese S/s. Para Continuar\t\tN/n.Para Salir:\n");
		printf("\n-->:\t\t");
		opc=getche();
		while(opc!='S' && opc!='s' && opc!='N' && opc!='n'){
			system("cls");
			printf("\n\n\n\t\t***Opcion Incorrecta***");
			printf("\n\n\nIngrese S/s. Para Continuar\t\tN/n.Para Salir:\n");
			printf("\n-->:\t\t");
			opc=getche();
		}		
	}while(opc=='S' || opc=='s');
}
