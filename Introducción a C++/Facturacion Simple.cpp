#include <iostream.h>
#include <conio.h>

int main()
{
    char nombre[30];
    char identificacion[30];
    char articulo[30];
    
  
    double iva;
    double producto;
    double total,total2;
    double descuento;
    
    cout<<"Digite su nombre y apellido (SIN ESPACIOS):\n"<<endl;
    cin>>nombre;
    cout<<"Digite su numero de identificacion:\n"<<endl;
    cin>>identificacion;
    cout<<"Digite el nombre del articulo que desea comprar:\n"<<endl;
    cin>>articulo;
    cout<<"Digite el valor del producto que desea comprar:\n"<<endl;
    cin>>producto;
    
    iva=(producto*0.19);
    total=iva+producto;
    
    
    if(producto>1300)
    { 
     descuento=total*0.04;
     total2=producto-descuento;
     
     cout<<"\n***RECIBO DE CAJA***"<<endl;
     cout<<"Usuario:\n"<<nombre<<endl;
     cout<<"Numero de identificacion:\n"<<identificacion<<endl;
     cout<<"Articulo:\n"<<articulo<<endl;
     cout<<"Total a pagar con IVA y DESCUENTO:\n"<<total2<<endl;
                  
                     }
    else 
    {
    cout<<"\n\n***RECIBO DE CAJA***"<<endl;
    cout<<"Usuario:\n"<<nombre<<endl;
    cout<<"Numero de identificacion:\n"<<identificacion<<endl;
    cout<<"Articulo:\n"<<articulo<<endl;
    cout<<"Total a pagar con IVA:\n"<<total<<endl;
         
         }
         
    cout<<"\n***GRACIAS POR SU COMPRA***";

    
    
    
    getch();
    return 0;
    }
