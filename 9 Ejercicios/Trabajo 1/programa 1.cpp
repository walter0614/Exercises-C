#include <iostream>

using namespace std;

int main()

{
	int temp;
	
	cout<<"\n\tIngrese la temperatura en grados centigrados\n"<<endl;
	cout<<"\t-->\t";
	cin>>temp;
	
	if(temp<25)
	cout<<"\n\tLa temperatura es Fria\n"<<endl;
	
	if(temp==25)
	cout<<"\n\tLa temperatura es Calida\n"<<endl;
	
	if(temp>25)
	cout<<"\n\tLa temperatura es Caliente\n"<<endl;
	
	
	
	
	system("pause");
	return 0;
}
