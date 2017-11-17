#include <iostream>
#include <conio.h>

using namespace std;

int main()


{
    char nombre[30],apellido[30],direccion[30],nombrea[30];
    int top,dias2,dias3,dias4,dias5,dias6,dias7,cantidad2,cantidad3;
    int tel;
    int edad;
    int dias;
    int cantidad;
    int cfb;
    int total,total1,interes;
    int diario,tf,rs;
      
  	cout<<"\n\tBienvenido a Multicreditos\n"<<endl;
    cout<<"\n\tIngrese el nombre del Usuario\n"<<endl;
    cout<<"\t-->\t";
    cin>>nombre;
    
    cout<<"\n\n"<<endl;
    cout<<"\n\tIngrese el apellido del Usuario\n"<<endl;
    cout<<"\t-->\t";
    cin>>apellido;
    
    cout<<"\n\n"<<endl;
    cout<<"\n\tIngrese el telefono del Usuario\n"<<endl;
    cout<<"\t-->\t";
    cin>>tel;
    
    cout<<"\n\n"<<endl;
    cout<<"\n\tIngrese la direccion del Usuario\n"<<endl;
    cout<<"\t-->\t";
    cin>>direccion;
    
    cout<<"\n\n"<<endl;
    cout<<"\n\tIngrese el nombre del Asesor\n"<<endl;
    cout<<"\t-->\t";
    cin>>nombrea;
    
    cout<<"\n\n"<<endl;
    cout<<"\n\tIngrese la edad de\t"<<nombre<<endl;
    cout<<"\n\t-->\t";
    cin>>edad;
    
    if(edad>18 && edad<71)
    {
               cout<<"\n\n"<<endl;
               cout<<"\n\tEl Usuario Cuenta con la Edad Necesaria\n"<<endl;
               getch();
               
    /*---------------------------------------------------------------------------------------------------------------------------------*/           
               
               if(edad==19 || edad==70)
               {
               			   cantidad2:
                           cout<<"\n\n"<<endl;
                           cout<<"\n\tNo podra acceder a un prestamo menor a 50.000 ni mayor a 500.000 \n"<<endl;
                           cout<<"\n\tPor Favor ingrese la cantidad de dinero que desea\n"<<endl;
                           cout<<"\t-->\t";
                           cin>>cantidad;
               
               
                   if(cantidad>500000 || cantidad<50000)
                   {
                                     cout<<"\n\tEsta cantidad NO se encuentra dentro del rango\n"<<endl;
                                     goto cantidad2;          
                   }        
                   if(cantidad>=50000 && cantidad<100000)
                   {
                                      cout<<"\n\tEsta cantidad se encuentra dentro del rango\n"<<endl;
                                      total1=cantidad*0.05;
                                      total=cantidad+total1;
                                      cfb=1000000-cantidad;
                                      getch();
                                      
                                      dias2:
                                      cout<<"\n\tMaximo de dias 60\n"<<endl;
                                      cout<<"\n\tIngrese la cantidad de dias que desea como plazo:\n"<<endl;
                                      cout<<"\t-->\t";
                                      cin>>dias;
                                      
                                      diario=total/dias;
                                      
                                      if(dias>60)
                                      {
                                                 cout<<"\n\tEsta cantidad NO se encuentra dentro del rango\n"<<endl;
                                      goto dias2;
                                      }                            
                   }
                   
                   if(cantidad>=100000 && cantidad<=500000)
                   {
                                      cout<<"\n\tEsta cantidad se encuentra dentro del rango\n"<<endl;
                                      total1=cantidad*0.1;
                                      total=cantidad+total1;
                                      cfb=1000000-cantidad;
                                      getch();
                                      
                                      dias3:
                                      cout<<"\n\tMaximo de dias 60\n"<<endl;
                                      cout<<"\n\tIngrese la cantidad de dias que desea como plazo:\n"<<endl;
                                      cout<<"\t-->\t";
                                      cin>>dias;
                                      
                                      diario=total/dias;
                                      
                                      if(dias>60)
                                      {
                                                 cout<<"\n\tEsta cantidad NO se encuentra dentro del rango\n"<<endl;
                                      goto dias3;
                                      } 
                   }
                   cout<<"\n\tMulticreditos Acepto Tu Solicutud\n"<<endl;
	               cout<<"\n\tNombre:\t\t\t"<<nombre;
	               cout<<"\n\tApellido:\t\t"<<apellido; 
	               cout<<"\n\tTelefono:\t\t"<<tel;
	               cout<<"\n\tDireccion:\t\t"<<direccion;  
	               cout<<"\n\tAsesor:\t\t\t"<<nombrea; 
	               cout<<"\n\tValor Intereses:\t"<<total1;
	               cout<<"\n\tValor Pedido:\t\t"<<cantidad;
	               cout<<"\n\tDias de Plazo:\t\t"<<dias;
	               cout<<"\n\tPago por Dia:\t\t"<<diario;
	               cout<<"\n\tTotal Prestado:\t\t"<<total;
	               cout<<"\n\tResiduo Banco:\t\t"<<cfb;
                   goto top;
               }
/*-----------------------------------------------------------------------------------------------------------------------------------------*/            
 			   cantidad3:
               cout<<"\n\tPrestamos Desde 50.000 Hasta 1.000.000\n"<<endl;
               cout<<"\n\tPor Favor ingrese la cantidad de dinero que desea\n"<<endl;
               cout<<"\t-->\t";
               cin>>cantidad;
               
               if(cantidad<50000 || cantidad>1000000)
               {
                                 cout<<"\n\tEsta cantidad NO se encuentra dentro del rango\n"<<endl;
                                 goto cantidad3;           
               }
               
               if(cantidad>=50000 && cantidad<100000)
               {
                                  cout<<"\n\tEsta cantidad se encuentra dentro del rango\n"<<endl;
                                  total1=cantidad*0.05;
                                  total=cantidad+total1;
                                  cfb=1000000-cantidad;
                                  getch();
                                  
								  dias4:    
                                  cout<<"\n\tMaximo de dias 60\n"<<endl;
                                  cout<<"\n\tIngrese la cantidad de dias que desea como plazo:\n"<<endl;
                                  cout<<"\t-->\t";
                                  cin>>dias;
                                  
                                  diario=total/dias;
                                  
                                  if(dias>60)
                                  {
                                             cout<<"\n\tEsta cantidad NO se encuentra dentro del rango\n"<<endl;
                                  goto dias4;
                                  }                         
               }
               
               if(cantidad>=100000 && cantidad<500000)
               {
                                  cout<<"\n\tEsta cantidad se encuentra dentro del rango\n"<<endl;
                                  total1=cantidad*0.1;
                                  total=cantidad+total1;
                                  cfb=1000000-cantidad;
                                  getch();
                                  
								  dias5:    
                                  cout<<"\n\tMaximo de dias 60\n"<<endl;
                                  cout<<"\n\tIngrese la cantidad de dias que desea como plazo:\n"<<endl;
                                  cout<<"\t-->\t";
                                  cin>>dias;
                                  
                                  diario=total/dias;
                                  
                                  if(dias>60)
                                  {
                                             cout<<"\n\tEsta cantidad NO se encuentra dentro del rango\n"<<endl;
                                  goto dias5;
                                  }   
               }
               
               if(cantidad>=500000 && cantidad<700000)
               {
                                  cout<<"\n\tEsta cantidad se encuentra dentro del rango\n"<<endl;
                                  total1=cantidad*0.15;
                                  total=cantidad+total1;
                                  cfb=1000000-cantidad;
                                  getch();
                                  
								  dias6:    
                                  cout<<"\n\tMaximo de dias 60\n"<<endl;
                                  cout<<"\n\tIngrese la cantidad de dias que desea como plazo:\n"<<endl;
                                  cout<<"\t-->\t";
                                  cin>>dias;
                                  
                                  diario=total/dias;
                                  
                                  if(dias>60)
                                  {
                                             cout<<"\n\tEsta cantidad NO se encuentra dentro del rango\n"<<endl;
                                  goto dias6;
                                  }  
               }
               
               if(cantidad>=700000 && cantidad<=1000000)
               {
                                  cout<<"\n\tEsta cantidad se encuentra dentro del rango\n"<<endl;
                                  total1=cantidad*0.2;
                                  total=cantidad+total1;
                                  cfb=1000000-cantidad;
                                  getch();
                                  
								  dias7:    
                                  cout<<"\n\tMaximo de dias 60\n"<<endl;
                                  cout<<"\n\tIngrese la cantidad de dias que desea como plazo:\n"<<endl;
                                  cout<<"\t-->\t";
                                  cin>>dias;
                                  
                                  diario=total/dias;
                                  
                                  if(dias>60)
                                  {
                                             cout<<"\n\tEsta cantidad NO se encuentra dentro del rango\n"<<endl;
                                  goto dias7;
                                  }   
               }
               
               cout<<"\n\tMulticreditos Acepto Tu Solicutud\n"<<endl;
               cout<<"\n\tNombre:\t\t\t"<<nombre;
               cout<<"\n\tApellido:\t\t"<<apellido; 
               cout<<"\n\tTelefono:\t\t"<<tel;
               cout<<"\n\tDireccion:\t\t"<<direccion;  
               cout<<"\n\tAsesor:\t\t\t"<<nombrea; 
               cout<<"\n\tValor Intereses:\t"<<total1;
               cout<<"\n\tValor Pedido:\t\t"<<cantidad;
               cout<<"\n\tDias de Plazo:\t\t"<<dias;
               cout<<"\n\tPago por Dia:\t\t"<<diario;
               cout<<"\n\tTotal Prestado:\t\t"<<total;
               cout<<"\n\tResiduo Banco:\t\t"<<cfb;
               
                                 
    }
    
    else 
    cout<<"\n\tEl Usuario No cuenta con la Edad Suficiente\n"<<endl;
    
    
    top:
    
    getch();
    return 0;
}
