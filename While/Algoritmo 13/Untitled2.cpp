#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=1,a=1;
    int cod,tipo;
    float promediof=0,promedio=0;
    float copias=0,carta=0,oficio=0;
    float valor,oficiof=0,cartaf=0;
    long mayor=999999999;
    cout<<"\n\t\t\t***EMPRESA DE REPRODUCCION***\n"<<endl;
    do{
        cout<<"\n\n\n\tCodigo del cliente:\t";cin>>cod;
        cout<<"\n\tTipo de copias\t"<<endl;
        int top;
        top:
        cout<<"\n\t1.Carta\t\t2.Oficio\t3.Extraoficio\n"<<endl;
        cout<<"\n\t-->\t";cin>>tipo;
        cout<<"\n\tCantidad de copias:\t";cin>>copias;
        switch(tipo){
            case 1:
                carta=copias;
                cartaf=carta+cartaf;
                valor=copias*50;
                break;
            case 2:
                oficio=copias;
                oficiof=oficio+oficiof;
                valor=copias*70;             
                break;
            case 3:
                valor=copias*100;
                break;
            default:cout<<"\n\tDATO INCORRECTO\n\n"<<endl;
					goto top; 
        }
        if(valor<mayor){
            mayor=cod;
            }
        
        cout<<"\n\tCodigo cliente:\t"<<cod;
        cout<<"\n\tTotal a pagar:\t"<<valor;
                
        cout<<"\n\n\t1.Desea Continuar\t2.Desea Salir\n"<<endl;
		cout<<"\n\t-->\t";cin>>i; 
		
		promedio=promedio+valor;
        promediof=promedio/a;
        a++;
    }while(i!=2);
    
    
    cout<<"\n\tTotal copias carta:\t"<<cartaf;
    cout<<"\n\tTotal copias oficio:\t"<<oficiof;
    cout<<"\n\tUsuario que mas pago:\t"<<mayor;
    cout<<"\n\tPromedio de ventas:\t"<<promediof;
    
    getch();
    return 0;
}
