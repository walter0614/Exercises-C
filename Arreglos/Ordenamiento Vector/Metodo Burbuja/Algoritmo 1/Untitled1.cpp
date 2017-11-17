#define max 5
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	float num[max],aux;
	int i,k;
	
	for(i=0;i<max;i++){
		printf("\n\tNumero [%d]\t",i+1);
		scanf("%f",&num[i]);
	}
	for(i=0;i<max-1;i++){
		for(k=i+1;k<max+1;k++){
			if(num[k]<num[i]){
				aux=num[i];
				num[i]=num[k];
				num[k]=aux;				
			}
		}		
	}
	for(i=0;i<max;i++){
		printf("\n\tNumero [%d]\t[%.0f]",i+1,num[i]);
	}
	getche();
	
}
