#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int main()

{
    double salario,tiempo,salfinal,salfinal1,salfinal2,salfinal3;
    char nombre[30],apellido[30],cargo[30];
    
    cout<<"---ESTE ES UN PROGRAMA QUE CALCULA EL SUELDO SEGUN LA ANTIGUEDAD---"<<endl;
    cout<<"\n\nDigite su nombre:"<<endl;
    cin>>nombre;
    cout<<"\nDigite su apellido:"<<endl;
    cin>>apellido;
    cout<<"\nDigite su cargo:"<<endl;
    cin>>cargo;
    cout<<"\nDigite el salario que tiene actualmente en la empresa:\n"<<endl;
    cin>>salario;
    cout<<"\nDigite el tiempo que lleva trabajando en la empresa (EN MESES):\n"<<endl;
    cin>>tiempo;
    
    cout<<"\n\nTrabajador:\t"<<nombre; cout<<"\t"<<apellido<<endl;
    cout<<"Cargo:\t\t"<<cargo<<endl;

    
    if(tiempo<=11)
    {
    salfinal=(salario*0.07)+salario;
    cout<<"Salario:\t"<<salfinal<<endl;
    }
    if(tiempo>11 & tiempo<24)
    {
    salfinal1=(salario*0.10)+salario;
    cout<<"Salario:\t"<<salfinal1<<endl;
    }
    if(tiempo>23 & tiempo<60)
    {
    salfinal2=(salario*0.14)+salario;
    cout<<"Salario:\t"<<salfinal2<<endl;
    }
    if(tiempo>59 & tiempo<120)
    {
    salfinal3=(salario*0.16)+salario;
    cout<<"Salario:\t"<<salfinal3<<endl;
    }
    if(tiempo>=120)
    {
    salfinal2=(salario*0.22)+salario;
    cout<<"Salario:\t"<<salfinal2<<endl;
    }
    
    
    getch();
    return 0;
    }
