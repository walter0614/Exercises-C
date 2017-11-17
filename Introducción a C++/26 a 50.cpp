#include <iostream.h>
#include <conio.h>
#include <math.h>
#define pi 3.14159




int main()
{inicio:
    int opcion,inicio;
    double d, m, a,edad;//case 26
    double numero,a1,b1;//case 27
    long int a2=0,b2=0,c2=0;//case 28
    double a3,b3,c3,a4,b4,c4,a5,b5,c5,a6,b6,c6,a7,b7,c7,a8;//case 29
    float perimetro,area,radio;//case 30
    double volumen,volumen1,radio1;//case 31
    double ca,cb,hp;//case 32
    double f,c9;//case 33
    double f10,c10;//case 34
    double na,nb,nc,nf;//case 35
    double na1,nb1,nc1,nd1,nf1;//case 36
    int i=0,y;//case 37
    int edad1,edad2,edad3,promedio;//case 38
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;//case 39
    int i1,r=0,tr=0,tv=0,ta=0;//case 40
    int sexo;
    double puntaje=0;
    double contm=0;
    double puntm=0;
    double contf=0;
    double puntf=0;
    double promh,promm;//case 41
    int menu=0;
     long double pasajeros=0;
     long double aut=0;
     long double pauto=0;
     long double bus=0;
     long double pbus=0;//case 42
     int numero3,numero2,residuo,mcd;//case 43
     double cop,usd=2896,total;//case 44
     float cop1=2896,usd1,total1;//case 45
     float euro,usd2=1.07,total2;//case 46
       float euro3=0.93,usd3,total3;//case 47
       int libra,kg;//case 49
       int categoria,horas10,total10,menu10;//case 50



    cout<<"\n\t\t\tPROGRAMAS WALTER:<<26 - 50>>"<<endl;
    cout<<"\n26.Signo Zodiacal\t27.Numeros del 1-X\t28.Suma del 1-X"<<endl;
    cout<<"\n29.Suma de residuos\t30.Circulo<A & P>\t31.Volumen esfera"<<endl;
    cout<<"\n32.Calcula hipotenusa\t33.Fahrenheit a Celsius\t34.Celsius a Fahrenheit"<<endl;
    cout<<"\n35.Nota final\t\t36.Nota final <2>\t37.Funcion"<<endl;
    cout<<"\n38.Promedio edades\t39.Solo positivos\t40.Gusto del publico"<<endl;
    cout<<"\n41.Mejor promedio M & F\t42.Peaje\t\t43.MCD"<<endl;
    cout<<"\n44.Pesos a Dolares\t45.Dolares a Pesos\t46.Euros a Dolares"<<endl;
    cout<<"\n47.Dolares a Euros\t48.Implementos deportes\t49.Libras a Kilogramos"<<endl;
    cout<<"\n50.Sueldo mensual\t\t0.SALIR\n"<<endl;
    cout<<"\n\n\t\t\tSELECCIONE UNA OPCION:\t";
    cin>>opcion;
    cout<<"\n\n"<<endl;

    switch(opcion)
    {
        case 26:cout<<"\n\tHOROSCOPO\n"<<endl;

    cout<<"\nDame el dia de nacimiento:\n"<<endl;
    cin>>d;

    cout<<"\nDame el mes (EN NUMERO) de nacimiento:\n"<<endl;
    cin>>m;

    cout<<"\nDame el ano de nacimiento:\n"<<endl;
    cin>>a;

    edad=2015-a;

    if(edad<6)
    {
              cout<<"\n\t***CONTROL PARENTAL***\n"<<endl;
              }
if(edad>5)
 {
    if(d>=21 && d<32 && m==3 || d<21 && m==4)
    {
             cout<<"\nSu signo es aries"<<endl;
             }
    if(d>=21 && d<32 && m==4 || d<20 && m==5)
    {
             cout<<"\nSu signo es tauro"<<endl;
             }
    if(d>=20 && d<32 && m==5 || d<22 && m==6)
    {
             cout<<"\nSu signo es geminis"<<endl;
             }
    if(d>=22 && d<32 && m==6 || d<22 && m==7)
    {
             cout<<"\nSu signo es cancer"<<endl;
             }
    if(d>=22 && d<32 && m==7 || d<24 && m==8)
    {
             cout<<"\nSu signo es leo"<<endl;
             }
    if(d>=24 && d<32 && m==8 || d<22 && m==9)
    {
             cout<<"\nSu signo es virgo"<<endl;
             }
    if(d>=22 && d<32 && m==9 || d<23 && m==10)
    {
             cout<<"\nSu signo es libra"<<endl;
             }
    if(d>=23 && d<32 && m==10 || d<23 && m==11)
    {
             cout<<"\nSu signo es escorpion"<<endl;
             }
    if(d>=23 && d<32 && m==11 || d<22 && m==12)
    {
             cout<<"\nSu signo es sagitario"<<endl;
             }
    if(d>=22 && d<32 && m==12 || d<21 && m==1)
    {
             cout<<"\nSu signo es capricornio"<<endl;
             }
    if(d>=21 && d<32 && m==1 || d<20 && m==2)
    {
             cout<<"\nSu signo es acuario"<<endl;
             }
    if(d>=20 && d<32 && m==2 || d<21 && m==3)
    {
             cout<<"\nSu signo es piscis"<<endl;
             }
    if(d>31)
    {
            cout<<"\nPor favor digite un DIA que se encuentre dentro del calendario\n"<<endl;
            }

    if(m>12)
    {
            cout<<"Por favor digite un MES que se encuentre dentro del calendario\n"<<endl;
            }

    edad=2015-a;
    cout<<"Su edad actual es:\t"<<edad<<endl;

    if(edad>=18)
    {
         cout<<"Ustes es mayor de edad\n"<<endl;
                }
    else
    {
         cout<<"Usted es menor de edad\n"<<endl;
        }

 }
         break;
        case 27:
            cout<<"\n\tESTE PROGRAMA LE MOSTRARA LOS NUMEROS DEL 1 A X\n"<<endl;

    cout<<"\nINGRESE UN NUMERO:\t";
    cin>>numero;

    cout<<"\nNUMEROS:"<<endl;

    for(a1=1;a1<=numero;a1++){
        cout<<"\n\t\t\t"<<a1<<endl;
    }
    break;

        case 28:
             cout<<"\n\tESTE PROGRAMA LE DARA LA SUMA DE LOS NUMEROS DEL 1 A X\n"<<endl;

    cout<<"\nINGRESE UN NUMERO:\t";
    cin>>a2;

    for(b2=1;b2<=a2;b2++){
            c2=b2+c2;
        cout<<"\n\t"<<c2;
    }
    break;

        case 29:
            cout<<"\n\tESTE PROGRAMA SUMARA EL COCIENTE DE CINCO DIVISIONES\n"<<endl;

    cout<<"\n\nPRIMERA DIVISION:"<<endl;

    cout<<"\nDame el numero dividendo:\t";
    cin>>a3;

    cout<<"\nDame el numero divisor:\t\t";
    cin>>b3;

    c3=a3/b3;

    cout<<"\nEl cociente de la primera division es:\t"<<c3<<endl;

    cout<<"\n\nSEGUNDA DIVISION:"<<endl;

    cout<<"\nDame el numero dividendo:\t";
    cin>>a4;

    cout<<"\nDame el numero divisor:\t\t";
    cin>>b4;

    c4=a4/b4;

    cout<<"\nEl cociente de la segunda division es:\t"<<c4<<endl;

    cout<<"\n\nTERCERA DIVISION:"<<endl;

    cout<<"\nDame el numero dividendo:\t";
    cin>>a5;

    cout<<"\nDame el numero divisor:\t\t";
    cin>>b5;

    c5=a5/b5;

    cout<<"\nEl cociente de la tercera division es:\t"<<c5<<endl;

    cout<<"\n\nCUARTA DIVISION:"<<endl;

    cout<<"\nDame el numero dividendo:\t";
    cin>>a6;

    cout<<"\nDame el numero divisor:\t\t";
    cin>>b6;

    c6=a6/b6;

    cout<<"\nEl cociente de la cuarta division es:\t"<<c6<<endl;

    cout<<"\n\nQUINTA DIVISION:"<<endl;

    cout<<"\nDame el numero dividendo:\t";
    cin>>a7;

    cout<<"\nDame el numero divisor:\t\t";
    cin>>b7;

    c7=a7/b7;

    cout<<"\nEl cociente de la quinta division es:\t"<<c7<<endl;

    a8=c3+c4+c5+c6+c7;


    cout<<"\n\n"<<endl;
    cout<<"\nTOTAL:"<<endl;
    cout<<"\nLa suma de los cocientes es:\t"<<a8<<endl;
    break;

        case 30:
            cout<<"\n\tESTE PROGRAMA CALCULA EL PERIMETRO Y EL AREA DE UN CIRCULO\n"<<endl;
    cout<<"\nDAME EL RADIO:\t";
    cin>>radio;

    perimetro=radio*pi*2;
    area=(radio*radio)*pi;

    cout<<"\n\n"<<endl;
    cout<<"\nEL PERIMETRO ES:\t"<<perimetro;
    cout<<"\n\n"<<endl;
    cout<<"\nEL AREA ES:\t"<<area;
    break;

        case 31:
            cout<<"\n\tESTE PROGRAMA CALCULA EL VOLUMEN DE UNA ESFERA\n"<<endl;
    cout<<"\nDAME EL RADIO:\t";
    cin>>radio1;

    volumen=4*pi*(radio1*radio1*radio1)/3;


    cout<<"\n\n"<<endl;
    cout<<"\nEL VOLUMEN ES:\t"<<volumen;
    break;

        case 32:
            cout<<"\n\tESTE PROGRAMA CALCULA LA HIPOTENUSA DE UN TRIANGULO RECTANGULO\n"<<endl;
    cout<<"\nDAME EL CATETO A:\t";
    cin>>ca;

    cout<<"\nDAME EL CATETO A:\t";
    cin>>cb;

    hp=((ca*ca)+(cb*cb));

    cout<<"\n\nLA HIPOTENUSA ES:\t"<<sqrt(hp)<<endl;
    break;

        case 33:
            cout<<"\n\tESTE PROGRAMA CONVIERTE LOS GRADOS DE FAHRENHEIT A CELSIUS\n"<<endl;
    cout<<"\nINGRESE LOS GRADOS FAHRENHEIT:\t";
    cin>>c9;

    f=(c9-32)*5/9;

    cout<<"\n\n"<<endl;

    cout<<"\n\t"<<c9;
    cout<<"   GRADOS FAHRENHEIT SON IGUALES A:   "<<f;
    cout<<"   GRADOS CELSIUS"<<endl;
    break;

        case 34:
            cout<<"\n\tESTE PROGRAMA CONVIERTE LOS GRADOS DE CELSIUS A FAHRENHEIT\n"<<endl;
    cout<<"\nINGRESE LOS GRADOS CELSIUS:\t";
    cin>>c10;

    f10=(1.8*c10)+32;

    cout<<"\n\n"<<endl;

    cout<<"\n\t"<<c10;
    cout<<"   GRADOS CELSIUS SON IGUALES A:   "<<f10;
    cout<<"   GRADOS FAHRENHEIT"<<endl;
    break;

        case 35:
            cout<<"\n\tESTE PROGRAMA LE DARA SU NOTA FINAL DE 1 A 5\n"<<endl;
    cout<<"\nTENGA EN CUENTA QUE LOS PORCENTAJES SON LOS SIGUIENTES"<<endl;
    cout<<"\nNota1:  30%\tNota2:  30%\tNota3:  40%"<<endl;
    cout<<"\n\nNota1:\t";cin>>na;
    if(na>50)
        cout<<"\n\nDATO INCORRECTO"<<endl;
    else{
    cout<<"\n\nNota2:\t";cin>>nb;
     if(nb>50)
        cout<<"\n\nDATO INCORRECTO"<<endl;
        else{
          cout<<"\n\nNota3:\t";cin>>nc;
           if(nc>50)
            cout<<"\n\nDATO INCORRECTO"<<endl;
             else{
                nf=(na*0.3)+(nb*0.3)+(nc*0.4);
                cout<<"\n\nSU NOTA FINAL ES:\t"<<nf<<endl;
             }
        }

    }
    break;

        case 36:
            cout<<"\n\tESTE PROGRAMA LE DARA SU NOTA FINAL DE 1 A 5\n"<<endl;
    cout<<"\nTENGA EN CUENTA QUE LOS PORCENTAJES SON LOS SIGUIENTES"<<endl;
    cout<<"\nNota1:  20%\tNota2:  20%\tNota3:  10%\tNota4:  50%"<<endl;
    cout<<"\n\nNota1:\t";cin>>na1;
    if(na1>50)
        cout<<"\n\nDATO INCORRECTO"<<endl;
    else{
    cout<<"\n\nNota2:\t";cin>>nb1;
     if(nb1>50)
        cout<<"\n\nDATO INCORRECTO"<<endl;
        else{
          cout<<"\n\nNota3:\t";cin>>nc1;
           if(nc1>50)
            cout<<"\n\nDATO INCORRECTO"<<endl;
             else{
               cout<<"\n\nNota4:\t";cin>>nd1;
                 if(nd1>50)
                   cout<<"\n\nDATO INCORRECTO"<<endl;
                    else{
                      nf1=(na1*0.2)+(nb1*0.2)+(nc1*0.1)+(nd1*0.5);
                        cout<<"\n\nSU NOTA FINAL ES:\t"<<nf1<<endl;
                    }
             }
        }

    }
    break;
        case 37:
             cout<<"\nESTE PROGRAMA EVALUA LA FUNCION y=5/3x+3/2x+8\n";
    cout<<"\n\t\tCUANDO X -> -5...20\n\n\n"<<endl;

    for(i=-5;i<=20;i++)
    {
        y=((5.0/3*i)+(3.0/2*i))+8;
        cout<<"\n\tx=\t"<<i;cout<<"\t\ty=\t"<<y;

                        }
    break;

        case 38:
            cout<<"\n\t\tESTE PROGRAMA LE DARA EL PROMEDIO DE TRES EDADES\n"<<endl;
    cout<<"\n\nEDAD 1:\t";cin>>edad1;
    cout<<"\n\nEDAD 2:\t";cin>>edad2;
    cout<<"\n\nEDAD 3:\t";cin>>edad3;

    promedio=(edad1+edad2+edad3)/3;

    cout<<"\n\nEL PROMEDIO DE EDADES ES:\t"<<promedio<<endl;
    break;
        case 39:
            cout<<"\n\t\tESTE PROGRAMA LE DARA SOLO LOS NUMEROS POSITIVOS"<<endl;
    cout<<"\n\nNUMERO 1:\t";cin>>n1;
    cout<<"\n\nNUMERO 2:\t";cin>>n2;
    cout<<"\n\nNUMERO 3:\t";cin>>n3;
    cout<<"\n\nNUMERO 4:\t";cin>>n4;
    cout<<"\n\nNUMERO 5:\t";cin>>n5;
    cout<<"\n\nNUMERO 6:\t";cin>>n6;
    cout<<"\n\nNUMERO 7:\t";cin>>n7;
    cout<<"\n\nNUMERO 8:\t";cin>>n8;
    cout<<"\n\nNUMERO 9:\t";cin>>n9;
    cout<<"\n\nNUMERO 10:\t";cin>>n10;

    cout<<"\n\nNUMEROS POSITIVOS:\n"<<endl;

    if(n1>0)
        cout<<"\n\nNUMERO 1:\t"<<n1;
    if(n2>0)
        cout<<"\n\nNUMERO 2:\t"<<n2;
    if(n3>0)
        cout<<"\n\nNUMERO 3:\t"<<n3;
    if(n4>0)
        cout<<"\n\nNUMERO 4:\t"<<n4;
    if(n5>0)
        cout<<"\n\nNUMERO 5:\t"<<n5;
    if(n6>0)
        cout<<"\n\nNUMERO 6:\t"<<n6;
    if(n7>0)
        cout<<"\n\nNUMERO 7:\t"<<n7;
    if(n8>0)
        cout<<"\n\nNUMERO 8:\t"<<n8;
    if(n9>0)
        cout<<"\n\nNUMERO 9:\t"<<n9;
    if(n10>0)
        cout<<"\n\nNUMERO 10:\t"<<n10;
    break;
        case 40:
            cout<<"\n\t\tESTE PROGRAMA ENCUESTA A 10 PERSONAS\n"<<endl;
    cout<<"\t\t\tY DIRA EL PROMEDIO\n"<<endl;

    for(i1=1;i1<=10;i1++){
        cout<<"Seleccione su color favorito:\n"<<endl;
        cout<<"1.ROJO\t2.VERDE\t 3.AZUL\t\t--> ";cin>>r;

        switch(r){
        case 1: tr++;
        break;
        case 2: tv++;
        break;
        case 3: ta++;
        break;
        }
                     }
        tr=tr*100/10;
        tv=tv*100/10;
        ta=ta*100/10;

        cout<<"\n\nTOTAL ROJO:\t"<<tr;cout<<"%"<<endl;
        cout<<"\n\nTOTAL VERDE:\t"<<tv;cout<<"%"<<endl;
        cout<<"\n\nTOTAL AZUL:\t"<<ta;cout<<"%"<<endl;

        if(tr>tv && tr>ta){
        cout<<"\n\nEL COLOR PREFERIDO ES:\tROJO"<<endl;
        }
        if(tv>tr && tv>ta){
        cout<<"\n\nEL COLOR PREFERIDO ES:\tVERDE"<<endl;
        }
        if(ta>tv && ta>tr){
        cout<<"\n\nEL COLOR PREFERIDO ES:\tAZUL"<<endl;
        }
        break;
        case 41:
            cout<<"\n\nESTE PROGRAMA DIRA EL SEXO QUE OBTUVO UN MEJOR PROMEDIO EN LA PRUEBA"<<endl;

    do{
        cout<<"\n\n\t\tSELECCIONE UNA OPCION:\n"<<endl;
        cout<<"\n1.MASCULINO \t 2.FEMENINO \t 3.MOSTRAR RESULTADOS \t--> ";
        cin>>sexo;
    switch(sexo)
    {
        case 1: do{
            cout<<"\nINGRESE EL PUNTAJE QUE OBTUVO:\t  \t  \t  \t--> ";
            cin>>puntaje;
        }while(puntaje<=0);
        contm++;
        puntm+=puntaje;
        break;

        case 2: do{
            cout<<"\nINGRESE EL PUNTAJE QUE OBTUVO:\t  \t  \t  \t--> ";
            cin>>puntaje;
        }while(puntaje<=0);
        contf++;
        puntf+=puntaje;
        break;

        case 3: break;

        default:
            cout<<"\nOPCION INVALIDA.\n"<<endl;
            break;
    }
    }while(sexo!=3);

    promh=puntm/contm;
    promm=puntf/contf;
    cout<<"\n\n\t\tRESULTADOS\n"<<endl;
    cout<<"\nTOTAL HOMBRES:\t"<<contm<<endl;
    cout<<"\n\tPROMEDIO PUNTAJE:\t"<<promh;
    cout<<"\n"<<endl;
    cout<<"\nTOTAL MUJERES:\t"<<contf<<endl;
    cout<<"\n\tPROMEDIO PUNTAJE:\t"<<promm;
    cout<<"\n"<<endl;
    if(promh>promm){
        cout<<"\n\nEL SEXO MASCULINO OBTUVO UN MEJOR PROMEDIO"<<endl;
    }
        if(promm>promh){
            cout<<"\n\nEL SEXO FEMENINO OBTUVO UN MEJOR PROMEDIO"<<endl;
    }
    if(promh==promm)
        {
            cout<<"\n\nAMBOS SEXOS OBTUVIERON EL MISMO PROMEDIO"<<endl;
        }
        break;
        case 42:
            cout<<"\n\tESTE PROGRAMA REVELA LA CANTIDAD DE VEHICULOS PARTICULARES Y BUSES"<<endl;
     cout<<"\t\t\t\tQUE PASAN POR UN PEAJE"<<endl;
     cout<<"\n\t  ADEMAS DE CALCULAR EL PROMEDIO DE PERSONAS QUE VAN EN ELLOS"<<endl;

    do{
    cout<<"\n\n\nSELECCIONE EL TIPO DE VEHICULO:\n"<<endl;
    cout<<"\n1.PARTICULAR\t2.BUS\t3.OTRO\t4.MOSTRAR RESULTADOS\t--> ";
    cin>>menu;
     switch(menu)
     {
         case 1:do{
             cout<<"\nINGRESE LA CANTIDAD DE PASAJEROS:\t\t\t--> ";
             cin>>pasajeros;
         }while(pasajeros<=0);
         aut++;
         pauto+=pasajeros;
         break;
         case 2:do{
             cout<<"\nINGRESE LA CANTIDAD DE PASAJEROS:\t\t\t--> ";
             cin>>pasajeros;
         }while(pasajeros<=0);
         bus++;
         pbus+=pasajeros;
         break;
         case 3:
            cout<<"\nESTA OPCION NO NECESITA INFORMACION.\n"<<endl;
            break;
        case 4:
        break;
     }
    }
    while(menu!=4);

    cout<<"\n\n\t\tRESULTADOS\n"<<endl;
    cout<<"\nTOTAL PARTICULARES:\t"<<aut<<endl;
    cout<<"\n\tPROMEDIO PASAJEROS:\t"<<pauto/aut;
    cout<<"\n"<<endl;
    cout<<"\nTOTAL BUSES:\t\t"<<bus<<endl;
    cout<<"\n\tPROMEDIO PASAJEROS:\t"<<pbus/bus;
    cout<<"\n"<<endl;
    break;
        case 43:

    cout<<"\n\tESTE PROGRAMA CALCULA EL MCD DE DOS NUMEROS DISTINTOS A CERO\n"<<endl;

    cout<<"\n\nIngrese el numero 1:\t";
    cin>>numero3;
    cout<<"\n\nIngrese el numero 2:\t";
    cin>>numero2;

    do{
            residuo=numero3%numero2;

            if(residuo!=0)
            {
            numero3=numero2;
            numero2=residuo;
            }
            else
            {
                mcd=numero2;
            }
    }while(residuo!=0);

    cout<<"\n\nEl MAXIMO COMUN DIVISOR";
    cout<<"\tES:\t"<<mcd;
    cout<<"\n\n"<<endl;
    break;
        case 44:
             cout<<"\n\n\tCONVIERTE LOS PESOS A DOLARES AMERICANOS\n"<<endl;
    cout<<"\nINGRESE LA CANTIDAD DE PESOS:\t--> ";
    cin>>cop;

    total=cop/usd;

    cout<<"\n\nPESOS A DOLARES:\t\t--> "<<total<<endl;
    break;
    case 45:
    cout<<"\n\n\tCONVIERTE LOS DOLARES AMERICANOS A PESOS\n"<<endl;
    cout<<"\nINGRESE LA CANTIDAD DE DOLARES AMERICANOS:\t--> ";
    cin>>usd1;

    total1=cop1*usd1;

    cout<<"\n\nDOLARES AMERICANOS A PESOS:\t\t\t--> "<<total1<<endl;
    break;
    case 46:
        cout<<"\n\n\tCONVIERTE LOS EUROS A DOLARES AMERICANOS \n"<<endl;
    cout<<"\nINGRESE LA CANTIDAD DE EUROS:\t--> ";
    cin>>euro;

    total2=euro*usd2;

    cout<<"\n\nEUROS A DOLARES AMERICANOS:\t--> "<<total2<<endl;
    break;
    case 47:

    cout<<"\n\n\tCONVIERTE LOS DOLARES AMERICANOS A EUROS\n"<<endl;
    cout<<"\nINGRESE LA CANTIDAD DE DOLARES AMERICANOS:\t--> ";
    cin>>usd3;

    total3=euro3*usd3;

    cout<<"\n\nDOLARES AMERICANOS A EUROS:\t--> "<<total3<<endl;
    break;
    case 48:
        top:
    int opcion1,menu1;
    cout<<" \t  ******************"<<endl;
    cout<<" \t *                  *"<<endl;
    cout<<" \t *     DEPORTES     *"<<endl;
    cout<<" \t *                  *"<<endl;
    cout<<" \t *     1.FUTBOL     *"<<endl;
    cout<<" \t *     2.TENNIS     *"<<endl;
    cout<<" \t *     3.GOLF       *"<<endl;
    cout<<" \t *                  *"<<endl;
    cout<<" \t *     4.SALIR      *"<<endl;
    cout<<" \t *                  *"<<endl;
    cout<<"  \t  ******************"<<endl;

    cout<<"\n\n\tSELECCIONE UNA OPCION:\t-->  ";cin>>opcion1;

    switch(opcion1)
    {
        case 1:
            cout<<"\n\n\tUsted seleccione el deporte FUTBOL"<<endl;
            cout<<"\n\tPresione enter para ver los implementos de este deporte:"<<endl;
            getch();
            cout<<"\n\n\t1.Camiseta"<<endl;
            getch();
            cout<<"\n\t2.Pantaloneta"<<endl;
            getch();
            cout<<"\n\t3.Medias largas"<<endl;
            getch();
            cout<<"\n\t4.Guayos"<<endl;
            getch();
            cout<<"\n\t5.Balon"<<endl;
            getch();
            cout<<"\n\n\t1.IR AL MENU\t2.SALIR\t-->  ";
            cin>>menu1;
            cout<<"\n\n"<<endl;

        switch(menu1)
        {
            case 1:goto top;
            break;
            case 2: break;
        }
        break;
        case 2:
            cout<<"\n\n\tUsted seleccione el deporte TENNIS"<<endl;
            cout<<"\n\tPresione enter para ver los implementos de este deporte:"<<endl;
            getch();
            cout<<"\n\n\t1.Cancha"<<endl;
            getch();
            cout<<"\n\t2.Raqueta"<<endl;
            getch();
            cout<<"\n\t3.Zapatillas"<<endl;
            getch();
            cout<<"\n\t4.Oponente"<<endl;
            getch();
            cout<<"\n\t5.Arbitro"<<endl;
            getch();
            cout<<"\n\n\t1.IR AL MENU\t2.SALIR\t-->  ";
            cin>>menu1;
            cout<<"\n\n"<<endl;

        switch(menu1)
        {
            case 1:goto top;
            break;
            case 2: break;
        }
        break;
        case 3:
            cout<<"\n\n\tUsted seleccione el deporte GOLF"<<endl;
            cout<<"\n\tPresione enter para ver los implementos de este deporte:"<<endl;
            getch();
            cout<<"\n\n\t1.Marcadores"<<endl;
            getch();
            cout<<"\n\t2.Guantes"<<endl;
            getch();
            cout<<"\n\t3.Arreglapiques"<<endl;
            getch();
            cout<<"\n\t4.Tarjeta de puntuacion"<<endl;
            getch();
            cout<<"\n\t5.Tees"<<endl;
            getch();
            cout<<"\n\n\t1.IR AL MENU\t2.SALIR\t-->  ";
            cin>>menu1;
            cout<<"\n\n"<<endl;

        switch(menu1)
        {
            case 1:goto top;
            break;
            case 2: break;
        }
        break;
        case 4: break;
        default: cout<<"\n\n\tDATO INCORRECTO."<<endl;
        cout<<"\n\n"<<endl;
        goto top;

    }
    break;
        case 49:
            cout<<"\n\n\tESTE PROGRAMA CONVIERTE LAS LIBRAS EN KILOGRAMOS\n"<<endl;
    cout<<"\n\nINGRESE EL VALOR EN LIBRAS:\t-->  ";
    cin>>libra;

    kg=libra/2.2046;

    cout<<"\n\n\t"<<libra<<"\tLIBRAS SON IGUALES A\t"<<kg<<"\tKILOGRAMOS"<<endl;
    cout<<"\n\n"<<endl;
    break;
        case 50:
            cout<<"\n\n\t\tESTE PROGRAMA CALCULA EL SUELDO DE UN EMPLEADO"<<endl;
    cout<<"\t    TENIENDO ENCUENTA SU CATEGORIA Y LAS HORAS DE SERVICIO\n\n"<<endl;
top1:
    cout<<"\n\n\tPOR FAVOR SELECCIONE SU CATEGORIA:\n"<<endl;
    cout<<"\n1.Categoria A\n"<<endl;
    cout<<"\n2.Categoria B\n"<<endl;
    cout<<"\n3.Categoria C\n"<<endl;

    cout<<"\n\t\tOPCION:\t-->  ";

    cin>>categoria;

    switch(categoria)
    {
    case 1:
        cout<<"\n\nUSTED SELECCIONO LA CATEGORIA A\n"<<endl;
        cout<<"TENGA EN CUENTA QUE UN MES POSEE 720 HORAS\n"<<endl;
        cout<<"EN ESTA CATEGORIA EL PAGO POR HORA ES IGUAL A 26.90\n"<<endl;
        cout<<"\n\n\tINGRESE LA CANTIDAD DE HORAS:\t-->  ";
        cin>>horas10;

        total10=horas10*26.90;

        cout<<"\n\nSU PAGO ES IGUAL A:\t\t=  "<<total10<<endl;
        break;
    case 2:
        cout<<"\n\nUSTED SELECCIONO LA CATEGORIA B\n"<<endl;
        cout<<"TENGA EN CUENTA QUE UN MES POSEE 720 HORAS\n"<<endl;
        cout<<"EN ESTA CATEGORIA EL PAGO POR HORA ES IGUAL A 24.30\n"<<endl;
        cout<<"\n\n\tINGRESE LA CANTIDAD DE HORAS:\t-->  ";
        cin>>horas10;

        total10=horas10*24.30;

        cout<<"\n\nSU PAGO ES IGUAL A:\t\t=  "<<total10<<endl;
        break;
    case 3:
        cout<<"\n\nUSTED SELECCIONO LA CATEGORIA C\n"<<endl;
        cout<<"TENGA EN CUENTA QUE UN MES POSEE 720 HORAS\n"<<endl;
        cout<<"EN ESTA CATEGORIA EL PAGO POR HORA ES IGUAL A 21.50\n"<<endl;
        cout<<"\n\n\tINGRESE LA CANTIDAD DE HORAS:\t-->  ";
        cin>>horas10;

        total10=horas10*21.50;

        cout<<"\n\nSU PAGO ES IGUAL A:\t\t=  "<<total10<<endl;
        break;
    default: cout<<"\n\n\n\t\tOPCION INVALIDA\n"<<endl;
goto top1;
    }

    cout<<"\n\n\tQUE DESEA REALIZAR:\n\n"<<endl;
    cout<<"\n\t1.IR AL MENU \t 2.SALIR"<<endl;
    cin>>menu10;

    switch(menu10)
    {
        case 1:goto top1;
        break;
        case 2: break;
    }
    break;

    case 0:
        break;
    default:
        cout<<"\n\nPOR FAVOR DIGITE UN NUMERO DEL 26 AL 50\n\n"<<endl;
    }

    cout<<"\n\n\t\tELIJA UNA OPCION:"<<endl;
    cout<<"\n1.VOLVER AL MENU\t\t2.SALIR\n\n"<<endl;
    cin>>inicio;

    switch(inicio){
    case 1:goto inicio;
    break;
    case 2:cout<<"\n\nGRACIAS"<<endl;
    break;
    default:
        cout<<"\n\nPOR FAVOR DIGITE 1 o 2\n\n"<<endl;

    }

    getch();
    return 0;






}
