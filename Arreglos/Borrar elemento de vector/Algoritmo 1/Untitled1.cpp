#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define max 5

int main()
{
    int agre,x,m,n;
    int cod[max],elim,k,opc=0;
    char resp='s';
    
    for(k=0;k<max;k++){
        cod[k]=-1;
    }    
    do{    	
    	do{
			system("cls");
	    	printf("\n\t[A]Agregar\t[E]Eliminar\t[C]Eliminar X cola\n\t");
	    	resp=getche();
		}while(resp!='A' && resp!='E' && resp!='C');
        
        system("cls");
		if(resp=='C'){
            if(cod[0]==-1){
                printf("\n\tLa cola esta vacia"); 
                getche();               
            }else{
                m = cod[0]; 
               for (n=0;n<max-1;n++){
               cod[n]=cod[n+1];
                }
               printf("\n\tSe elimino [%d]",m);
               getche();
          
            }
           
        }	
		
		if(resp=='A'){
			do{
				system("cls");
				printf("\n\tCodigo para agregar\t");
				scanf("%d",&agre);
			}while(agre<0);
			
			k=0;
			while(k<max && cod[k]!=agre && cod[k]!=-1){
				k++;
			}
			if(cod[k]==-1){
				cod[k]=agre;
				printf("\n\tSe agrego [%d]",agre);
				getche();
			}
			
			else{
				if(cod[k]==agre){
					printf("\n\tEl codigo ya esta");
					getche();
				}							
				else{
					printf("\n\tNo hay espacio");
					getche();
				}									
			}			
		}/*else{
			do{
				system("cls");
				printf("\n\tCodigo a eliminar\n\t");
				scanf("%d",&elim);
			}while(elim<=0);		
			k=0;		
			while(k<max && cod[k]!=elim && cod[k]!=-1){
				k++;
			}
			if(cod[k]==elim){
				for(x=k;x<max-1;x++){
					cod[x]=cod[x+1];
				}
				cod[x]=-1;
				printf("\n\tCodigo [%d] eliminado",elim);
				getche();
				system("cls");
				printf("\n\tEstado actual\n");
				for(x=0;x<max && cod[x]!=-1;x++){
					printf("\n\tDato[%d]",cod[x]);
				}
				getche();
			}else{
				printf("\n\tCodigo [%d] no existe",elim);
				getche();
			}			
		}*/
		system("cls");
		for(k=0;k<max && cod[k]!=-1;k++){
            printf("\n\t[%d]",cod[k]);
        }
        getche();

		system("cls");
		printf("\n\tS.Volver N.No volver\n\t");
		resp=getche();
		
	
	
	}while(resp!='N' && resp!='n');
    
    
}
