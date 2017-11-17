#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int top;
    int a,i,b=0;
    
    cout<<"\n\tEste Algoritmo calcula la suma de los divisores\n"<<endl;
    
    top:
    
    cout<<"\n\tIngrese un numero\n"<<endl;
    cout<<"\t-->\t";
    cin>>a;
    cout<<"\n";
    if(a>0){
    	
    	for(i=1;i<=a;i++){
    		if(a%i==0){
    			
    			cout<<"\t\t"<<i<<endl;
    			b=b+i;
			}
		}
    	
	cout<<"\n\tLa Suma de los divisores de\t"<<a;cout<<"\tes\t"<<b<<endl;
	
	
	}
	else{
		cout<<"\n\tEl numero debe ser mayor a cero\n\n";
		goto top;
	}
		

 
    getch();
    return 0;
    }
