#include <iostream.h>
#include <conio.h>

int main()
{
    double d,m;
    cout<<"Digite su dia de nacimiento "<<endl;
    cin>>d;
    cout<<"Digite su mes de nacimiento "<<endl;
    cin>>m;
    
     
    if(d>=21 && d<32 && m==3 || d<=19 && m==4)
    cout<<"Aries"<<endl;   
    if(d>=20 && d<32 &&  m==4 || d<=20 && m==5)
    cout<<"Tauro"<<endl;
    if(d>=21 && d<32 &&  m==5 || d<=20 && m==6)
    cout<<"Geminis"<<endl;
    if(d>=21 && d<32 &&  m==6 || d<=22 && m==7)
    cout<<"Cancer"<<endl;
    if(d>=23 && d<32 &&  m==7 || d<=22 && m==8)
    cout<<"Leo"<<endl;
    if(d>=23 && d<32 &&  m==8 || d<=22 && m==9)
    cout<<"Virgo"<<endl;
    if(d>=23 && d<32 &&  m==9 || d<=23 && m==10)
    cout<<"Libra"<<endl;
    if(d>=24 && d<32 &&  m==10 || d<=22 && m==11)
    cout<<"Escorpion"<<endl;
    if(d>=23 && d<32 &&  m==11 || d<=21 && m==12)
    cout<<"Sagitario"<<endl;
    if(d>=22 && d<32 &&  m==12 || d<=19 && m==1)
    cout<<"Capricornio"<<endl;
    if(d>=20 && d<32 &&  m==1 || d<=18 && m==2)
    cout<<"Acuario"<<endl;
    if(d>=19 && d<32 &&  m==2 || d<=20 && m==3)
    cout<<"Piscis"<<endl;
    
    if(d>31)
    cout<<"Por favor digite un dia que se encuentre dentro del calendario"<<endl;
    if(m>12)
    cout<<"Por favor digite un mes que se encuentre dentro del calendario"<<endl;
            
    getch();
    return 0;
    }
