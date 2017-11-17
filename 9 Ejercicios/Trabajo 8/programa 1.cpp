#include <iostream>

using namespace std;

int main()

{
	int ano,edad;
	char nom[30],prof[30];
	
	cout<<"\n\tIngrese su Nombre\n"<<endl;
	cout<<"\t-->\t";
	cin>>nom;
	
	cout<<"\n\tIngrese su Profesion\n"<<endl;
	cout<<"\t-->\t";
	cin>>prof;
	
	cout<<"\n\tIngrese su Año de Nacimiento\n"<<endl;
	cout<<"\t-->\t";
	cin>>ano;
	
	edad=2015-ano;
	
	cout<<"\n\tNombre:\t\t"<<nom<<endl;
	cout<<"\n\tProfesion:\t"<<prof<<endl;
	if(edad<18)
	cout<<"\n\tEdad:\t\t"<<edad<<"\tMenor de edad\n"<<endl;
	else
	cout<<"\n\tEdad:\t\t"<<edad<<"\tMayor de edad\n"<<endl;
	
	
	
	system("pause");
	return 0;
}
