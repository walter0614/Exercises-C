//ingresar valores a una cola y luego eliminar
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#define max 5

int cola[max],idxc=0;

int borrar(){   
	int m,n;
    if (idxc==0) printf("\n\tLa Cola esta vacia");
    else {
           m = cola[0]; //  elemento que sale
           for (n=0;n<idxc-1;n++) 
           cola[n]=cola[n+1];
           idxc--;
           return m;
           }
}
void insertar(int d){
	if(idxc==max){
		printf("\n\tLa cola esta llena");
		getche();
	}else{
		cola[idxc]=d;
		idxc++;
	}
}

int main()
{
	char opc='S';
	int x,cod,k;
	do{
		system("cls");
		printf("\n\t1.Ingresar Numero  2.Borrar Numero  3.Ver cola\n\t");
		scanf("%d",&x);
		
		switch(x){
			case 1:
				system("cls");
				printf("\n\tIngrese un numero:\t");
				scanf("%d",&cod);
				insertar(cod);
				break;
			case 2:
				system("cls");
				printf("\n\tEl numero [%d] se ha borrado",borrar());
				getche();
				break;
			case 3:
				system("cls");
				for(k=0;k<=idxc-1;k++){
					printf("\n\tNumero [%d]:\t[%d]",k+1,cola[k]);
				}	
				getche();
		}
		
		do{
			system("cls");
			printf("\n\tS.Ir al menu\tN.Salir\n\t");
			opc=getche();		
		}while(opc!='s' && opc!='S' && opc!='n' && opc!='N');
	}while(opc!='N' && opc!='n');
}

