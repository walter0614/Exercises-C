//Este Algoritmo pide y convierte la temperatura
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(void)
{
	int escal,conver;
	float temp,total;
	char opc=0;
	while(opc!='N'){
		system("cls");
		
		printf("\n\nIngrese el valor de la Temperatura:\t");
		scanf("%f",&temp);
		
		printf("\n\nSeleccione la escala:\n\n");
		printf("\t1. Centigrados\n");
		printf("\t2. Fahrenheit\n");
		printf("\t3. Kelvin\n");
		printf("\n-->\t");
		scanf("%d",&escal);
		/*if(escal<1 || escal>3){
			printf("\n\nIngresaste un valor INCORRECTO");
			getch();
			do{
				system("cls");
				printf("\n\nSeleccione la escala:\n\n");
				printf("\t1. Centigrados\n");
				printf("\t2. Fahrenheit\n");
				printf("\t3. Kelvin\n");
				printf("\n-->\t");
				scanf("%d",&escal);
			}while(escal!='1' || escal!='2' || escal!='3');
		}*/
		
		printf("\n\nSeleccione la escala a la que desea convertir la temperatura:\n\n");
		printf("\t1. Centigrados\n");
		printf("\t2. Fahrenheit\n");
		printf("\t3. Kelvin\n");
		printf("\n-->\t");
		scanf("%d",&conver);
	
		
		if(escal==1 && conver==1){
			total=temp;
		}
		if(escal==1 && conver==2){
			total=1.8*temp+32;
		}
		if(escal==1 && conver==3){
			total=temp+273;
		}
		if(escal==2 && conver==1){
			total=(temp-32)*0.555555556;
		}
		if(escal==2 && conver==2){
			total=temp;
		}
		if(escal==2 && conver==3){
			total=(temp-32)*0.555555556+273.15;
		}
		if(escal==3 && conver==1){
			total=temp-273;
		}
		if(escal==3 && conver==2){
			total=((temp-273)*1.8000)+32;
		}
		if(escal==3 && conver==3){
			total=temp;
		}
		printf("\n\nEl valor de la conversion es:\t");
		printf("%f", total);
		
		printf("\n\nDesea verificar otra temperatura:\tS. Si\tN. No");
		printf("\n-->\t");
		opc=getche();
		if(opc!='S' && opc!='N'){
			printf("\n\nIngresaste un valor INCORRECTO");
			while(opc!='S' && opc!='N'){
				printf("\n\nDesea continuar:\tS. Si\tN. No");
				printf("\n-->\t");
				opc=getche();
			}
			getch();
		}
		
		getch();
	}
}
