#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define max 10

int main()
{
	char nom[max][20];
	int i,k=-2,opc=0,u,cont=0;
	
	for(i=0;i<max;i++){
		do{
			
			printf("\n\tNombre [%d]\t\t",i+1,nom[i]);
			gets(nom[i]);
			cont=0;
			for(k=0;k<i;k++){
				if(strcmp(nom[k],nom[i])==0){
					cont++;
				}
				
				
			}
			if(cont==1){
				printf("\n\tEl nombre ya esta",cont);
			}
			
			
		}while(strcmp(nom[i],"")==0 || cont==1);	
	}
}
