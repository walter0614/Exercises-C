#define max 3
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int main()
{
    char nom[max][30];
    char ojo[max][30];
    char texto1[]="AZUL";
    char texto2[]="VERDE";
    char texto3[]="NEGRO";
    char texto4[]="CAFE";
    int i,c=1,d=1,e=1,f=1;
    int azul=0,verde=0,negro=0,cafe=0;
    char busq[30];
    char opc='S';
    
    for(i=0;i<max;i++){
        system("cls");
        printf("\n\tIngrese Nombre [%d]:\t\t",i+1);
        gets(nom[i]); 
        c=1,d=1,e=1,f=1;            			
		while(c!=0 && d!=0 && e!=0 && f!=0){
			printf("\n\tIngrese el color de ojos:\t");
		    gets(ojo[i]);
			c=strcmp(ojo[i],texto1);
			d=strcmp(ojo[i],texto2);
			e=strcmp(ojo[i],texto3);
			f=strcmp(ojo[i],texto4);
			if(c==0){
                azul++;
            }
            if(d==0){
                verde++;
            }
            if(e==0){
                negro++;
            }
            if(f==0){
                cafe++;
            }
		}
    }
	do{      
    c=1,d=1,e=1,f=1;
	while(c!=0 && d!=0 && e!=0 && f!=0){
		system("cls");
		printf("\n\tIngrese el color a buscar:\t");
	    gets(busq);
		c=strcmp(busq,texto1);
		d=strcmp(busq,texto2);
		e=strcmp(busq,texto3);
		f=strcmp(busq,texto4);
			if(c==0){
                printf("\n\tPersonas con color de ojos Azul\t\t%d",azul);
            }
            if(d==0){
                printf("\n\tPersonas con color de ojos Verde\t\t%d",verde);
            }
            if(e==0){
               printf("\n\tPersonas con color de ojos Negro\t\t%d",negro);
            }
            if(f==0){
            	printf("\n\tPersonas con color de ojos Cafe\t\t%d",cafe);
            }
	}
	getche();
		do{
		system("cls");
		printf("\n\tDesea buscar de nuevo:\n\tS.Si\tN.No\n\-->\t");
		opc=getche();
		}while(opc!='S'&& opc!='s' && opc!='N'&& opc!='n');
	}while(opc!='N' && opc!='n');
}
    
    
    

//walter andres guevara peña

