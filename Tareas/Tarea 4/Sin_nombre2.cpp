#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<time.h>
#define max 1000

int main()
{
	float num[max],v,aux=0;
	int i,k;
	srand(time(NULL));
	system("cls");
	
	for(i=0;i<max;i++){
		num[i]=rand()%100;			
	}
	for(i=0;i<max;i++){
		for(k=i+1;k<max;k++){
			if(num[k]<num[i]){
				aux=num[i];
				num[i]=num[k];
				num[k]=aux;
			}
		}		
	}
	for(i=0;i<max;i++){
		Sleep(15);
			printf("\n\tNumero[%d]\t[%.0f]",i,num[i]);
			if(i%50==0){
				getche();
			}			
	}

}
