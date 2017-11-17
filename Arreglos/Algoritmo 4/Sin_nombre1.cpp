#define max 10
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	float cod[max];
	char nom[max][30];
	char ape[max][30];
	char busq[30];
	int opc,opc1;
	int k=-1,c=1;
	
	for(int i=0;i<max;i++){
		system("cls");
		printf("\n\tIngrese el nombre[%d]:\t",i+1);
		gets(nom[i]);
		printf("\n\tIngrese el apellido[%d]:\t",i+1);
		gets(ape[i]);
		printf("\n\tIngrese el codigo[%d]:\t",i+1);
		scanf("%f",&cod[i]);
		getchar();
	}
	for(int u=0;u<max;u++){
		printf("\n\tNombre[%d]:\t[%s]",u+1,nom[u]);
		printf("\n\tApellido[%d]:\t[%s]",u+1,ape[u]);
		printf("\n\tCodigo[%d]:\t[%.0f]",u+1,cod[u]);
	}
	getch();
	do{
	system("cls");
	printf("\n\tSeleccione como buscar:\n");
	printf("\n\t1.Nombre\t2.Apellido\t3.Codigo\n\t-->");
	scanf("%d",&opc1);
	switch(opc1){
		case 1:
			getchar();
			printf("\n\tIngrese el nombre:\t");
			gets(busq);
			k=-1,c=1;			
			while(c!=0 && k<max){
				k++;
				c=strcmp(busq,nom[k]);
			}
			if(k<max){
				printf("\n\tNombre[%d]:\t[%s]",k+1,nom[k]);
				printf("\n\tApellido[%d]:\t[%s]",k+1,ape[k]);
				printf("\n\tCodigo[%d]:\t[%.0f]",k+1,cod[k]);
			}
			else{
				printf("\n\t***El usuario no esta registrado");
			}
			getch();
			break;								
		case 2:
			getchar();
			printf("\n\tIngrese el apellido:\t");
			gets(busq);			
			k=-1,c=1;
			while(c!=0 && k<max){
				k++;
				c=strcmp(busq,ape[k]);
			}
			if(k<max){
				printf("\n\tNombre[%d]:\t[%s]",k+1,nom[k]);
				printf("\n\tApellido[%d]:\t[%s]",k+1,ape[k]);
				printf("\n\tCodigo[%d]:\t[%.0f]",k+1,cod[k]);
			}
			else{
				printf("\n\t***El usuario no esta registrado");
			}
			getch();
			break;		
		case 3:
			getchar();
			float codbusq;
			printf("\n\tIngrese el codigo:\t");
			scanf("%f",&codbusq);			
			k=0;
			while(k<max && cod[k]!=codbusq){
				k++;
			}
			if(k<max){
				printf("\n\tNombre[%d]:\t[%s]",k+1,nom[k]);
				printf("\n\tApellido[%d]:\t[%s]",k+1,ape[k]);
				printf("\n\tCodigo[%d]:\t[%.0f]",k+1,cod[k]);
			}
			else{
				printf("\n\t***El usuario no esta registrado");
			}
			getch();
			break;
		default:
			printf("\n\t***OPCION INCORRECTA***");
	}
		do{
            system("cls");
            printf("\n\nBuscar de nuevo:\tS.Si\tN.No\n\t-->:\t");
            opc=getche();
        }while(opc!='S' && opc!='s' && opc!='N' && opc!='n');        
	}while(opc!='N' && opc!='n');
}
