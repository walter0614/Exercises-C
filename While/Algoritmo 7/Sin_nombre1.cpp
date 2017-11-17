#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int x=-3,y;
	
	cout<<"\n\tEste algoritmo evalua la funcion: Y=-3X+5X+X\n"<<endl;
	cout<<"\n\t\t\tPresione Enter"<<endl;
	getch();
	
	
		
	do{
		y=-3*x+5*x+x;
		cout<<"\n\tY=\t"<<y<<endl;
		x++;
	}while(x<=10);
	
	
		getch();
}
