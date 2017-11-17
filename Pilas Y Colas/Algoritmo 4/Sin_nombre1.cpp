//ingresar valores a una cola y luego eliminar
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#define max 5

int idxc=0;
char cola[max][20];

int borrar(){   
	int n;
    if (idxc==0) printf("\n\tLa Cola esta vacia");
    else {
          char m[20]="hola";
           strcpy(m,cola[0]); //  elemento que sale
           for (n=0;n<idxc-1;n++) 
           strcpy(cola[n],cola[n+1]);
           idxc--;
           return m;
           }
}
void insertar(char d[20]){
	if(idxc==max){
		printf("\n\tLa cola esta llena");
		getche();
	}else{
		strcpy(cola[idxc],d);
		idxc++;
	}
}

int main()
{
	char opc='S';
	int x,k;
	char nom[20];
	do{
		system("cls");
		printf("\n\t1.Ingresar Nombre  2.Borrar Nombre  3.Ver cola\n\t");
		scanf("%d",&x);

		
		switch(x){
			case 1:
				system("cls");
				printf("\n\tIngrese un nombre:\t");
				scanf("%s",&nom);
				insertar(nom);
				break;
			case 2:
				system("cls");				
				printf("\n\tEl nombre [%s] se ha borrado",borrar());
				getche();
				break;
			case 3:
				system("cls");
				for(k=0;k<=idxc-1;k++){
					printf("\n\tNombre [%d]:\t[%s]",k+1,cola[k]);
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
/*
char* palabra(){
char p [5] = "hola";
return p; 
}
*/
