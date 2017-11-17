#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int top;
	int a,b,i;
	
	cout<<"\n\tEste Algoritmo mostrara los numeros que hay entre A y B\n"<<endl;
	
	top:
	
    cout<<"\n\tIngrese un numero (A)\n"<<endl;
    cout<<"\t-->\t";
    cin>>a;
    cout<<"\n\tIngrese otro (B)\n"<<endl;
    cout<<"\t-->\t";
    cin>>b;
    cout<<"\n"<<endl;
    
    
    if(a<b){
    	for(i=a;i<=b;i++){
    		cout<<"\t\t"<<i<<endl;
		}
    	
    	
	}
	else{
		cout<<"\n\tEl numero A debe ser menor de B\n\n";
		goto top;
	}
    
    
	
		

 
    getch();
    return 0;
    }
