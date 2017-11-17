#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int num=0;
	int cont,i,e=1,menor;
	
	printf("\n\nIngrese un Numero:\t\t");
	scanf("%d",&menor);
	
	do{	
		num=menor+e;
		e++;
		cont=0;
		for(i=1;i<=num;i++){
			if(num%i==0){
				cont++;
			}		
		}
		if(cont==2){
			printf("\n\nEl Numero es primo:\t\t%d",num);
			}
	
	}while(num<=menor+100);	
}
	


	
	
	
	

