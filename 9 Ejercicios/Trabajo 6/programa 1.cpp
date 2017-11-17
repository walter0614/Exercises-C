#include <iostream>

using namespace std;

int main()

{
	int a,b,c,d;
	
	cout<<"\n\tIngrese el primer numero A\n"<<endl;
	cout<<"\t-->\t";
	cin>>a;
	
	cout<<"\n\tIngrese el segundo numero B\n"<<endl;
	cout<<"\t-->\t";
	cin>>b;

	cout<<"\n\tIngrese el tercer numero C\n"<<endl;
	cout<<"\t-->\t";
	cin>>c;
	
	d=a+b;
	
	if(c==d)
	cout<<"\n\tLa suma de A Y B es igual a C\n"<<endl;
	else 
	cout<<"\n\tLa suma de A Y B es distinta a C\n"<<endl;
	
	system("pause");
	return 0;
}
