#include <iostream.h>
#include <conio.h>

int main()
{
    double respuesta,respuesta1,respuesta2;

    cout<<"---ACONTINUACION TENDRA QUE RESOLVER LAS SIGUIENTES PREGUNTAS---"<<endl;

    cout<<"\nColon descubrio America? "<<endl;
    cout<<"\n1.SI \t 2.NO\n"<<endl;
    cin>>respuesta;

    if(respuesta==1)
    {
        cout<<"\nLa respuesta es correcta."<<endl;
    }
    else
    {
        cout<<"\nLa respuesta es incorrecta."<<endl;
    }
    getch();

    cout<<"\nLa independencia de Mexico fue en 1810?  "<<endl;
    cout<<"\n1.SI \t 2.NO\n"<<endl;
    cin>>respuesta1;

    if(respuesta1==1)
    {
        cout<<"\nLa respuesta es correcta."<<endl;
    }
    else
    {
        cout<<"\nLa respuesta es incorrecta."<<endl;
    }
    getch();

    cout<<"\nThe Doors fue un grupo de rock Americano? "<<endl;
    cout<<"\n1.SI \t 2.NO\n"<<endl;
    cin>>respuesta2;

     if(respuesta2==1)
    {
        cout<<"\nLa respuesta es correcta."<<endl;
    }
    else
    {
        cout<<"\nLa respuesta es incorrecta."<<endl;
    }

    getch();
    return 0;
}
