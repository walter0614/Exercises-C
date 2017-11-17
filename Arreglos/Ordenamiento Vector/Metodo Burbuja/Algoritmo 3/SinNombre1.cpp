#define max 10 
#include <conio.h>
#include <stdio.h>
#include <windows.h>
int main()
{
    char nom[max][20],aux[20];
    float cod[max],cont=0,aux1=0,mayor=0,menor;
    int k=0,i=0;
    
    for(i=0;i<max;i++){
     system("cls");
	     do{
		      printf("\n\tNombre[%d]:\t",i+1);
		      gets(nom[i]);
	     }while(strcmp(nom[i],"")==0);
	     printf("\n\tNota[%d]:\t",i+1);
	     scanf("%f",&cod[i]);
	      cont=cont+cod[i];
	      getchar();
    }
    for(i=0;i<max-1;i++){
	    for(k=i+1;k<max;k++){
		    if(strcmp(nom[k],nom[i])<0){
			    strcpy(aux,nom[i]);
			    strcpy(nom[i],nom[k]);
			    strcpy(nom[k],aux);
			    aux1=cod[i];
			    cod[i]=cod[k];
			    cod[k]=aux1;
		    }
	    }
    }
	system("cls");
    for(i=0;i<max;i++){
    	printf("\n\tNombre[%d]\t[%s]   Nota  [%.0f]",i+1,nom[i],cod[i]);
    }
    float prom=cont/max;
    menor=prom;
    for(i=0;i<max;i++){
		    if(cod[i]>=mayor){
		    	mayor=cod[i];
		    }
		    if(cod[i]<=menor){
			    
					menor=cod[i];
			}             	    
    }   
    printf("\n\n\tPromedio del curso\t[%.0f]",prom);
    printf("\n\n\tNota Mayor\t[%.0f]\n\tPersonas con Nota Mayor",mayor);
    i=0;
    do{
    	if(cod[i]==mayor){
    		printf("\n\tNombre[%d]\t[%s]",i+1,nom[i]);
		}
    	i++;
	}while(i<max);
    printf("\n\n\tNota Menor\t[%.0f]\n\tPersonas con Nota Menor",menor);
    i=0;
    do{
    	if(cod[i]==menor){
    		printf("\n\tNombre\t[%s]",nom[i]);
		}
    	i++;
	}while(i<max);
    getche();
    
    
    
}

