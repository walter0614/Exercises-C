#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i=1,tipo;
	char nombre[30];
	float ma,mb,total,des,neto;
	
	cout<<"\n\t\t\t***FERRETERIA***\n"<<endl;
	
	do{
		int top;
		
		cout<<"\n\n\tNombre:\t";cin>>nombre;
			top:
		cout<<"\n\tSeleccione el tipo de Cable\t\n"<<endl;
		cout<<"\n\t1.Tipo A (200 Bs Mt)\t2.Tipo B (300 Bs Mt)\n"<<endl;
		cout<<"\n\t-->\t";cin>>tipo;
		
		switch(tipo){
			case 1:
				cout<<"\n\tIngrese la cantidad de Metros que desea:\t";cin>>ma;
				if(ma>=100){
					total=ma*200;
					des=total*0.1;
					neto=total-des;
				}
				if(ma<100){
					neto=ma*200;
				}	
				
				break;
			case 2:
				cout<<"\n\tIngrese la cantidad de Metros que desea:\t";cin>>mb;
				if(mb>=100){
					total=mb*300;
					des=total*0.1;
					neto=total-des;
				}
				if(mb<100){
					neto=mb*200;
				}
				break;
			default:cout<<"\n\tDATO INCORRECTO\n\n"<<endl;
					goto top;		
		}
			cout<<"\n\tNombre:\t"<<nombre<<endl;
			cout<<"\n\tTotal a pagar:\t"<<neto<<"Bs"<<endl;
			
			cout<<"\n\n\t1.Desea Continuar\t2.Desea Salir\n"<<endl;
			cout<<"\n\t-->\t";cin>>i;
			
		 			
	}while(i!=2);
	
	getch();
	return 0;
}
