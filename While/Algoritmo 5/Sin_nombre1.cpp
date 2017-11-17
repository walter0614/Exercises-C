#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a=1,b,c=1,suma=0,prom;
	int d;
	
	cout<<"\n\tEste algoritmo calcula el Promedio de 10 notas\n"<<endl;
	cout<<"\n\t\tLas Notas deben ser del 1-10\n"<<endl;
	
		
	while(a<=10){
		
		d:
		cout<<"\n\tIngrese la nota\t"<<c<<"\n"<<endl;
		cout<<"\t-->\t";
		cin>>b;	
		
		if(b>=1 && b<=10){
			suma=suma+b;
			c++;	
			a++;
		}
		else{
			cout<<"\n\tDato incorrecto\n";goto d;
		}
	}
	prom=suma/10;
	cout<<"\n\tLa suma de las 10 Notas es:\t"<<suma<<endl;
	cout<<"\n\tEl promedio de las 10 Notas es:\t"<<prom<<endl;
	getch();
}
