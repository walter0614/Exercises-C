#include <conio.h>
#include <stdio.h>


int main()
{
	int ano,res;
	char opc='S';
	
	while(opc=='S'){
		printf("\n\nDigite un anio:\t");
		scanf("%d",&ano);
		res=ano%4;
		if(res==0){
		printf("\n\nAnio Bisiesto");
		}	
		else{
		printf("\n\nAnio No Bisiesto");
		}
		opc='1';
		while(opc!='S' && opc!='N'){
			printf("\nDesea otro calculo\tS.Si  N.No\t");
			opc=getche();
		}
			
	
	}
	
	getch();
	
}
