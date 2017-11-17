#include <iostream.h>

int main()

{
    float a,b,suma,resta,multiplicacion,division;
    
    cout<<"***ESTE ES UN PROGRAMA QUE REALIZA LAS CUATRO OPERACIONES BASICAS***\n";
    cout<<"\nPor favor digite el primer numero:\n";
    cin>>a;
    cout<<"Por favor digite el segundo numero:\n";
    cin>>b;
    
    suma=a+b;
    resta=a-b;
    multiplicacion=a*b;
    division=a/b;
    
    cout<<"\n\n***OPERACIONES BASICAS***"<<endl;
    cout<<"\nLa suma entre los dos numeros es:\n"<<suma<<endl;
    cout<<"La resta entre los dos numeros es:\n"<<resta<<endl;
    cout<<"La multiplicacion entre los dos numeros es:\n"<<multiplicacion<<endl;
    cout<<"La division entre los dos numeros es:\n\n"<<division<<endl;
    
    cout<<"\n\n*************************\n"<<endl;
    cout<<"\n"<<endl;
    
    
    
    system("pause");
    return 0;
    }
