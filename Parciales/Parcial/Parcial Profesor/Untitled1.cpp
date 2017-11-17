#define max 3
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    char nom[max][30],color[max][10],colrev[10],resp='S';
    int k,cont;
    for(k=0;k<max;k++){
            do{
                    system("cls");
                    printf("\n\tNombre[%d]:\t",k+1);
                    gets(nom[k]);
            }while(strcmp(nom[k],"")==0);
            do{
                    printf("\n\tColor de ojos[%d]:\t",k+1);
                    gets(color[k]);
            }while(strcmp(color[k],"AZUL")!=0 && strcmp(color[k],"VERDE")!=0 && strcmp(color[k],"NEGRO")!=0 && strcmp(color[k],"CAFE")!=0);
    }
    
    do{
            do{   
                    do{
                            system("cls");   
                            printf("\n\tBusqueda de color de ojos:\t");
                            gets(colrev);
                    }while(strcmp(colrev,"AZUL")!=0 && strcmp(colrev,"VERDE")!=0 && strcmp(colrev,"NEGRO")!=0 && strcmp(colrev,"CAFE")!=0);
                    
                    system("cls"); 
                    cont=0;        
                    for(k=0;k<max;k++){
                        if(strcmp(color[k],colrev)==0){
                            printf("\n\t[%s]",nom[k]);
                            cont++;
                            Sleep(400);
                        }           
                    }
                    printf("\n\tLas personas con ojos [%s]\tes\t[%d]",colrev,cont);
                    getche();      
            }while(strcmp(colrev,"AZUL")!=0 && strcmp(colrev,"VERDE")!=0 && strcmp(colrev,"NEGRO")!=0 && strcmp(colrev,"CAFE")!=0);
            do{
                    system("cls");
                    printf("\n\tDesea volver a buscar:\n\tS.SI\tN.No\t-->\t");
                    resp=getche();
            }while(resp!='S' && resp!='s' && resp!='N' && resp!='n');
    }while(resp!='N' && resp!='n');
}
