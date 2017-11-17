#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#define max 10

int main()
{
	char nom[max][20],aux[20],busq1[20];
	float cod[max],aux1,busq;
	int i,k,cont,ls,li,mitad;
	
	for(i=0;i<max;i++){
		do{
			system("cls");
			printf("\n\tNombre[%d]\t:\t",i+1);
			gets(nom[i]);
			cont=0;
			for(k=0;k<i;k++){
				if(strcmp(nom[k],nom[i])==0){
					cont++;
				}
			}
			if(cont==1){
				printf("\n\tEl nombre ya existe");
				getche();
			}
		}while(strcmp(nom[i],"")==0 || cont==1);
		
		do{
			printf("\n\tCodigo[%d]\t:\t",i+1);
			scanf("%f",&cod[i]);
			cont=0;
			for(k=0;k<i;k++){
				if(cod[k]==cod[i]){
					cont++;
				}
			}
			if(cont==1){
				printf("\n\tEl codigo ya existe");			
			}
			
		}while(cont==1 || cod[i]>100 || cod[i]<0 );
		
	}
	printf("\n\tLista Desordenada\n");
	for(i=0;i<max;i++){
		printf("\n\tNombre[%d]  [%s]",i+1,nom[i]);
		printf("\n\tCodigo[%.0f]",cod[i]);
	}
	for(i=0;i<max;i++){
		for(k=i+1;k<max;k++){
			if(strcmp(nom[k],nom[i])<0){
				strcpy(aux,nom[i]);
				strcpy(nom[i],nom[k]);
				strcpy(nom[k],aux);
				aux1=cod[i];
				cod[i]=cod[k];
				cod[k]=aux1;
			}
		}
	}
	system("cls");
	printf("\n\tLista ordenada\n");
	for(i=0;i<max;i++){
		printf("\n\tNombre[%d]  [%s]",i+1,nom[i]);
		printf("\n\tCodigo[%.0f]",cod[i]);
	}
	
	printf("\n\tNumero a buscar\t-->\t");
	scanf("%f",&busq);
	li=0;
	ls=max-1;
	do{
		mitad=(ls+li)/2;
		if(busq>cod[mitad]){
			li=mitad+1;
		}else{
			if(busq<cod[mitad]){
				ls=mitad-1;
			}
		}
		
	}while(ls!=li && busq!=cod[mitad]);
	if(ls==li){
		mitad=ls;
	}
	if(busq==cod[mitad]){
		printf("\n\t[%.0f] esta en la posicion [%d]",busq,mitad+1);
	}else{
		printf("\n\tEl numero no existe");
	}
	
	printf("\n\tNombre a buscar\t");
	scanf("%s",&busq1);
	li=0;
	ls=max-1;
	do{
		mitad=(ls+li)/2;
		if(strcmp(busq1,nom[mitad])>0){
			li=mitad+1;
		}else{
			if(strcmp(busq1,nom[mitad])<0){
				ls=mitad-1;
			}
		}
		
	}while(ls!=li && strcmp(busq1,nom[mitad])!=0);
	if(ls==li){
		mitad=ls;
	}
	if(strcmp(busq1,nom[mitad])==0){
		printf("\n\t[%s] esta en la posicion [%d]",busq1,mitad+1);
	}else{
		printf("\n\tEl nombre no existe");
	}
}
