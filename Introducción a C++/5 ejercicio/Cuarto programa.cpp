#include <iostream.h>
#include <conio.h>

int main()

{
    double llantas,llanta,total;
    double llanta1,total1;
    double llanta2,total2;

    cout<<"---ESTE PROGRAMA DA EL VALOR POR UNIDAD Y EL TOTAL DE LA COMPRA---"<<endl;

    cout<<"\n\nDigite la cantidad de llantas que va a comprar:\n"<<endl;
    cin>>llantas;

    if(llantas<5)
    {
        llanta=300;
        total=llantas*llanta;
        cout<<"\nEl valor de cada llanta es:\t"<<llanta<<endl;
        cout<<"\nTotal a pagar:\t\t\t"<<total<<endl;
    }
    if(llantas>=5 && llantas<=10)
    {
        llanta1=250;
        total1=llantas*llanta1;
        cout<<"\nEl valor de cada llanta es:\t"<<llanta1<<endl;
        cout<<"\nTotal a pagar:\t\t\t"<<total1<<endl;
    }
    if(llantas>10)
    {
        llanta2=200;
        total2=llantas*llanta2;
        cout<<"\nEl valor de cada llanta es:\t"<<llanta2<<endl;
        cout<<"\nTotal a pagar:\t\t\t"<<total2<<endl;
    }

    getch();
    return 0;
}
