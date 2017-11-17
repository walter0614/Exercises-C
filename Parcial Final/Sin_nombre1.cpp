#include <iostream>
#include <conio.h>
#include <stdlib.h> 
#include <math.h>

using namespace std;

int main()
{
	int opcion;
	int z=1;
	std::cout<<"\n\t\t ************************";
    std::cout<<"\n\t\t*      55 ALGORITMOS      *";
    std::cout<<"\n\t\t*          HECHO          *";
    std::cout<<"\n\t\t*           POR           *";
    std::cout<<"\n\t\t*                         *";
    std::cout<<"\n\t\t*                         *";
    std::cout<<"\n\t\t*     WALTER GUEVARA      *";
    std::cout<<"\n\t\t*            &            *";
    std::cout<<"\n\t\t*          ARLEY          *";
    std::cout<<"\n\t\t ************************";
    
    std::cout<<"\n\n\t\tPRESIONE ENTER PARA CONTINUAR\n\n";
    getch();
    
   
    
    do{
    	 cout<<"\n\n\t1.PAR E IMPAR		2.MAYOR DE DOS		3.TEMPERATURA"<<endl;
	    cout<<"\t4.+,-,0			5.MAYOR DE 100		6.ORDEN ASCENDENTE"<<endl;
	    cout<<"\t7.ORD DESCENDENTE	8.TRES NUMEROS		9.PAR O IMPAR(2)"<<endl;
	    cout<<"\t10.MAYOR DE EDAD	11.NOTAS		12.RAIZ CUADRADA"<<endl;
	    cout<<"\t13.CALCULA IVA		14.AREA TRIANGULO	15.DOLAR A PESOS"<<endl;
	    cout<<"\t16.NOTA FINAL		17.CONVIERTE C A F	18.CALCULA SUELDO"<<endl;
	    cout<<"\t19.LIBRETA MILITAR	20.PRESTAMISTA		21.IMC PACIAL"<<endl;
	    cout<<"\t22.20 NUMEROS		23.20 AL 40		24.TABLA DEL 2"<<endl;
	    cout<<"\t25.TABLAS		26.ECUACION		27.10 AL 1"<<endl;
	    cout<<"\t28.+ Y - DE 10		29.PRIMOS HASTA N	30.SUMA DIVISORES"<<endl;
	    cout<<"\t31.SUMA 100		32.NUMEROS DE A a B	33.PARES E IMPARES"<<endl;
	    cout<<"\t34.TABLAS 0 A 20	35.MULTIPLOS 7		36.FACTORIAL"<<endl;
	    cout<<"\t37.GENERO		38.PROMEDIO NOTAS	39.MAYOR Y MENOR"<<endl;
	    cout<<"\t40.NUMEROS 1 A 10	41.PROMEDIO DE 20	42.SUMA 10 AL 0"<<endl;
	    cout<<"\t43.PROMEDIO NOTAS(2)	44.NOTAS MATERIAS	45.TABLA DIVISION"<<endl;
	    cout<<"\t46.PROMEDIO BATEO	47.FERRETERIA		48.TECNOLOGICO"<<endl;
	    cout<<"\t49.FOTOCOPIAS		50.PRIMOS A HASTA B	51.TEMPERATURA"<<endl;
	    cout<<"\t52.NOTAS MATERIAS(2)"<<endl;
	    
	    cout<<"\n\t-->\t";cin>>opcion;
	   	cout<<"\n\n"<<endl;
    	
    	
		switch(opcion){
			case 1:
				int a,b;	
					cout<<"\n\tIngrese el primer numero A\n"<<endl;
					cout<<"\t-->\t";
					cin>>a;					
					cout<<"\n\tIngrese el segundo numero B\n"<<endl;
					cout<<"\t-->\t";
					cin>>b;					
					if(a%2==0 && b%2==0)
					cout<<"\n\tA y B son Pares\n"<<endl;					
					if(a%2!=0 && b%2==0)
					cout<<"\n\tA es Impar y B es Par\n"<<endl;					
					if(a%2==0 && b%2!=0)
					cout<<"\n\tA es Par y B es Impar\n"<<endl;					
					if(a%2!=0 && b%2!=0)
					cout<<"\n\tA y B son Impares\n"<<endl;
					break;
			case 2:	
					cout<<"\n\tIngrese el primer numero A\n"<<endl;
					cout<<"\t-->\t";
					cin>>a;					
					cout<<"\n\tIngrese el segundo numero B\n"<<endl;
					cout<<"\t-->\t";
					cin>>b;					
					if(a>b){
						cout<<"\n\tA es mayor que B\n"<<endl;
					}else{
						cout<<"\n\tB es mayor que A\n"<<endl;
					}
					break;
			case 3:
				int temp;
					cout<<"\n\tIngrese la temperatura en grados centigrados\n"<<endl;
					cout<<"\t-->\t";
					cin>>temp;					
					if(temp<25)
					cout<<"\n\tLa temperatura es Fria\n"<<endl;					
					if(temp==25)
					cout<<"\n\tLa temperatura es Calida\n"<<endl;					
					if(temp>25)
					cout<<"\n\tLa temperatura es Caliente\n"<<endl;	
					break;
			case 4:
					cout<<"\n\tIngrese un numero\n"<<endl;
					cout<<"\t-->\t";
					cin>>a;				
					if(a>0)
					cout<<"\n\tEl numero es Positivo\n"<<endl;					
					if(a<0)
					cout<<"\n\tEl numero es Negativo\n"<<endl;					
					if(a==0)
					cout<<"\n\tEl numero es Igual a 0\n"<<endl;
					break;
			case 5:
					cout<<"\n\tIngrese un numero\n"<<endl;
					cout<<"\t-->\t";
					cin>>a;					
					if(a>100)
					cout<<"\n\tEl numero es mayor de 100\n"<<endl;					
					if(a<100) 
					cout<<"\n\tEl numero es menor de 100\n"<<endl;					
					if(a==100)
					cout<<"\n\tEl numero es igual a 100\n"<<endl;
					break;
			case 6:
				int c;	
					cout<<"\n\tIngrese el primer numero\n"<<endl;
					cout<<"\t-->\t";
					cin>>a;					
					cout<<"\n\tIngrese el segundo numero\n"<<endl;
					cout<<"\t-->\t";
					cin>>b;				
					cout<<"\n\tIngrese el tercer numero\n"<<endl;
					cout<<"\t-->\t";
					cin>>c;					
					if(a<b && b<c)
					cout<<"\n\tLos numeros se ingresaron de manera Creciente\n"<<endl;
					else
					cout<<"\n\tLos numeros se ingresaron de manera Decreciente\n"<<endl;
					break;
			case 7:
					cout<<"\n\tIngrese el primer numero\n"<<endl;
					cout<<"\t-->\t";
					cin>>a;					
					cout<<"\n\tIngrese el segundo numero\n"<<endl;
					cout<<"\t-->\t";
					cin>>b;				
					cout<<"\n\tIngrese el tercer numero\n"<<endl;
					cout<<"\t-->\t";
					cin>>c;					
					if(a>b && b>c)
					cout<<"\n\tLos numeros se ingresaron de manera Decreciente\n"<<endl;
					else
					cout<<"\n\tLos numeros se ingresaron de manera Creciente\n"<<endl;
					break;
			case 8:
				int d;
					cout<<"\n\tIngrese el primer numero A\n"<<endl;
					cout<<"\t-->\t";
					cin>>a;					
					cout<<"\n\tIngrese el segundo numero B\n"<<endl;
					cout<<"\t-->\t";
					cin>>b;				
					cout<<"\n\tIngrese el tercer numero C\n"<<endl;
					cout<<"\t-->\t";
					cin>>c;
					d=a+b;					
					if(c==d)
					cout<<"\n\tLa suma de A Y B es igual a C\n"<<endl;
					else 
					cout<<"\n\tLa suma de A Y B es distinta a C\n"<<endl;
					break;
			case 9:
					cout<<"\n\tIngrese el primer numero A\n"<<endl;
					cout<<"\t-->\t";
					cin>>a;					
					cout<<"\n\tIngrese el segundo numero B\n"<<endl;
					cout<<"\t-->\t";
					cin>>b;					
					if(a%2==0 && b%2==0)
					cout<<"\n\tA y B son Pares\n"<<endl;					
					if(a%2!=0 && b%2==0)
					cout<<"\n\tA es Impar y B es Par\n"<<endl;					
					if(a%2==0 && b%2!=0)
					cout<<"\n\tA es Par y B es Impar\n"<<endl;					
					if(a%2!=0 && b%2!=0)
					cout<<"\n\tA y B son Impares\n"<<endl;
					break;
			case 10:
				int ano,edad;
				char nom[30],prof[30];			
					cout<<"\n\tIngrese su Nombre\n"<<endl;
					cout<<"\t-->\t";
					cin>>nom;					
					cout<<"\n\tIngrese su Profesion\n"<<endl;
					cout<<"\t-->\t";
					cin>>prof;					
					cout<<"\n\tIngrese su Año de Nacimiento\n"<<endl;
					cout<<"\t-->\t";
					cin>>ano;					
					edad=2016-ano;					
					cout<<"\n\tNombre:\t\t"<<nom<<endl;
					cout<<"\n\tProfesion:\t"<<prof<<endl;
					if(edad<18)
					cout<<"\n\tEdad:\t\t"<<edad<<"\tMenor de edad\n"<<endl;
					else
					cout<<"\n\tEdad:\t\t"<<edad<<"\tMayor de edad\n"<<endl;
					break;
			case 11:
				double calif;
				int z3;
					z3:
					cout<<"\n\tIngrese su calificacion de 1 a 10\n"<<endl;
					cout<<"\t-->\t";
					cin>>calif;			
					if(calif>=0 && calif<=10){
						if(calif>=9)
						cout<<"\n\tExcelente\n"<<endl;					
						if(calif<9 && calif>=7)
						cout<<"\n\tBueno\n"<<endl;					
						if(calif<7 && calif>=6)
						cout<<"\n\tSuficiente\n"<<endl;					
						if(calif<6)
						cout<<"\n\tReprobado\n"<<endl;
					}else{
						cout<<"\n\tDato Incorrecto\n\n\tLa calificacion debe estar entre 1 a 10\n"<<endl;
						goto z3;
					} 	
					break;
			case 12:
				    cout<<"\n\tEste programa calcula la Raiz Cuadrada de un numero"<<endl;
				    cout<<"\n\tPor favor ingrese un numero A\n"<<endl;
				    cout<<""<<endl;
				    cout<<"\t-->\t";
				    cin>>a;    
				    b=sqrt(a); 
				    cout<<"\n\tLa Raiz Cuadrada de A es\t"<<b;
				    cout<<"\n\n"<<endl;
				    break;
			case 13:
					cout<<"\n\tEste programa calcula el precio de un articulo SIN EL IVA"<<endl;
				    cout<<"\n\tPor favor ingrese el valor del articulo\n"<<endl;
				    cout<<""<<endl;
				    cout<<"\t-->\t";
				    cin>>a;				    
				    b=a*(0.16);
				    c=a-b;			    
				    cout<<"\n\tTotal a pagar SIN IVA\t=\t"<<c;
				    cout<<"\n\n"<<endl;
				    break;
			case 14:
					cout<<"\n\tEste programa calcula el area de un triangulo"<<endl;
				    cout<<"\n\tPor favor ingrese la base en Metros\n"<<endl;
				    cout<<""<<endl;
				    cout<<"\t-->\t";
				    cin>>a;			    
				    cout<<"\n\tPor favor ingrese la altura en Metros\n"<<endl;
				    cout<<""<<endl;
				    cout<<"\t-->\t";
				    cin>>b;			    
				    c=a*b/2;			    
				    cout<<"\n\tEl area del triangulo es\t=\t"<<c;
				    cout<<"\tMetros Cuadrados\n\n"<<endl;
				    break;
			case 15:
				double dolares,pesos,total;
			    int opcion1;
				    cout<<"\n\tDolares a Pesos & Pesos a Dolares\n"<<endl;		    
				    cout<<"\n\tSeleccione una opcion\n"<<endl;
				    cout<<""<<endl;
				    cout<<"\t1. Dolares a Pesos\t2. Pesos a Dolares\n"<<endl;
				    cout<<"\t-->\t";
				    cin>>opcion1;				    
				    switch(opcion1)
				    {
				     case 1:
				     cout<<"\n\tIngrese la cantidad de Dolares\n"<<endl;
				     cout<<"\t-->\t";
				     cin>>dolares;
				     total=dolares*3401;
				     cout<<"\n\tConversion\t=\t"<<total;
				     cout<<"\tPesos Colombianos\n\n"<<endl;
				     break;				     
				     case 2:
				     cout<<"\n\tIngrese la cantidad de Pesos Colombianos\n"<<endl;
				     cout<<"\t-->\t";
				     cin>>pesos;
				     total=pesos/3401;
				     cout<<"\n\tConversion\t=\t"<<total;
				     cout<<"\tDolares\n\n"<<endl;
				     break;				     
				     default:
				     cout<<"\n\tOpcion erronea\n"<<endl;
				    }
				    break;
			case 16:
				double nota1,nota2,nota3,notaf;
				    cout<<"\n\tEncuentra la Nota Final de 1 a 5\n"<<endl;
					int zx5;
					zx5:			    
				    cout<<"\n\tIngrese Nota 1 (30%)\n"<<endl;
				    cout<<"\t-->\t";
				    cin>>nota1;			    
				    if(nota1>5){
				    cout<<"\n\tNota Incorrecta\n"<<endl;
				    goto zx5;
					}
				    if(nota1<=5){
				    	int yw;
				    	yw:
				        cout<<"\n\tIngrese Nota 2 (30%)\n"<<endl;
				        cout<<"\t-->\t";
				        cin>>nota2;				        
				        if(nota2>5){
				        cout<<"\n\tNota Incorrecta\n"<<endl;
						goto yw;
						}
				        if(nota2<=5)
				        {
				        	int pd;
				        	pd:
				            cout<<"\n\tIngrese Nota 3 (40%)\n"<<endl;
				            cout<<"\t-->\t";
				            cin>>nota3;
				            if(nota3>5){
				            cout<<"\n\tNota Incorrecta\n"<<endl;
							goto pd;
							}
				            if(nota3<=5)
				            {
				                notaf=(nota1*0.3)+(nota2*0.3)+(nota3*0.4);				                
				                cout<<"\n\tNota Final\t"<<notaf<<endl;			                
				                if(notaf>=3){
				                cout<<"\n\tAprobaste\n"<<endl;
								}else{cout<<"\n\tReprobaste\n"<<endl;}				                  	                        
				            }
				        }
				    }
				    break;
			case 17:
				double f;
			    int opcion2;
				    cout<<"\n\tFarenheit a Celsius & Celsius a Farenheit\n"<<endl;			    
				    cout<<"\n\tSeleccione una opcion\n"<<endl;
				    cout<<""<<endl;
				    cout<<"\t1. Farenheit a Celsius\t2. Celsius a Farenheit\n"<<endl;
				    cout<<"\t-->\t";
				    cin>>opcion2;				    
				    switch(opcion2)
				    {
				     case 1:
				     cout<<"\n\tIngrese la temperatura en Grados Farenheit\n"<<endl;
				     cout<<"\t-->\t";
				     cin>>f;
				     c=(f-32)*1.8;
				     cout<<"\n\tConversion\t=\t"<<c;
				     cout<<"\tGrados Celsius\n\n"<<endl;
				     break;			     
				     case 2:
				     cout<<"\n\tIngrese la temperatura en Grados Centigrados\n"<<endl;
				     cout<<"\t-->\t";
				     cin>>c;
				     f=c*1.8+32;
				     cout<<"\n\tConversion\t=\t"<<f;
				     cout<<"\tGrados Farenheit\n\n"<<endl;
				     break;				     
				     default:
				     cout<<"\n\tOpcion erronea\n"<<endl;
				    }
				    break;
			case 18:
				int salario,total80;
			    int antiguedad;		    
				    cout<<"\n\tSueldo Mensual Del Trabajor\n"<<endl;
				    cout<<"\n\tElija una opcion(ANOS)\n"<<endl;
				    cout<<"\n\t1.Mas de 10\t\t\t2.Menos de 10 y Mas de 5\n\n\t3.Menos de 5 y mas de 3\t\t4.Menos de 3\n"<<endl;
				    cout<<"\t-->\t";
				    cin>>antiguedad;				    
				    switch(antiguedad)
				    {
				     case 1:
				            cout<<"\n\tIngrese su salario anual\n"<<endl;
				            cout<<"\t-->\t";
				            cin>>salario;
				            total=salario*0.10;
				            total80=salario+total;
				            cout<<"\n\tSu salario Final es de:\n"<<endl;
				            cout<<"\t:\t"<<total80<<endl;
				     break;
				     case 2:
				            cout<<"\n\tIngrese su salario anual\n"<<endl;
				            cout<<"\t-->\t";
				            cin>>salario;
				            total=salario*0.07;
				            total80=salario+total;
				            cout<<"\n\tSu salario Final es de:\n"<<endl;
				            cout<<"\t:\t"<<total80<<endl;
				     break;
				     case 3:
				            cout<<"\n\tIngrese su salario anual\n"<<endl;
				            cout<<"\t-->\t";
				            cin>>salario;
				            total=salario*0.05;
				            total80=salario+total;
				            cout<<"\n\tSu salario Final es de:\n"<<endl;
				            cout<<"\t:\t"<<total80<<endl;
				     break;
				     case 4:
				            cout<<"\n\tIngrese su salario anual\n"<<endl;
				            cout<<"\t-->\t";
				            cin>>salario;
				            total=salario*0.03;
				            total80=salario+total;
				            cout<<"\n\tSu salario Final es de:\n"<<endl;
				            cout<<"\t:\t"<<total80<<endl;
				     break;
				     default:
				             cout<<"\n\tEl dato es Incorrecto\n"<<endl;
				             cout<<"\n"<<endl;			    
				    }
			case 19:
				int sisben,sisben1;
			    double descuento1,descuento2,descuento3,descuento4,descuento5,descuento6,descuento7,descuento8;
			    double total1,total2,total3,total4,total5,total6,total7,total8;			  
				    cout<<"\n\tEste programa le indicara el valor a cancelar y el descuento\n\tPor su libreta militar\n"<<endl;
				    cout<<"\n\tPor favor ingrese su edad\n"<<endl;
				    cout<<"\n\t-->\t";
				    cin>>edad;      
				    if(edad<18){
				    cout<<"\n\tEl usuario no tiene la edad necesaria\n"<<endl;
				    }else{
						    cout<<"\n\tAhora seleccione el nivel de sisben\n"<<endl;
						    cout<<"\n\t1.Nivel 1 \t 2.Nivel 2 \t 3.Nivel 3 \t 4.Otro\n"<<endl;
						    cout<<"\n\t-->\t";
						    cin>>sisben;		    
						    if(edad>18)
						    {
						    	switch(sisben)
							    {
								    case 1:
								         descuento1=350000*0.4;
								         total1=350000-descuento1;
								         cout<<"\n\tDescuento:\t"<<descuento1<<endl;;
								         cout<<"\n\tTotal a pagar:\t"<<total1<<endl;
								         cout<<"\n"<<endl;
								    break;
								    case 2:
								         descuento2=350000*0.3;
								         total2=350000-descuento2;
								         cout<<"\n\tDescuento:\t"<<descuento2<<endl;;
								         cout<<"\n\tTotal a pagar:\t"<<total2<<endl;
								         cout<<"\n"<<endl;
								    break;
								    case 3:
								         descuento3=350000*0.15;
								         total3=350000-descuento3;
								         cout<<"\n\tDescuento:\t"<<descuento3<<endl;;
								         cout<<"\n\tTotal a pagar:\t"<<total3<<endl;
								         cout<<"\n"<<endl;
								    break;
								    case 4:
								         descuento4=0;
								         total4=350000-descuento4;
								         cout<<"\n\tDescuento:\t"<<descuento4<<endl;;
								         cout<<"\n\tTotal a pagar:\t"<<total4<<endl;
								         cout<<"\n"<<endl;
								    break;
							    }
							}	    
						    if(edad==18)
							{
							    switch(sisben)
							    {
								    case 1:
								         descuento5=200000*0.6;
								         total5=200000-descuento5;
								         cout<<"\n\tDescuento:\t"<<descuento5<<endl;;
								         cout<<"\n\tTotal a pagar:\t"<<total5<<endl;
								         cout<<"\n"<<endl;
								    break;
								    case 2:
								         descuento6=200000*0.4;
								         total6=200000-descuento6;
								         cout<<"\n\tDescuento:\t"<<descuento6<<endl;;
								         cout<<"\n\tTotal a pagar:\t"<<total6<<endl;
								         cout<<"\n"<<endl;
								    break;
								    case 3:
								         descuento7=200000*0.2;
								         total7=200000-descuento7;
								         cout<<"\n\tDescuento:\t"<<descuento7<<endl;;
								         cout<<"\n\tTotal a pagar:\t"<<total7<<endl;
								         cout<<"\n"<<endl;
								    break;
								    case 4:
								         descuento8=0;
								         total8=200000-descuento8;
								         cout<<"\n\tDescuento:\t"<<descuento8<<endl;;
								         cout<<"\n\tTotal a pagar:\t"<<total8<<endl;
								         cout<<"\n"<<endl;
								    break;
							    }	
							}	    
				   		}
			case 20:
				char nombre[30],apellido[30],direccion[30],nombrea[30];
			    int top,dias2,dias3,dias4,dias5,dias6,dias7,cantidad2,cantidad3;
			    int tel;
			    int dias;
			    int cantidad;
			    int cfb;
			    int interes;
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
				    break;
			case 21:
				float peso,altura,imc;   
				    cout<<"\n\tBienvenido, este programa calculara su IMC\n"<<endl;
				    cout<<"\n\tPor favor ingrese su Peso(En Kg)\n"<<endl;
				    cout<<"\t-->\t";
				    cin>>peso;
				    cout<<"\n\tPor favor ingrese su Altura(En Metros (NO EN CM))\n"<<endl;
				    cout<<"\t-->\t";
				    cin>>altura;				  
				    imc=peso/(altura*altura);				    				   
				    if(imc<16)
				    {
				              cout<<"\n\tVALOR DE IMC:\n"<<endl;
				              cout<<"\n\t"<<imc;
				              cout<<"\n"<<endl;
				              cout<<"\n\tDIAGNOSTICO:\n"<<endl;
				              cout<<"\n\tCriterio de Ingreso en Hospital\n"<<endl;
				    }
				    if(imc>=16 && imc<17)
				    {
				              cout<<"\n\tVALOR DE IMC:\n"<<endl;
				              cout<<"\n\t"<<imc;
				              cout<<"\n"<<endl;
				              cout<<"\n\tDIAGNOSTICO:\n"<<endl;
				              cout<<"\n\tInfrapeso\n"<<endl;
				    }
				    if(imc>=17 && imc<18)
				    {
				              cout<<"\n\tVALOR DE IMC:\n"<<endl;
				              cout<<"\n\t"<<imc;
				              cout<<"\n"<<endl;
				              cout<<"\n\tDIAGNOSTICO:\n"<<endl;
				              cout<<"\n\tBajo Peso\n"<<endl;
				    }
				    if(imc>=18 && imc<25)
				    {
				              cout<<"\n\tVALOR DE IMC:\n"<<endl;
				              cout<<"\n\t"<<imc;
				              cout<<"\n"<<endl;
				              cout<<"\n\tDIAGNOSTICO:\n"<<endl;
				              cout<<"\n\tPeso Normal(Saludable)\n"<<endl;
				    }
				    if(imc>=25 && imc<30)
				    {
				              cout<<"\n\tVALOR DE IMC:\n"<<endl;
				              cout<<"\n\t"<<imc;
				              cout<<"\n"<<endl;
				              cout<<"\n\tDIAGNOSTICO:\n"<<endl;
				              cout<<"\n\tSobrepeso(Obesidad Grado I)\n"<<endl;
				    }
				    if(imc>=30 && imc<35)
				    {
				              cout<<"\n\tVALOR DE IMC:\n"<<endl;
				              cout<<"\n\t"<<imc;
				              cout<<"\n"<<endl;
				              cout<<"\n\tDIAGNOSTICO:\n"<<endl;
				              cout<<"\n\tSobrepeso Cronico(Obesidad Grado II)\n"<<endl;
				    }
				    if(imc>=35 && imc<40)
				    {
				              cout<<"\n\tVALOR DE IMC:\n"<<endl;
				              cout<<"\n\t"<<imc;
				              cout<<"\n"<<endl;
				              cout<<"\n\tDIAGNOSTICO:\n"<<endl;
				              cout<<"\n\tObesidad Premorbida(Obesidad Grado III)\n"<<endl;
				    }
				    if(imc>=40)
				    {
				              cout<<"\n\tVALOR DE IMC:\n"<<endl;
				              cout<<"\n\t"<<imc;
				              cout<<"\n"<<endl;
				              cout<<"\n\tDIAGNOSTICO:\n"<<endl;
				              cout<<"\n\tObesidad Morbida(Obesidad Grado IV)\n"<<endl;
				    }				
				    getch(); 
					break;
			case 22:
				int i;
					for(i=1;i<=20;i++){
				    cout<<"\n\tIngrese A\n"<<endl;
				    cout<<"\t-->\t";
				    cin>>a;				    
				    b=b+a;
				    }
				    total=b/20;
				    cout<<"\n\tB=\t"<<total<<endl;
				    getch();
				    break;					
			case 23:
					for(i=20;i<=40;i++){    
				    cout<<"\n\t-->\t"<<i;
				    }
				    getch();
				    break;
			case 24:
					for(i=0;i<=10;i++){
				    b=i*2;
				    cout<<"\n\tB=\t"<<b<<endl;
				    }
				    cout<<"\n"<<endl;
				    getch();
				    break;
			case 25:
					cout<<"\n\tIngrese A\n"<<endl;
				    cout<<"\t-->\t";
				    cin>>a;
				    for(i=0;i<=10;i++){
				    b=i*a;
				    cout<<"\n\tB=\t"<<b<<endl;
				    }
				    cout<<"\n"<<endl;
				    break;
			
					
			
			
	    
	    
	    
				
				
		}
		
		
		
		cout<<"\n\tPresione Cualquier Tecla Para Ir Al Menu\tPresion 0 Para Salir\n"<<endl;
		cout<<"\t-->\t";cin>>z;
		    	
	}while(z!=0);
}
