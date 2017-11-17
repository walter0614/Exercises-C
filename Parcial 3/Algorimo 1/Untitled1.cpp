#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    int a,b=1,c=1,d;
    int m=0,f=0;
    int top;
    float promf,promm;
    
    cout<<"\n\tPorcentaje de Mujeres o de Hombres\n\n"<<endl;
    
    cout<<"\n\tPor favor ingrese la cantidad de personas que desea encuestar\n"<<endl;
    cout<<"\t-->\t";
    cin>>a;
    
    do{
    top:
    cout<<"\n\tPersona\t"<<c<<endl;
    cout<<"\tSeleccione su genero\n"<<endl;
    cout<<"\n\t1.Femenino\t2.Masculino\n"<<endl;
    cout<<"\t-->\t";
    cin>>d;
    
    if(d!=1 && d!=2){
            cout<<"\n\tDato incorrecto\n"<<endl;
            goto top;
    }
    
    switch(d)
    {
             case 1:f=f+1;
             break;
             case 2:m=m+1;
             break;      
    }
                         
    c=c+1;
    b=b+1;                   
    }while(b<=a);
    
    promf=100*f/a;
    promm=100*m/a;
    
    cout<<"\n\tLa cantidad de Mujeres son:\t"<<promf<<"%"<<endl;
    cout<<"\n\tLa cantidad de Hombres son:\t"<<promm<<"%"<<endl;
    getch();
    
    
    
    
    
    
    
}
