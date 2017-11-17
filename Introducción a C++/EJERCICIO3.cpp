#include <iostream.h>
#include <conio.h>

int main()

{top:
    int a,b,c,menu,opcion;

    cout<<"\n\t\t\t\tCALCULADORA"<<endl;
    cout<<"\t\t\tPor favor seleccione una opcion:\n"<<endl;
    cout<<"1.Suma\t\t2.Resta\t\t3.Multiplicacion\t\t4.Division\n"<<endl;
    cin>>opcion;

    switch(opcion){
        case 1:
        cout<<"\nIngrese el primer numero:\n"<<endl;
        cin>>a;
        cout<<"\nIngrese el segundo numero:\n"<<endl;
        cin>>b;
        c=a+b;
        cout<<"\nEl resultado es:\t"<<c;
        break;
        case 2:
        cout<<"\nIngrese el primer numero:\n"<<endl;
        cin>>a;
        cout<<"\nIngrese el segundo numero:\n"<<endl;
        cin>>b;
        c=a-b;
        cout<<"\nEl resultado es:\t"<<c;
        break;
        case 3:
        cout<<"\nIngrese el primer numero:\n"<<endl;
        cin>>a;
        cout<<"\nIngrese el segundo numero:\n"<<endl;
        cin>>b;
        c=a*b;
        cout<<"\nEl resultado es:\t"<<c;
        break;
        case 4:
        cout<<"\nIngrese el primer numero:\n"<<endl;
        cin>>a;
        cout<<"\nIngrese el segundo numero:\n"<<endl;
        cin>>b;
        c=a/b;
        cout<<"\nEl resultado es:\t"<<c;
        break;
        default:cout<<"\n\nDATO INCORRECTO\n"<<endl;

        }
        cout<<"\n\n\n\tELIJA UNA OPCION"<<endl;
        cout<<"\n1.Volver al menu\t2.Salir\n"<<endl;
        cin>>menu;

        switch(menu){
            case 1: goto top;
    }






    return 0;
}
