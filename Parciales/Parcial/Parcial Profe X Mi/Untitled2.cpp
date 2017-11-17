#define max 3
#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    char nom[max][30],ojo[max][10],colrev[10],opc='s';
    int k,cont;
    
    for(k=0;k<max;k++){
        do{
            system("cls");
            printf("\n\tNombre[%d]:\t",k+1);
            gets(nom[k]);
        }while(strcmp(nom[k],"")==0);
        do{
            printf("\n\tColor de Ojos[%d]:\t",k+1);
            gets(ojo[k]);
        }while(strcmp(ojo[k],"VERDE") && strcmp(ojo[k],"AZUL") && strcmp(ojo[k],"CAFE") & strcmp(ojo[k],"NEGRO"));
    }
    do{
	    do{
			system("cls");
			printf("\n\tColor de Ojos a Busca:\t");
			gets(colrev);
			cont=0;
			for(k=0;k<max;k++){
				if(strcmp(colrev,ojo[k])==0){
					printf("\n\t[%s] tiene ojos color [%s] ",nom[k],colrev);
					cont++;
				}
			}
		}while(strcmp(colrev,"VERDE") && strcmp(colrev,"AZUL") && strcmp(colrev,"CAFE") & strcmp(colrev,"NEGRO"));
		printf("\n\tCantidad de personas con ojos de color [%s] son [%d]",colrev,cont);
		getche();
		do{
			system("cls");
			printf("\n\tDesea volver a buscar:\n\tS.Si\tN.No\t-->\t");
			opc=getche();
		}while(opc!='S' && opc!='s' && opc!='n' && opc!='N');
	}while(opc!='n' && opc!='N');
   
}
