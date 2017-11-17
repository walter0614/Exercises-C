#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int main()
{

    double compra,total,total1,total2,total3,total4;
    double bola;
    char articulo[30],nombre[30],apellido[30];
    
    
    cout<<"---ESTE ES UN PROGRAMA QUE HACE DESCUENTO SEGUN LA BALOTA---"<<endl;
    cout<<"\n\nDigite su nombre:"<<endl;
    cin>>nombre;
    cout<<"\nDigite su apellido:"<<endl;
    cin>>apellido;
    cout<<"Por favor digite el nombre del articulo:\t"<<endl;
    cin>>articulo;
    cout<<"Por favor digite el valor de su compra:\t"<<endl;
    cin>>compra;
    cout<<"Ingresa el numero segun el color que sacaste:\n"<<endl;
    cout<<"1=BLANCA\t 2=VERDE\t 3=AMARILLA\t 4=AZUL\t\t 5=ROJA\n"<<endl;
    cin>>bola;
    
    cout<<"\n\nCliente:\t"<<nombre; cout<<"\t"<<apellido<<endl;
    cout<<"Articulo:\t"<<articulo<<endl;
    
    if(bola==1)
    {
    total=compra+0;
    cout<<"\nTotal a pagar:\t"<<total<<endl;
    }
    if(bola==2)
    {
    total1=compra-(compra*0.15);
    cout<<"\nTotal a pagar:\t"<<total1<<endl;
    }
    if(bola==3)
    {
    total2=compra-(compra*0.35);
    cout<<"\nTotal a pagar:\t"<<total2<<endl;
    }
    if(bola==4)
    {
    total3=compra-(compra*0.7);
    cout<<"\nTotal a pagar:\t"<<total3<<endl;
    }
    if(bola==5)
    {
    total4=(compra*1)-compra;
    cout<<"\nTotal a pagar:\t"<<total4<<endl;
    }
    if(bola>5)
    {
    cout<<"\nPor favor ingresa un numero del 1 al 5"<<endl;         
    }
    
    
    getch();
    return 0;
    }
