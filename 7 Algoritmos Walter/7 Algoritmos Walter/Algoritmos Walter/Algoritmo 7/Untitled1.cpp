#include <iostream>

using namespace std;
 
int main()
{ 
    int salario,total,total1;
    int antiguedad;
    
    cout<<"\n\tSueldo Mensual Del Trabajor\n"<<endl;
    cout<<"\n\tElija una opcion\n"<<endl;
    cout<<"\n\t1.Mas de 10\t\t\t2.Menos de 10 y Mas de 5\n\n\t3.Menos de 5 y mas de 3\t\t4.Menos de 3\n"<<endl;
    cout<<"\t-->\t";
    cin>>antiguedad;
    
    switch(antiguedad)
    {
     case 1:
            cout<<"\n\tIngrese su salario anual\n"<<endl;
            cout<<"\t-->\t";
            cin>>salario;
            total=salario*0.10;
            total1=salario+total;
            cout<<"\n\tSu salario Final es de:\n"<<endl;
            cout<<"\t:\t"<<total1<<endl;
     break;
     case 2:
            cout<<"\n\tIngrese su salario anual\n"<<endl;
            cout<<"\t-->\t";
            cin>>salario;
            total=salario*0.07;
            total1=salario+total;
            cout<<"\n\tSu salario Final es de:\n"<<endl;
            cout<<"\t:\t"<<total1<<endl;
     break;
     case 3:
            cout<<"\n\tIngrese su salario anual\n"<<endl;
            cout<<"\t-->\t";
            cin>>salario;
            total=salario*0.05;
            total1=salario+total;
            cout<<"\n\tSu salario Final es de:\n"<<endl;
            cout<<"\t:\t"<<total1<<endl;
     break;
     case 4:
            cout<<"\n\tIngrese su salario anual\n"<<endl;
            cout<<"\t-->\t";
            cin>>salario;
            total=salario*0.03;
            total1=salario+total;
            cout<<"\n\tSu salario Final es de:\n"<<endl;
            cout<<"\t:\t"<<total1<<endl;
     break;
     default:
             cout<<"\n\tEl dato es Incorrecto\n"<<endl;
             cout<<"\n"<<endl;
    
    }
       
    
    system("pause");
    return 0;
    
    
    
}
