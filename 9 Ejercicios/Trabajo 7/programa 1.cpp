#include <iostream>

using namespace std;

int main()

{
	int a,b;
	
	cout<<"\n\tIngrese el primer numero A\n"<<endl;
	cout<<"\t-->\t";
	cin>>a;
	
	cout<<"\n\tIngrese el segundo numero B\n"<<endl;
	cout<<"\t-->\t";
	cin>>b;
	
	if(a%2==0 && b%2==0)
	cout<<"\n\tA y B son Pares\n"<<endl;
	
	if(a%2!=0 && b%2==0)
	cout<<"\n\tA es Impar y B es Par\n"<<endl;
	
	if(a%2==0 && b%2!=0)
	cout<<"\n\tA es Par y B es Impar\n"<<endl;
	
	if(a%2!=0 && b%2!=0)
	cout<<"\n\tA y B son Impares\n"<<endl;
	
	system("pause");
	return 0;
}
