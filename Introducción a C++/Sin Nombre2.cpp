#include <iostream.h>

int main(){
    float a,b,c,p;
    cout<<"Dame tu primer calificacion: "<<endl;
    cin>>a;
    cout<<"Dame tu segunda calificacion: "<<endl;
    cin>>b;
    cout<<"Dame tu tercer calificacion: "<<endl;
    cin>>c;
    p=(a+b+c)/3;
    cout<<"Tu promedio es de: \n"<<p<<endl;
    if(p>=30)
    {
      cout<<"Aprobaste la materia"<<endl;
            }
    else 
    {
      cout<<"Reprobaste la materia"<<endl;
         }
    
    system("pause");
    return 0;
    }


