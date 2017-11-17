#include <iostream.h>

int main()
{
    char nombre[30];
    char apellido[30];
    char direccion[30];
    char telefono[30];
    int a,b,c;
    
    cout<<"Digite su nombre "<<endl;
    cin>>nombre;
    cout<<"Digite su apellido "<<endl;
    cin>>apellido;
    cout<<"Digite su direccion, sin espacios "<<endl;
    cin>>direccion;
    cout<<"Digite su telefono "<<endl;
    cin>>telefono;
    cout<<"Digite la fecha actual "<<endl;
    cin>>a;
    cout<<"Digite la fecha de nacimiento "<<endl;
    cin>>b;
    cout<<"Su nombre es "<<nombre<<endl;
    cout<<"Su apellido es "<<apellido<<endl;
    cout<<"Su direccion es "<<direccion<<endl;
    cout<<"Su telefono es "<<telefono<<endl;
    c=a-b;
    cout<<"Su edad actual es "<<c<<endl;
    
    system("pause");
    return 0;
    }
