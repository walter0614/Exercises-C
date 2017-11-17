#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a,b;
	
	cout<<"\n\tEste algoritmo pide un numero mayor de 100\n"<<endl;
	
	
		
	do{
		b:
		cout<<"\n\tIngrese un numero:\n"<<endl;
		cout<<"\t-->\t";
		cin>>a;
		
	}while(a<=100);
	
	cout<<"\n\tEnhorabuena\n"<<endl;
	cout<<"\n\tEl numero que ingresaste es mayor de cien\n"<<endl;
	getch();
	
}
