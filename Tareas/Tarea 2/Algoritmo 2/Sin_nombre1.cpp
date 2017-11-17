#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	int num[100];
	char opc='S';	
	do{
		system("cls");
		int e=0,i=0,cont=0,f=0;		
		printf("\n\nIngrese un Numero:\t\t");
		scanf("%d",&num[0]);
			do{
			num[e]=num[0]+i;				
			//printf("\n\nEl Numero:\t %d \t es\t %d",e+1,num[e]);		
			cont=0;
			for(f=1;f<=num[e];f++){
				if(num[e]%f==0){
					cont++;
				}
			}
			if(cont==2){
				printf("\n\nNumero: %d\t=\t%d\t\tPRIMO",e+1,num[e]);
			}
			else{
		//	printf("\n\nNumero: %d\t=\t%d\t\tNO ES PRIMO",e+1,num[e]);		
			}
			e++;
			i++;				
			}while(e<=99);
		printf("\n\n\nIngrese S/s. Para Continuar\t\tN/n.Para Salir:\n");
		printf("\n-->:\t\t");
		opc=getche();
		while(opc!='S' && opc!='s' && opc!='N' && opc!='n'){
			system("cls");
			printf("\n\n\n\t\t***Opcion Incorrecta***");
			printf("\n\n\nIngrese S/s. Para Continuar\t\tN/n.Para Salir:\n");
			printf("\n-->:\t\t");
			opc=getche();
		}	
	}while(opc=='S' || opc=='s');		
}
