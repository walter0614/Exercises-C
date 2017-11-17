#include <iostream>

using namespace std;

int main()

{
	int a,b,c;
	
	cout<<"\n\tIngrese el primer numero\n"<<endl;
	cout<<"\t-->\t";
	cin>>a;
	
	cout<<"\n\tIngrese el segundo numero\n"<<endl;
	cout<<"\t-->\t";
	cin>>b;

	cout<<"\n\tIngrese el tercer numero\n"<<endl;
	cout<<"\t-->\t";
	cin>>c;
	
	if(a<b && b<c)
	cout<<"\n\tLos numeros se ingresaron de manera Creciente\n"<<endl;
	else
	cout<<"\n\tLos numeros se ingresaron de manera Decreciente\n"<<endl;
	
	
	
	system("pause");
	return 0;
}
