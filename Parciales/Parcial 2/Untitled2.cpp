//Se van a pedir los datos de 10 empleados de una empresa, los datos que se van a pedir son: codigo numerico(1-1000),nombre(no puede ser nulo),
// año de ingreso(1990-2016),mes(1-12),dia(1-dias del mes);los dias de 31 son enero,marzo,mayo,junio,agosto,octubre y diciembre. El resto excepto febrero son de 30
//febrero sera de 28 si el año no es bisieto o si lo es;el codigo de la persona no puede estar repetido;despues de pedir los 10 personajes se debe mostrar la lista de las 
//10 personas alfabeticamente, con todos sus datos;
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define max 10

int main()
{

    char nom[max][20],aux[20];
    float cod[max],ano[max],mes[max],dia[max];
    float xcod,xano,xmes,xdia;
    int i,cont,k,opc;
    int ano1;
    for(i=0;i<max;i++){
       	do{
			system("cls");			
			printf("\n\tNombre [%d]\t\t",i+1);
			gets(nom[i]);
			cont=0;
			for(k=0;k<i;k++){
				if(strcmp(nom[i],nom[k])==0){
					cont++;
				}
			}
			if(cont==1){
				printf("\n\tEl nombre ya esta");
				getche();
			}		
		}while(strcmp(nom[i],"")==0 || cont==1);
	   do{
			system("cls");			
			printf("\n\tCodigo [%d]\t\t",i+1);
			scanf("%f",&cod[i]);
			cont=0;
			for(k=0;k<i;k++){
				if(cod[i]==cod[k]){
					cont++;
				}
			}
			if(cont==1){
				printf("\n\tEl Codigo ya esta");
				getche();
			}		
		}while(cont==1 || cod[i]>1000 || cod[i]<1);
		do{
            system("cls");			
			printf("\n\tAno de ingreso [%d]\t\t",i+1);
			scanf("%f",&ano[i]);
        }while(ano[i]<1990 || ano[i]>2016);
        do{
            system("cls");			
			printf("\n\tMes de ingreso [%d]\t\t",i+1);
			scanf("%f",&mes[i]);
        }while(mes[i]<1 || mes[i]>12);
       
            cont=0;
			ano1=ano[i];
			if(ano1 % 4 == 0 && (ano1  % 100 != 0 || ano1 % 400 == 0)){
                printf("\n\tEl ano es bisiesto");
                cont++;
            }else{
                printf("\n\tEl ano NO es bisiesto");
                cont=0;
            }
            getche();
            if(mes[i]==1 || mes[i]==3 || mes[i]==5 || mes[i]==7 || mes[i]==8 || mes[i]==10 || mes[i]==12){
                do{
                    system("cls");			
        			printf("\n\tDia de ingreso [%d]\t\t",i+1);
        			scanf("%f",&dia[i]);
                }while(dia[i]<0 || dia[i]>31);            
            }
            if(cont==1 && mes[i]==2){
                do{
                    system("cls");			
        			printf("\n\tDia de ingreso [%d]\t\t",i+1);
        			scanf("%f",&dia[i]);
                }while(dia[i]<0 || dia[i]>29);            
            }   
            if(mes[i]==4 || mes[i]==6 || mes[i]==9 || mes[i]==11){
                do{
                    system("cls");			
        			printf("\n\tDia de ingreso [%d]\t\t",i+1);
        			scanf("%f",&dia[i]);
                }while(dia[i]<0 || dia[i]>30);            
            }
            if(cont==0 && mes[i]==2){
                do{
                    system("cls");			
        			printf("\n\tDia de ingreso [%d]\t\t",i+1);
        			scanf("%f",&dia[i]);
                }while(dia[i]<0 || dia[i]>28);           
            }        
    }
    
    for(i=0;i<max-1;i++){
	    for(k=i+1;k<max;k++){
		    if(strcmp(nom[k],nom[i])<0){
			    strcpy(aux,nom[i]);
			    strcpy(nom[i],nom[k]);
			    strcpy(nom[k],aux);
			    
			    xcod=cod[i];
			    cod[i]=cod[k];
			    cod[k]=xcod;
			    
			    xano=cod[i];
			    cod[i]=cod[k];
			    cod[k]=xano;
			    
			    xmes=cod[i];
			    cod[i]=cod[k];
			    cod[k]=xmes;
			    
			    xdia=cod[i];
			    cod[i]=cod[k];
			    cod[k]=xdia;			    
		    }
	    }
    }
    system("cls");
    for(i=0;i<max;i++){
    	printf("\n\tNombre[%d]\t[%s] Cod [%.0f]",i+1,nom[i],cod[i]);
    	printf("\n\tAno[%.0f] Mes[%.0f] Dia[%.0f]",ano[i],mes[i],dia[i]);
    	printf("\n\n");
    }
    getche();
}

//Walter Andres Guevara Peña Ingenieria de sistemas 3A
