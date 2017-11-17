#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#define max 10

int main()

{
    int i,k,aux=0,busq,ls,li,mit,opc;
	float num[max];
	
	srand(time(NULL));
	for(i=0;i<max;i++){
      num[i]=rand()%100;
      printf("\n\tNumero[%d]\t[%.0f]",i+1,num[i]);
    }
    for(i=0;i<max;i++){
      for(k=i+1;k<max;k++){
        if(num[k]<num[i]){
          aux=num[i];
          num[i]=num[k];
          num[k]=aux;
        }
      }
    }
    getche();
    //system("cls");
    printf("\n\n\tNumeros Ordenados\n\n");
    for(i=0;i<max;i++){
      printf("\n\tNumero[%d]\t[%.0f]",i+1,num[i]);
    }
do{
	printf("\n\n\tNumero a buscar\t");
	scanf("%d",&busq);
//--------------------*------------------------------------*---------------------------------*--------------------------------------------
	li=0;
	ls=max-1;
	do{
      mit=(ls+li)/2;     
      if(busq>num[mit]){
        li=mit+1;
      }
      else{
        if(busq<num[mit]){
        ls=mit-1;
        }
      }        
    }while(ls!=li && num[mit]!=busq);
    /*if(ls==li)
    mit=ls;*/
    if(num[mit]==busq){
      printf("\n\tEl numero [%d] esta en la posicion [%d]",busq,mit+1);
    }else{
     printf("\n\tEl numero no existe");
     }
    printf("\n\tLimite Superior[%d]\tLimite Inferior[%d]",ls,li);
}while(opc!=1);
    getche();
}
