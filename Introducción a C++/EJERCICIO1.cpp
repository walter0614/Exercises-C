#include <iostream.h>
#include <conio.h>

int main()
{
    int proteina,carbohidrato,ensalada,sopa;

    cout<<"\n\t\t\tBIENVENIDO AL RESTAURANTE WALTER\n"<<endl;
    cout<<"\n\t\t\tEl DIA DE HOY LE LE OFRECEMOS:\n"<<endl;
    cout<<"PROTEINA:"<<endl;
    cout<<"\n1.Carne \t 2.Pollo \t 3.Pezcado\n"<<endl;
    cin>>proteina;
    cout<<"\nCARBOHIDRATO:"<<endl;
    cout<<"\n1.Papa \t\t 2.Pasta \t 3.Arroz\n"<<endl;
    cin>>carbohidrato;
    cout<<"\nENSALADA:"<<endl;
    cout<<"\n1.Tropical \t 2.Normal \t 3.Frutas\n"<<endl;
    cin>>ensalada;
    cout<<"\nSOPA:"<<endl;
    cout<<"\n1.Ajiaco \t 2.Mute \t 3.Crema\n"<<endl;
    cin>>sopa;
    cout<<"\n\tSU ALMUERZO ES EL SIGUIENTE:\n"<<endl;
    switch(proteina)
    {
    case 1:cout<<"\nProteina: Carne"<<endl;
    break;
    case 2:cout<<"\nProteina: Pollo"<<endl;
    break;
    case 3:cout<<"\nProteina: Pescado"<<endl;
    break;
    default: cout<<"\nProteina: Dato incorrecto"<<endl;
    }
    switch(carbohidrato)
    {
    case 1:cout<<"\nCarbohidrato: Papa"<<endl;
    break;
    case 2:cout<<"\nCarbohidrato: Pasta"<<endl;
    break;
    case 3:cout<<"\nCarbohidrato: Arroz"<<endl;
    break;
    default: cout<<"\nCarbohidrato: Dato incorrecto"<<endl;
    }
    switch(ensalada)
    {
    case 1:cout<<"\nEnsalada: Tropical"<<endl;
    break;
    case 2:cout<<"\nEnsalada: Normal"<<endl;
    break;
    case 3:cout<<"\nEnsalada: Frutas"<<endl;
    break;
    default: cout<<"\nEnsalada: Dato incorrecto"<<endl;
    }
    switch(sopa)
    {
    case 1:cout<<"\nSopa: Ajiaco"<<endl;
    break;
    case 2:cout<<"\nSopa: Mute"<<endl;
    break;
    case 3:cout<<"\nSopa: Crema"<<endl;
    break;
    default: cout<<"\nSopa: Dato incorrecto"<<endl;
    }



    getch();
    return 0;
    }
