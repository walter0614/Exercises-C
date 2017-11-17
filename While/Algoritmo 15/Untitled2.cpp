#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=1,x=0,temp,menor=0,mayor;
    float tmayor=0,tmenor=0,promedio=0;
    
    cout<<"\n\t\t\t***TEMPERATURA***\n"<<endl;
    
    do{
    	int top;
    	top:
    	cout<<"\n\tIngrese una temperatura en Celsius:\t";cin>>temp;
    	
    	if(temp>100 || temp<-15){
    		cout<<"\n\tDATO INCORRECTO\n"<<endl;
    		cout<<"\tCelsius -15 a 100\n\n"<<endl;
    		goto top;
		}else{
			if(temp>mayor){
				mayor=temp;
			}
			if(temp<mayor){
				menor=temp;
			}
			x++;		
			tmayor=tmayor+temp;		
			promedio=tmayor/x;	
		}
		
    	cout<<"\n\n\t1.Desea Continuar\t2.Desea Salir\n"<<endl;
		cout<<"\n\t-->\t";cin>>i;
		
		
	}while(i!=2);
	
	cout<<"\n\tTemperatura Mayor:\t"<<mayor<<"\tGrados Celsius";
	cout<<"\n\tTemperatura Menor:\t"<<menor<<"\tGrados Celsius";	
	cout<<"\n\tTemperatura Promedio:\t"<<promedio<<"\tGrados Celsius";
	
    
    
    getch();
    return 0;
}
