#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a=1,b;
	
	cout<<"\n\tEste algoritmo calcula la suma entre 1-10\n"<<endl;
	cout<<"\n\t\t\tPresione Enter"<<endl;
	getch();
		
	while(a<10){
		
		a++;
		
		b=b+a;
	}
	
	cout<<"\n\tLa Suma de 1 al 10 es:\t"<<b<<endl;
	getch();
}
