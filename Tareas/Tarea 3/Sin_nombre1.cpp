//Ingreso de nombre y codigo de un usuario
# define max 10
#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	char nombre[max][20];
	float cod[max];
	int busq;
	char opc='S';
	do{
		for(int i=0;i<max;i++){
			system("cls");
			do{
			printf("\n\nNombre[%d]:\t",i+1);
			gets(nombre[i]);
            }while(strcmp(nombre[i],"")==0);	     
            do{	
            printf("\n\nCodigo[%d]:\t",i+1); 	
			scanf("%f",&cod[i]);
            }while(cod[i]<1 || cod[i]>5000);
			getchar();
		}
		system("cls");
		for(int u=0;u<max;u++){
			printf("\n\nNombre[%d]:\t%-20s\tCodigo[%d]:\t[%.0f]",u+1,nombre[u],u+1,cod[u]);
		}
		getch();					
		do{
			system("cls");
			printf("\n\nCodigo a buscar:\t");
			scanf("%d",&busq);
			int k=0;
			while(k<max && cod[k]!=busq){
				k++;
			}
			if(k<max){
				printf("\n\nNombre[%d]:\t[%.020s]\t\tCodigo[%d]:\t[%.0f]",k+1,nombre[k],k+1,cod[k]);
			}else{
				printf("\n\n\t***El Numero No Se Ingreso***\n");
			}
			getch();
			do{
	            system("cls");
	            printf("\n\nBuscar de nuevo:\tS.Si\tN.No\n\t-->:\t");
	            opc=getche();
	        }while(opc!='S' && opc!='s' && opc!='N' && opc!='n');        
		}while(opc!='N' && opc!='n');
		do{
	        system("cls");
	        printf("\n\nIngresar nuevos datos:\tS.Si\tN.No\n\t-->:\t");
	        opc=getche();
	    }while(opc!='S' && opc!='s' && opc!='N' && opc!='n');
	    getchar();
	}while(opc!='N' && opc!='n');	
}
