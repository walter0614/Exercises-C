#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int datos;
    float z,b,c,p;
    double d, m, a,edad;
    int hora,segundo,minuto;

    cout<<"\t\t\t\tMULTIPLES TAREAS\n"<<endl;
    cout<<"\t\t\tSELECCIONE UNA TAREA\n"<<endl;
    cout<<"\n 1.HOROSCOPO\t\t2.HORA 1 SEG DESPUES\t\t3.CALCULA EL PROMEDIO\n"<<endl;
    cin>>datos;


    switch(datos){

    case 1:
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
    break;
    case 2:

    printf("Dame los segundos:\t");
    scanf("%d",&segundo);
    printf("Dame los minutos:\t");
    scanf("%d",&minuto);
    printf("Dame las horas:\t\t");
    scanf("%d",&hora);


segundo=segundo+1;

if(segundo>60)
{
    cout<<"\nDATOS INCORRECTOS"<<endl;
}
else
{
    if(segundo>59)
{
    segundo=0;
    minuto=minuto+1;
}
if(minuto>59)
{
    minuto=0;
    hora=hora+1;
}
if(hora>23)
{
    hora=0;
}
printf("La hora despues de un segundo es: %d : %d : %d",hora,minuto,segundo);
}

    break;
    case 3:
    cout<<"\nDame tu primer calificacion: "<<endl;
    cin>>z;
    cout<<"Dame tu segunda calificacion: "<<endl;
    cin>>b;
    cout<<"Dame tu tercer calificacion: "<<endl;
    cin>>c;
    p=(z+b+c)/3;
    cout<<"Tu promedio es de: \n"<<p<<endl;
    if(p>=30)
    {
      cout<<"Aprobaste la materia"<<endl;
            }
    else
    {
      cout<<"Reprobaste la materia"<<endl;
         }
    break;
    default: cout<<"\nINGRESASTE UN NUMERO INCORRECTO"<<endl;
}



    getch();
    return 0;






    }
