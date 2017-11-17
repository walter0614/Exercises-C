#include <iostream.h>
#include <conio.h>

int main()
{
    double d, m, a,edad;


    cout<<"\n\tHOROSCOPO\n"<<endl;

    cout<<"\nDame el dia de nacimiento:\n"<<endl;
    cin>>d;

    cout<<"\nDame el mes (EN NUMERO) de nacimiento:\n"<<endl;
    cin>>m;

    cout<<"\nDame el ano de nacimiento:\n"<<endl;
    cin>>a;

    edad=2015-a;

    if(edad<6)
    {
              cout<<"\n\t***CONTROL PARENTAL***\n"<<endl;
              }
if(edad>5)
 {
    if(d>=21 && d<32 && m==3 || d<21 && m==4)
    {
             cout<<"\nSu signo es aries"<<endl;
             }
    if(d>=21 && d<32 && m==4 || d<20 && m==5)
    {
             cout<<"\nSu signo es tauro"<<endl;
             }
    if(d>=20 && d<32 && m==5 || d<22 && m==6)
    {
             cout<<"\nSu signo es geminis"<<endl;
             }
    if(d>=22 && d<32 && m==6 || d<22 && m==7)
    {
             cout<<"\nSu signo es cancer"<<endl;
             }
    if(d>=22 && d<32 && m==7 || d<24 && m==8)
    {
             cout<<"\nSu signo es leo"<<endl;
             }
    if(d>=24 && d<32 && m==8 || d<22 && m==9)
    {
             cout<<"\nSu signo es virgo"<<endl;
             }
    if(d>=22 && d<32 && m==9 || d<23 && m==10)
    {
             cout<<"\nSu signo es libra"<<endl;
             }
    if(d>=23 && d<32 && m==10 || d<23 && m==11)
    {
             cout<<"\nSu signo es escorpion"<<endl;
             }
    if(d>=23 && d<32 && m==11 || d<22 && m==12)
    {
             cout<<"\nSu signo es sagitario"<<endl;
             }
    if(d>=22 && d<32 && m==12 || d<21 && m==1)
    {
             cout<<"\nSu signo es capricornio"<<endl;
             }
    if(d>=21 && d<32 && m==1 || d<20 && m==2)
    {
             cout<<"\nSu signo es acuario"<<endl;
             }
    if(d>=20 && d<32 && m==2 || d<21 && m==3)
    {
             cout<<"\nSu signo es piscis"<<endl;
             }
    if(d>31)
    {
            cout<<"\nPor favor digite un DIA que se encuentre dentro del calendario\n"<<endl;
            }

    if(m>12)
    {
            cout<<"Por favor digite un MES que se encuentre dentro del calendario\n"<<endl;
            }

    edad=2015-a;
    cout<<"Su edad actual es:\t"<<edad<<endl;

    if(edad>=18)
    {
         cout<<"Ustes es mayor de edad\n"<<endl;
                }
    else
    {
         cout<<"Usted es menor de edad\n"<<endl;
        }

 }

    getch();
    return 0;
    }
