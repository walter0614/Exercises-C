#include <iostream>

using namespace std;
 
int main()
{ 
    double dolares,pesos,total;
    int opcion;
    cout<<"\n\tDolares a Pesos & Pesos a Dolares\n"<<endl;
    
    cout<<"\n\tSeleccione una opcion\n"<<endl;
    cout<<""<<endl;
    cout<<"\t1. Dolares a Pesos\t2. Pesos a Dolares\n"<<endl;
    cout<<"\t-->\t";
    cin>>opcion;
    
    switch(opcion)
    {
     case 1:
     cout<<"\n\tIngrese la cantidad de Dolares\n"<<endl;
     cout<<"\t-->\t";
     cin>>dolares;
     total=dolares*3401;
     cout<<"\n\tConversion\t=\t"<<total;
     cout<<"\tPesos Colombianos\n\n"<<endl;
     break;
     
     case 2:
     cout<<"\n\tIngrese la cantidad de Pesos Colombianos\n"<<endl;
     cout<<"\t-->\t";
     cin>>pesos;
     total=pesos/3401;
     cout<<"\n\tConversion\t=\t"<<total;
     cout<<"\tDolares\n\n"<<endl;
     break;
     
     default:
     cout<<"\n\tOpcion erronea\n"<<endl;
    }
    
    
    
    
    
    
    
    system("pause");
    return 0;
    
    
    
}
