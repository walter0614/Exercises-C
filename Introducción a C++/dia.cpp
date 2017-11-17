#include <iostream.h>
#include <conio.h>

int main()

{
        double dia, mes, ano;


    cout<<"\nDame el dia:\t"<<endl;
    cin>>dia;
    cout<<"\nDame el mes:\t"<<endl;
    cin>>mes;
    cout<<"\nDame el ano:\t"<<endl;
    cin>>ano;

    dia=dia+1;

    if(dia>31)
    {
       dia=1;
        mes=mes+1;
    }
        if(mes>12)
        {
        mes=1;
        ano=ano+1;
        }
          cout<<"\nLa fecha un dia despues es:\tdia:\t"<<dia;
          cout<<"\tmes:\t"<<mes;
          cout<<"\tano:\t"<<ano;


    getch();
    return 0;
}
