#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i=1;
    int cedula,proc,valor,recaudo=0;
    char nombre[30];
    
    cout<<"\n\t\t\t***TECNOLOGICO***\n"<<endl;
    
    do{
        cout<<"\n\tCedula:\t";cin>>cedula;
        cout<<"\n\tNombre:\t";cin>>nombre;
        cout<<"\n\tProcedencia\n"<<endl;
        int top;
            top:
        cout<<"\n\t1.Alumno del Tecnologico\t2.Docente del Tecnologico\n"<<endl;
        cout<<"\n\t3.Publico en General\n"<<endl;
        cout<<"\n\t-->\t";cin>>proc;
        
        switch(proc){
            case 1:
                valor=10000;
                break;
            case 2:
                valor=20000;
                break;
            case 3:
                valor=35000;
                break;
            default:cout<<"\n\tDATO INCORRECTO\n\n"<<endl;
					goto top; 
              
        }
        recaudo=recaudo+valor; 
        cout<<"\n\n\t1.Desea Continuar\t2.Desea Salir\n"<<endl;
		cout<<"\n\t-->\t";cin>>i;  
    }while(i!=2);
    
    cout<<"\n\tRecaudo del Instituto:\t"<<recaudo<<endl;
    getch();
    return 0;
}
