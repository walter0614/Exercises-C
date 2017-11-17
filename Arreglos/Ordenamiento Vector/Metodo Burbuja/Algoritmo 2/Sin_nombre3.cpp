#define max 5
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	char nom[max][20],aux1[20];
	float cod[max];
	int i=0,k=0,aux=0;
	
	for(i=0;i<max;i++){
		system("cls");
		do{
			printf("\n\tNombre[%d]\t",i+1);
			gets(nom[i]);
		}while(strcmp(nom[i],"")==0);		
		printf("\n\tNumero[%d]\t",i+1);
		scanf("%f",&cod[i]);
		getchar();
	}
	for(i=0;i<max-1;i++){
		for(k=i+1;k<max;k++){
			if(cod[k]<cod[i] || strcmp(nom[k],nom[i])<0){
				strcpy(aux1,nom[i]);
				strcpy(nom[i],nom[k]);
				strcpy(nom[k],aux1);
				aux=cod[i];
				cod[i]=cod[k];
				cod[k]=aux;
			}
		}
	}
	for(i=0;i<max;i++){
	printf("\n\tNombre[%d]\t[%s]\tCodigo\t[%.0f]",i+1,nom[i],cod[i]);
	}
	
}
