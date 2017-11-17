#include <iostream>

using namespace std;

int main()

{
	int a;
	
	cout<<"\n\tIngrese un numero\n"<<endl;
	cout<<"\t-->\t";
	cin>>a;
	
	if(a>0)
	cout<<"\n\tEl numero es Positivo\n"<<endl;
	
	if(a<0)
	cout<<"\n\tEl numero es Negativo\n"<<endl;
	
	if(a==0)
	cout<<"\n\tEl numero es Igual a 0\n"<<endl;
	
	
	
	
	system("pause");
	return 0;
}
