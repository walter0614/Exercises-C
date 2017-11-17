//1.Creo un vector con numeros de 1 al 100
//2.La persona ingresara su nombre y un codigo que no podra ser el mismo del de una persona que ya se registro
//3.Los codigos seran de 1 al 100 y no pueden ser los mimos del vector que cree
//4.Las busquedas se deben hacer con busqueda binaria
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define max 10

int main()
{
	float cod[max],v[max],aux;
	char nom[max][30];
	int i,k,mitad,ls,li,busq,opc=0,cont=0;
	
	srand(time(NULL));
	
	for(i=0;i<max;i++){
		v[i]=rand()%100;
	//printf("\n\tCodigo[%d] [%.0f] ya registrados",i+1,v[i]);
	}
	for(i=0;i<max-1;i++){
		for(k=i+1;k<max;k++){
			if(v[k]<v[i]){
				aux=v[i];
				v[i]=v[k];
				v[k]=aux;
			}
		}
	}
	for(i=0;i<max;i++){
	printf("\n\tCodigo[%d] [%.0f] ya registrados",i+1,v[i]);
	}
	
	li=0;
	ls=max-1;
	
	getche();
	for(i=0;i<max;i++){	
		do{
			system("cls");
			
			printf("\n\tNombre [%d]\t\t",i+1);
			gets(nom[i]);
			cont=0;
			for(k=0;k<i;k++){
				if(strcmp(nom[i],nom[k])==0){
					cont++;
				}
			}
			if(cont==1){
				printf("\n\tEl nombre ya esta");
				getche();
			}		
		}while(strcmp(nom[i],"")==0 || cont==1);
		
		do{		
			opc=0;
			do{
				printf("\n\tCodigo [%d]\t\t",i+1);
				scanf("%f",&cod[i]);
				
				li=0;
				ls=max-1;
					do{
						mitad=(ls+li)/2;
						if(cod[i]>v[mitad]){
							li=mitad+1;
						}
						else{
							if(cod[i]<v[mitad]){
								ls=mitad-1;
							}
						}
					}while(ls!=li && v[mitad]!=cod[i]);
					if(ls==li){
						mitad=ls;
					}
					if(v[mitad]==cod[i]){
						printf("\n\tEl numero es en la posicion [%d]",mitad+1);
						opc=0;
					}else{
						printf("\n\tEl numero no existe");
						opc=1;
					}
			}while(opc!=1);
			getche();				
		}while(cod[i]>100 || cod[i]<1);
	}
	
	for(i=0;i<max;i++){
		printf("\n\tNombre[%d]\t[%s]  [%.0f]",i+1,nom[i],cod[i]);
	}
	
	
}

