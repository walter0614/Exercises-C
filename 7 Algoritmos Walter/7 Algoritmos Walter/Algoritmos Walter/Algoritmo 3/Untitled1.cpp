#include <iostream>

using namespace std;
 
int main()
{ 
    double a,b,c;
    
    cout<<"\n\tEste programa calcula el area de un triangulo"<<endl;
    
    cout<<"\n\tPor favor ingrese la base en Metros\n"<<endl;
    cout<<""<<endl;
    cout<<"\t-->\t";
    cin>>a;
    
    cout<<"\n\tPor favor ingrese la altura en Metros\n"<<endl;
    cout<<""<<endl;
    cout<<"\t-->\t";
    cin>>b;
    
    c=a*b/2;
    
    cout<<"\n\tEl area del triangulo es\t=\t"<<c;
    cout<<"\tMetros Cuadrados\n\n"<<endl;
    
    
    
    
    
    system("pause");
    return 0;
    
    
    
}
