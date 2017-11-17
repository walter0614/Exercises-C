#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a=10;
	
	cout<<"\n\tEste algoritmo muestra los numeros del 10-1\n"<<endl;
	cout<<"\n\t\t\tPresione Enter"<<endl;
	getch();
		
	while(a>=1){
		
		cout<<"\n\t\t\t\t"<<a<<endl;
		a--;
	}
	getch();
}
