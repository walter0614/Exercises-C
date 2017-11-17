#define max 10
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	float cod[max];
	int busq;
	char opc='S';
	do{
    	for(int i=0;i<max;i++){
    			do{
    				system("cls");
    				printf("\n\nIngrese codigo [%d]:\t",i+1);
    				scanf("%f",&cod[i]);
    			}while(cod[i]>5000 || cod[i]<0);								
    	}
    	for(int u=0;u<max;u++){
    		printf("\n\nEl codigo:\t[%d]\t es:\t[%.2f]\t",u+1,cod[u]);
    	}
    	getch();
    	do{
        	system("cls");
        	printf("\n\nIngrese codigo a buscar:\t");
        	scanf("%d",&busq);
        	int k=0;
        	while(busq!=cod[k] && k<max){
        		k++;
        	}
        	if(k==max){
                printf("\n\n\t***El numero no se encuentra***");
                }
            else{
                printf("\n\nEl codigo:\t[%d]\t esta en:\t[%d]\t",busq,k+1);	
                }
        	getch();	
        	do{
                system("cls");
                printf("\n\nBuscar de nuevo:\tS.Si\tN.No");
                printf("\n\t-->:\t");
                opc=getche();
            }while(opc!='S' && opc!='s' && opc!='N' && opc!='n');
        }while(opc!='N' && opc!='n');
        do{
                system("cls");
                printf("\n\nIngresar mas numeros:\tS.Si\tN.No");
                printf("\n\t-->:\t");
                opc=getche();
            }while(opc!='S' && opc!='s' && opc!='N' && opc!='n');
    }while(opc!='N' && opc!='n');
}
