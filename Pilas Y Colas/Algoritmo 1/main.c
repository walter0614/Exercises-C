#include <stdio.h>
#define MAX 20
int pila[MAX], cola[MAX],ind=0,idxc=0;
int borrar()
{
    if (ind==0) printf("Error Pila esta vacia");
    else {
           ind--;
           return pila[ind];
           }
}
int borrar_cola()
{   int m,n;
    if (idxc==0) printf("Error Cola esta vacia");
    else {
           m = cola[0]; //  elemento que sale
           for (n=0;n<idxc-1;n++) 
           cola[n]=cola[n+1];
           idxc--;
           return m;
           }
}
void insertar(int d)
{
     if (ind==MAX) { 
         printf("Error Pila llena ");
         getch();
     }
     else {
       pila[ind]=d;
       ind++;
       }
 }
void insertar_c(int d)
{
     if (idxc==MAX) printf("Error Cola llena ");
     else {
       cola[idxc]=d;
       idxc++;
       }
 }
 
 int main()
 {
     int x=1,y,z,j;
     while (x!=0) {
           system("cls"); 
           printf("1. insertar pila \n");
           printf("2. borrar en pila \n");
           printf("3. listar pila \n");
           printf("4. insertar en cola \n");
           printf("5. borrar en cola \n");
           printf("6. listar cola \n");
           printf("0. Salir \n");
           scanf("%d",&x);
           switch(x)
           {
             case 1: printf("digite su dato: ");
                     scanf("%d",&z);
                     insertar(z);
                     break;
             case 2: printf("dato borrado: %d",borrar());
                     getch();
                     break;         
             case 3: for (j=0;j<=ind-1; j++) printf("%d - ",pila[j]);
                     getch();
                     break;
             case 4: printf("digite su dato: ");
                     scanf("%d",&z);
                     insertar_c(z);
                     break;
             case 5: printf("dato borrado: %d",borrar_cola());
                     getch();
                     break;         
             case 6: for (j=0;j<=idxc -1; j++) printf("%d - ",cola[j]);
                     getch();
                     break;
        

           }        
     }
     
}
