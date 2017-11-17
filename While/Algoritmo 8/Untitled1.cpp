#include <iostream>
#include <conio.h>

using namespace std;

int main(void)

{
	int i=1,a;
	int mayor,menor;
	int mc=0,neg=0,pos=0;
	float prompos;
		
	do{
		cout<<"\n\tIngrese un numero\t-->\t";
		cin>>a;
		
		if(a>mayor){
			mayor=a;
		}
		if(a<menor){
			menor=a;
		}
		if(a>150){
			mc++;
		}
		if(a<0){
			neg++;
		}
		if(a>0){
			pos++;
		}
		
	i++;
	}while(i<=75);
	
	prompos=(pos*100)/75;
	
	cout<<"\n\tNumero Mayor\t"<<mayor<<endl;
	cout<<"\n\tNumero Menor\t"<<menor<<endl;
	cout<<"\n\tMayor a 150\t"<<mc<<endl;
	cout<<"\n\tPositivos\t"<<pos<<endl;
	cout<<"\n\tNegativos\t"<<neg<<endl;
	cout<<"\n\tPromedio de Postivos\t"<<prompos<<"%"<<endl;
	getch();
	
	
	
}
