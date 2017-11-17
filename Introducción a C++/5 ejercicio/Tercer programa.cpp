#include <iostream.h>
#include <conio.h>

int main()
{
    double computadora,total,total1,total2,totalcompu,valor=11000;
    char nombre[30],apellido[30];

    cout<<"\n---ESTE PROGRAMA CALCULA EL VALOR DE LA COMPRA INCLUYENDO EL DESCUENTO---"<<endl;

    cout<<"\n\nDigite su nombre:"<<endl;
    cin>>nombre;
    cout<<"\nDigite su apellido:"<<endl;
    cin>>apellido;
    cout<<"\n\nDigite la cantidad de computadoras que va a comprar:\n"<<endl;
    cin>>computadora;

    cout<<"\n\nCliente:\t"<<nombre; cout<<"\t"<<apellido<<endl;

    totalcompu=(computadora*11000);

    if(computadora<5)
    {
        total=totalcompu-(totalcompu*0.1);
        cout<<"Total a pagar:\t"<<total<<endl;
    }
    if(computadora>=5 && computadora<10)
    {
        total1=totalcompu-(totalcompu*0.2);
        cout<<"Total a pagar:\t"<<total1<<endl;
    }
    if(computadora>=10)
    {
        total2=totalcompu-(totalcompu*0.4);
        cout<<"Total a pagar:\t"<<total2<<endl;
    }



    getch();
    return 0;
}
