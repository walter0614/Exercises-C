#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int top;
	int a,b,numero,c;
	
	cout<<"\n\tEste Algoritmo mostrara los pares e impares que hay entre A y B\n"<<endl;
	
	top:
	
    cout<<"\n\tIngrese un numero (A)\n"<<endl;
    cout<<"\t-->\t";
    cin>>a;
    cout<<"\n\tIngrese otro (B)\n"<<endl;
    cout<<"\t-->\t";
    cin>>b;
    cout<<"\n"<<endl;
    
    numero=a;
    if(a<b){
    	cout<<"\n\tPares"<<endl;
    	while(numero>=a && numero<=b){
    	
		if(numero % 2 == 0)
        	cout<<"\n\t"<<numero<<endl;
            numero++;	
		}
			
	}
	else{
		cout<<"\n\tEl numero A ser menor de B\n\n";
		goto top;
	}
	
	
	numero=a;
	if(a<b){
    	cout<<"\n\tImpares"<<endl;
    	while(numero>=a && numero<=b){
    	
		if(numero % 2 != 0)
        	cout<<"\n\t"<<numero<<endl;
            numero++;	
		}
			
	}
	else{
		cout<<"\n\tEl numero A debe ser menor de B\n\n";
		goto top;
	}
	
 
    getch();
    return 0;
    }
