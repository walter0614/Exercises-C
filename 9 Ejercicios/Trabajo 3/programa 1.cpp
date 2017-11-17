#include <iostream>

using namespace std;

int main()

{
	int a;
	
	cout<<"\n\tIngrese un numero\n"<<endl;
	cout<<"\t-->\t";
	cin>>a;
	
	if(a>100)
	cout<<"\n\tEl numero es mayor de 100\n"<<endl;
	
	if(a<100) 
	cout<<"\n\tEl numero es menor de 100\n"<<endl;
	
	if(a==100)
	cout<<"\n\tEl numero es igual a 100\n"<<endl;
	
	
	
	system("pause");
	return 0;
}
