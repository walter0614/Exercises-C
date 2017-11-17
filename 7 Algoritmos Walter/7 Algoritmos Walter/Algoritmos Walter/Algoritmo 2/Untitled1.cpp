#include <iostream>

using namespace std;
 
int main()
{ 
    double a,b,c;
    
    cout<<"\n\tEste programa calcula el precio de un articulo SIN EL IVA"<<endl;
    
    cout<<"\n\tPor favor ingrese el valor del articulo\n"<<endl;
    cout<<""<<endl;
    cout<<"\t-->\t";
    cin>>a;
    
    b=a*(0.16);
    c=a-b;
    
    cout<<"\n\tTotal a pagar SIN IVA\t=\t"<<c;
    cout<<"\n\n"<<endl;
    
    
    
    
    
    system("pause");
    return 0;
    
    
    
}
