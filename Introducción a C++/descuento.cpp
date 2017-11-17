#include <iostream.h>

int main()

{
    double nota1, nota2, nota3, nfinal, des,final;
    double men;
    men=10000;
    
    cout<<"Digite su primera nota:\n"<<endl;
    cin>>nota1;
    cout<<"Digite su segunda nota:\n"<<endl;
    cin>>nota2;
    cout<<"Digite su tercera nota:\n"<<endl;
    cin>>nota3;
    nfinal=(nota1+nota2+nota3)/3;
    cout<<"Su nota final es: \n"<<nfinal<<endl;
    
    if(nfinal>44)
    {
    des=10000*0.3;
    
    final=men-des;
    
    cout<<"El descuento que se le otorga conforme a su desempeño es de: \n"<<des<<endl;
    cout<<"Su mensualidad final equivale a: \n"<<final<<endl;                  
    }
    else 
    {
    cout<<"Su mensualidad es: \n"<<men<<endl;
    }
    if(nfinal>=30)
    {
    cout<<"Aprobaste la materia"<<nfinal<<endl;             
    }
    else
    {
    cout<<"Reprobaste la materia"<<nfinal<<endl;    
    }
    
    system("pause");
    return 0;
    }
