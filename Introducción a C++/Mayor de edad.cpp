#include <iostream.h>
#include <conio.h>

using namespace std;

int main()

{
    double a,b=2015,c,d=365,total;

    cout<<"***ESTE ES UN PROGRAMA QUE COMPRUEBA SI EL USUARIO ES MAYOR DE EDAD***\n"<<endl;
    cout<<"Por favor indique su año de nacimiento:\n"<<endl;
    cin>>a;

    c=b-a;
    total=c*d;


    if(c>=18)
    {
        cout<<"\n***Usted es mayor de edad***\n"<<endl;
    }

    else
    {
        cout<<"\n***Usted NO es mayor de edad***\n"<<endl;
    }
    cout<<"Su edad actual es:\t"<<c<<endl;
    cout<<"\nTotal de dias vividos:\t"<<total<<endl;



    getch();
    return 0;
}
