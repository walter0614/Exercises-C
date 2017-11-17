#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i=1,x;
	float vb,hit,ext,s,bb;
	float pb,bbc,vlb;
	
	char nombre[30];
	
	cout<<"\n\t\t\t***PROMEDIO DE BATEO***\n"<<endl;
	
	do{
		 pb=0;
		 bbc=0;
		 vlb=0;
			cout<<"\n\n\n\tJugador\t"<<i<<endl;
			cout<<"\n\tIngrese su nombre:\t";cin>>nombre;
			cout<<"\n\tVeces al bate:\t";cin>>vb;
			cout<<"\n\tHit conectados:\t";cin>>hit;
			cout<<"\n\tExtrabases conectadas:\t";cin>>ext;
			cout<<"\n\tCantidad de sacrificios:\t";cin>>s;
			cout<<"\n\tCantidad de bases por bolas recibidas:\t";cin>>bb;
			
			vlb=vb-s-bb;
			bbc=hit*ext;
			pb=bbc/(vlb*1000);
			
			cout<<"\n\tJugador:\t"<<nombre;
			cout<<"\n\tPromedio de bateo:\t"<<pb;			
		i++;
	}while(i<=40);
	
	getch();
	return 0;
}
