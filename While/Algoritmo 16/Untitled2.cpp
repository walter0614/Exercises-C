#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=1; 
    int mat,est,inf;
    float totalmat,totalest,totalinf;
    float prominf;
    int contmat=0,mayor=1,menor=5;
    
    cout<<"\n\t\t***MATEMATICAS,ESTADISTICA E INFORMATICA***\n"<<endl;
    cout<<"\t\t\t\tNotas de 1 a 5\n\n"<<endl;
    do{
    	int top;
    	top:
    		mat=0;est=0;inf=0;
    	cout<<"\n\tAlumno\t"<<i<<endl;
    	cout<<"\n\tNota de Matematicas:\t";cin>>mat;
    	cout<<"\n\tNota de Estadistica:\t";cin>>est;
    	cout<<"\n\tNota de Informatica:\t";cin>>inf;
    	if(mat<1 || mat>5 || est<1 || est>5 || inf<1 || inf>5){
    		cout<<"\n\tINGRESASTE ALGUNA NOTA INCORRECTA\n\n"<<endl;
    		goto top;
		}else{
			totalmat=totalmat+mat;
			totalest=totalest+est;
			totalinf=totalinf+inf;prominf=totalinf/10;
			if(mat>=3){
			contmat++;
			}
			if(est>=mayor){
				mayor=est;
			}
			if(inf<menor){
				menor=inf;
			}
		}
		
    	i++;
    	
	}while(i<=10);
	
	cout<<"\n\tAprobados en Matematicas\t"<<contmat;
	cout<<"\n\tNota mayor en Estadistica\t"<<mayor;
	cout<<"\n\tPromedio de Informatica:\t"<<prominf;
	cout<<"\n\tNota menor en Informatica\t"<<menor;
    
    
    
    
    getch();
    return 0;
}
