#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int a,i,b;
	
	cout<<"\n\tEste Algoritmo calcula el factorial de A\n"<<endl;
	
	cout<<"\n\tIngrese un numero(A)\n"<<endl;
	cout<<"\t-->\t";
	cin>>a;
	
	b=a;
	
	i=a-1;
	
	for(i;i>0;i--){		
		b=b*i;
	}
	
	cout<<"\n\tEl Factorial de\t"<<a;cout<<"\tes\t"<<b<<endl;
	
	
	getch();
	return 0;
}
