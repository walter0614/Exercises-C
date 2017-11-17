#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a=1,b;
	double c;
	
	cout<<"\n\tEste algoritmo muestra la tabla division de A\n"<<endl;
	cout<<"\n\tIngrese un numero (A)\n"<<endl;
	cout<<"\t-->\t";
	cin>>b;
		
	while(a<=10){
		
		c=b/a;
		
		cout<<"\n\t-->\t"<<b<<"\t/\t"<<a<<"\t=\t"<<c<<"\n"<<endl;
		
		a++;
	}
	getch();
}
