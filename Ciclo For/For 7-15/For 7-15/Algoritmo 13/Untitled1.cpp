#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i,a,b;
	
	cout<<"\n\tEste Algoritmo mostrara las tablas de multiplicar 0-10\n"<<endl;
	cout<<"\n\tPresione Enter para continuar\n"<<endl;
	getch();
	
	for(i=0;i<=10;i++){
		for(a=0;a<=10;a++){
			b=a*i;
			cout<<"\t\t"<<b<<endl;
		}
		cout<<"\n\tPresione Enter para continuar\n"<<endl;
		getch();
	}
 
    getch();
    return 0;
    }
