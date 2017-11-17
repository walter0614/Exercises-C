#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define max 10

int main()
{
	float num[max];
	int i,k,aux,mitad,li,ls,busq,opc;
	srand(time(NULL));
	
	for(i=0;i<max;i++){
		num[i]=rand()%100;
	}
	for(i=0;i<max-1;i++){
		for(k=i+1;k<max;k++){
			if(num[k]<num[i]){
				aux=num[i];
				num[i]=num[k];
				num[k]=aux;
			}
		}
	}
	for(i=0;i<max;i++){
		printf("\n\tNumero [%d] [%.0f]",i+1,num[i]);
	}
	do{
		printf("\n\tNumero a buscar\t\t");
		scanf("%d",&busq);
		
		li=0;
		ls=max-1;
		do{
			mitad=(ls+li)/2;
			if(busq>num[mitad]){
				li=mitad+1;	
			}
			else{
				if(busq<num[mitad]){
					ls=mitad-1;
				}
			}
			
		}while(ls!=li && num[mitad]!=busq);
		if(ls==li){
		mitad=ls;
		}
			if(num[mitad]==busq){
			printf("\n\t[%d] estaba en la posicion [%d]",busq,mitad+1);
			}else{
				printf("\n\tEl numero no existe");
			}
		
		
		
	}while(opc!=1);
	getche();
}
