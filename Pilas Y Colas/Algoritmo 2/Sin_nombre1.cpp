//Insertar numeros en pila
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#define max 5


int pila[max],indp=0;

void insertar (int d){
	if(indp==max){
		printf("\n\tLa pila esta llena");
		getche();
	}else{
		pila[indp]=d;
		indp++;		
	}
}
int borrar(){
	if(indp==0){
		printf("\n\tLa Pila esta vacia");
	}else{
		indp--;
		return pila[indp];
	}
}

int main()
{
	char opc='S';
	int cod,x,k;
	do{
		system("cls");
		printf("\n\t1.Ingresar Numero  2.Borrar Numero  0.Salir y listar datos\n\t-->\t");
		scanf("%d",&x);
		switch(x){
			case 1:
					system("cls");
					printf("\n\tIngrese un numero a la Pila\t");
					scanf("%d",&cod);
					insertar(cod);	
					break;
			case 2:
					printf("\n\tDato [%d] borrado",borrar());
					getche();
					break;
			default:
					printf("\n\tOpcion incorrecta");
					getche();
					break;
		}
		do{			
			system("cls");
			printf("\n\tS.Ir al menu\tN.Salir y listar datos");
			printf("\n\t-->\t");
			opc=getche();
		}while(opc!='s' && opc!='S' && opc!='n' && opc!='N');
	}while(opc!='N' && opc!='n');
	
	system("cls");
	printf("\n\tLos datos ingresados son:\n\n");
	for(k=0;k<=indp-1;k++){
		printf("\n\tNumero [%d]:\t[%d]",k+1,pila[k]);
	}
} 

