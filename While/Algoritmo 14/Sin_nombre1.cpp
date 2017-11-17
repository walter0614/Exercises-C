
#include <stdlib.h> 
#include <conio.h> 
#include <iostream> 

using namespace std;

int main() 
{ 
 
	int i,y,min, max,count=0,primo=1; 
	ldiv_t resultado; 

	cout<<"\n\t\t***PRIMOS DE A HASTA B***\n"<<endl;
	int top;
	top:
	cout<<"\tIngrese un numero A:\n"<<endl;
    cout<<"\t-->\t"; 
	cin>>min; 
    cout<<"\n\n"; 
    cout<<"\tIngrese un numero B:\n"<<endl;
    cout<<"\t-->\t"; 
	cin>>max; 
    cout<<"\n\n";
	
	if(min>max){
		cout<<"\n\tA debe ser Menor que B\n\n"<<endl;
		goto top;
	}else{
		for(i=min; i<max ; i++){ 
		
			for(y=2; y<9; y++){ 
			resultado = ldiv( i, y ); 
			if (resultado.rem==0){primo=0;} 
			if(i==1||i==2||i==3||i==5||i==7)primo=1; 
			}
			if (primo==1) 
			{ 
			cout<<"\t\t"<<i<<endl;
			count=count+1; 
			} 
			primo=1; 
		}	
	} 

	
	
	getch(); 
} 
