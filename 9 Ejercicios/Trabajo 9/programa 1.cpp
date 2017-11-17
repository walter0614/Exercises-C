#include <iostream>

using namespace std;

int main()

{
	double calif;
	
	cout<<"\n\tIngrese su calificacion de 1 a 10\n"<<endl;
	cout<<"\t-->\t";
	cin>>calif;
	
	if(calif>=0 && calif<=10)
	{
		if(calif>=9)
	cout<<"\n\tExcelente\n"<<endl;
	
	if(calif<9 && calif>=7)
	cout<<"\n\tBueno\n"<<endl;
	
	if(calif<7 && calif>=6)
	cout<<"\n\tSuficiente\n"<<endl;
	
	if(calif<6)
	cout<<"\n\tReprobado\n"<<endl;
	}
	else 
	cout<<"\n\tDato Incorrecto\n\n\tLa calificacion debe estar entre 1 a 10\n"<<endl;
	
	
	
	
	
	
	system("pause");
	return 0;
}
