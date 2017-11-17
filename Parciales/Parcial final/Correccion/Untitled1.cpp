/*Una empresa expendedora de gaseosas al mayor desea sistematizar su proceso de atencion a clientes, la empresa vende canastas completas de
gaseosas, las canastas estan acomodadas en una columna a la que le caben max 20 canastas, la atencion al publico la hace una persona, en la cola
de atencion pueden ingresar max 10 personas. El programa de computador debe construirse con las siguientes especificaciones:
1.Una opcion para agregar canastas, las canastas tienen un codigo mayor a cero
2.Una opcion para ingresar personas a la cola, a la cola se ingresa el nombre de la persona 
3.Una opcion para atender a una persona, en la cual el sistema muestra automaticamente la persona que debe atender, sino hay personas que 
atender en la cola se muestra ese mensaje,Inmediatamente pide la cantidad de canastas que quiere comprar, ese valor debe ser mayor a cero.
El sistema retira de la pila de canastas la cantidad que se va a comprar, si la cantidad de canastas no cubre lo que se va a comprar las retira
todas indicando cuantas retiro.Si la cantidad cubre le dice que el retiro fue exitoso
4.Una opcion para salir
Siempre que sea escoja una opcion y se haga lo que ella indique se vuelve a mostrar el menu*/

#include <windows.h>
#include <conio.h>
#include <stdio.h>
#define maxcan 5
#define maxper 3

int main(){
	float canasta[maxcan];
	char nombre[maxper][20],aux[20];
	int opc=0,x,k,cod,compra,aux1;
	for(x=0;x<maxcan;x++){
		canasta[x]=-1;
	}
	for(x=0;x<maxper;x++){
		strcpy(nombre[x],"-1");
	}
	do{
	for(x=0;x<maxcan;x++){
		printf("\n\t[%.0f]",canasta[x]);
		//printf("\n\t[%s]",nombre[x]);
	}
	getche();
	
		do{
			system("cls");
			printf("\n\t1.Ingresar canastas  2.Ingresar Personas  3.Atender\n\t");
			scanf("%d",&opc);
		}while(opc!=1 && opc!=2 && opc!=3);
		
		switch(opc){
			case 1:
				do{
					system("cls");
					printf("\n\tCodigo de la canasta:\t");
					scanf("%d",&cod);
				}while(cod<0);
				x=0;
				while(x<maxcan && canasta[x]!=-1){
					x++;
				}
				if(canasta[x]==-1){
					canasta[x]=cod;
					printf("\n\tLa canasta [%d] se registro",cod);
					getche();
				}
				else{
					printf("\n\tNo hay espacio");
					getche();
				}
			break;
			case 2:
				do{
					system("cls");
					printf("\n\tNombre de la persona:\t");
					gets(aux);
				}while(strcmp(aux,"")==0);
				x=0;
				while(x<maxper && strcmp(nombre[x],"-1")!=0){
					x++;
				}
				if(strcmp(nombre[x],"-1")==0){
					strcpy(nombre[x],aux);
					printf("\n\tSe ingreso [%s]",aux);
					getche();
				}
				else{
					printf("\n\tNo hay espacio");
					getche();					
				}
			break;
			case 3:
				if(strcmp(nombre[0],"-1")==0){
					printf("\n\tLa cola esta vacia");
					getche();
				}
				else{
					printf("\n\tAtendiendo [%s]",nombre[0]);
					getche();
					for(x=0;x<maxcan && canasta[x]!=-1;x++){
					}
					do{
					printf("\n\tCantidad de canastas actuales [%d]",x);					
						printf("\n\tCanastas a comprar:\t");
						scanf("%d",&compra);
					}while(compra>x || compra<0);
					system("cls");
					printf("\n\n\tRETIRO EXITOSO");
					getch();
					for(x=0;x<compra;x++){
						canasta[x]=-1;
					}
					for(x=0;x<maxcan;x++){
						
						for(k=x+1;k<maxcan;k++){
							if(canasta[x]==-1){
								aux1=canasta[x];
								canasta[x]=canasta[k];
								canasta[k]=aux1;
							}
							
						}
									
					}
					
				
					
					for(x=0;x<maxper-1;x++){
						strcpy(nombre[x],nombre[x+1]);
					}
					strcpy(nombre[maxper-1],"-1");
				}
				
				
							
		}
		do{
		system("cls");
		printf("\n\t1.Volver\t2.Salir\n\t");
		scanf("%d",&opc);
		}while(opc!=1 && opc!=2);
	}while(opc!=2);
	
	


}
