#include <iostream>

using namespace std;
 
int main()
{ 
    double f,c;
    int opcion2;
    cout<<"\n\tFarenheit a Celsius & Celsius a Farenheit\n"<<endl;
    
    cout<<"\n\tSeleccione una opcion\n"<<endl;
    cout<<""<<endl;
    cout<<"\t1. Farenheit a Celsius\t2. Celsius a Farenheit\n"<<endl;
    cout<<"\t-->\t";
    cin>>opcion2;
    
    switch(opcion2)
    {
     case 1:
     cout<<"\n\tIngrese la temperatura en Grados Farenheit\n"<<endl;
     cout<<"\t-->\t";
     cin>>f;
     c=(f-32)*1.8;
     cout<<"\n\tConversion\t=\t"<<c;
     cout<<"\tGrados Celsius\n\n"<<endl;
     break;
     
     case 2:
     cout<<"\n\tIngrese la temperatura en Grados Centigrados\n"<<endl;
     cout<<"\t-->\t";
     cin>>c;
     f=c*1.8+32;
     cout<<"\n\tConversion\t=\t"<<f;
     cout<<"\tGrados Farenheit\n\n"<<endl;
     break;
     
     default:
     cout<<"\n\tOpcion erronea\n"<<endl;
    }
    
    
    
    
    
    
    
    system("pause");
    return 0;
    
    
    
}
