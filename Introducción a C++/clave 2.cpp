#include <iostream.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

 int main()
 {
     bool salida=false;
     int contra,i;
     double raiz,total;

     do{cout<<"\n\nINGRESE LA CLAVE:\t";cin>>contra;

     if(contra==10){
        salida=true;
     }
     cout<<"\nValidando .";

     for(i=0;i<10;i++){
            Sleep(100);
        cout<<".";
     }

     }while(!salida);

     cout<<"\n\nINGRESE UN NUMERO:  ";cin>>raiz;

     total=sqrt(raiz);

     cout<<"\n\nRAIZ CUADRADA:  "<<total;





     getch();
     return 0;
 }
