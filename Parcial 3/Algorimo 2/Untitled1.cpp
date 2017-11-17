#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    int a,b=1,c=1,d,e=1;
    float nota,nf=0,np=0,pt=0;
    int top;
    char nombre[30];
    
    cout<<"\n\tPorcentaje de Notas de x Alumnos \n\n"<<endl;
    
    cout<<"\n\tPor favor ingrese la cantidad de alumnos que desea encuestar\n"<<endl;
    cout<<"\t-->\t";
    cin>>a;
    
    cout<<"\n\tLas notas deben ir de 1 a 5\n"<<endl;
    
    do{
           cout<<"\n\n\n\tAlumno\t"<<c<<"\tNombre:\t";
           cin>>nombre;
       top: 
           nf=0;
           for(d=1;d<=4;d++){
           cout<<"\n\tNota\t"<<d<<"\t:\t";
           cin>>nota;
           if(nota>=1 && nota<=5){
           nf=nf+nota;
           }else{
           cout<<"\n\tDato incorrecto\n"<<endl;
           goto top;
           }
           }
           np=nf/4;
           cout<<"\n\n\tAlumno:\t\t\t"<<nombre<<endl;
           cout<<"\n\tPromedio Final\t\t"<<np<<endl;
           
           
           pt=pt+np/a;
                          
           b=b+1;
           c++;
    }while(b<=a);
    
    cout<<"\n\n\n\tEl Promedio De Los\t"<<a<<"\tAlumnos Es:\t"<<pt<<endl;
                                     
    
    
    getch();
    
    
    
    
    
}
