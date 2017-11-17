#include <iostream.h>
#include <conio.h>




int main()
{
    menu:
    int opcion;
    double numero;//case 1
    int numero1;//case 2
    double numero2=-2;//case 3
    int numero3=1;//case 4
    double nota1,nota2,nota3,promedio;//case 5
    double numero4=2,numero5=3;//case 6
    double numero6,numero7;//case 7
    double numero8,numero9;//case 8
    double numero10,suma;//case 9
    double numero11,numero12,numero13,numero14,numero15,numero16,numero17,numero18,numero19,numero20,numero21,numero22,numero23,numero24,numero25,total;//case 10
    double a,b=2015,c;//case 11
    double numero26,numero27,numero28;//case 12
    double numero29,numero31,numero30;//case 13
    double radio,altura,area,volumen;//csae 14
    double a1,b1;//case 15
    double a2=1;//case 16
    int sumaimpar=0;//case 17
    int sumapar=0;//case 18
    int a3,b3,c3,d3,e3;//case 19
    double a4,b4,c4;//case 20
    int a5,b5;//case 21
    int a6,b6;//case 22
    double a7,b7;//case 23
   long int s,m,h,d=0;//case 24
    int a8,b8;//case 25
    int menu1;


    cout<<"\n\t\t\tPROGRAMAS WALTER:<<1 - 25>>"<<endl;
    cout<<"\n1.MAYOR A CERO\t\t2.PAR O IMPAR\t\t3.1 AL 100"<<endl;
    cout<<"\n4.PARES 1 A 100\t\t5.PROMEDIO DE NOTAS\t6.MULTIPLOS 2 Y 3"<<endl;
    cout<<"\n7.CUAL ES MAYOR?\t8.CUAL ES MENOR?\t9.SUMA DEL 20 AL 50"<<endl;
    cout<<"\n10.SUMAR 15\t\t11.MAYOR DE EDAD\t12.ORDENAR POR EL MAYOR"<<endl;
    cout<<"\n13.ORDENAR POR EL MENOR 14.CILINDRO (a y v)\t15.KM/H A M/S"<<endl;
    cout<<"\n16.IMPARES 1 A 100\t17.SUMA DE IMPARES\t18.SUMA DE PARES"<<endl;
    cout<<"\n19.MAYOR DE 5 NUMEROS\t20.FACTORIAL\t\t21.NUMERO ENTERO A ROMANO"<<endl;
    cout<<"\n22.ULTIMA CIFRA\t\t23.CM A PULGADAS\t24.MINUTOS A HORAS"<<endl;
    cout<<"\n25.NUMERO A MES\t\t0.SALIR\n"<<endl;
    cout<<"\n\n\t\t\tSELECCIONE UNA OPCION:\t";
    cin>>opcion;
    cout<<"\n\n"<<endl;

    switch(opcion){
    case 1:
    cout<<"\n\tESTE PROGRAMA LE DIRA SI SU NUMERO ES MAYOR,MENOR O IGUAL A CERO\n"<<endl;
    cout<<"\nDIGITE UN NUMERO:\t";
    cin>>numero;

    if(numero>0){
        cout<<"\nSU NUMERO ES MAYOR QUE CERO"<<endl;
    }
    if(numero<0){
        cout<<"\nSU NUMERO ES MENOR QUE CERO"<<endl;
    }
    if(numero==0){
        cout<<"\nSU NUMERO ES IGUAL A CERO"<<endl;
    }
    break;
    case 2:
    cout<<"\n\tESTE PROGRAMA LE DIRA SI SU NUMERO ES PAR O IMPAR\n"<<endl;
    cout<<"\nDIGITE UN NUMERO:\t";
    cin>>numero1;

    if(numero1 % 2 == 0)
        cout<<"\nEL NUMERO ES PAR"<<endl;
    else
        cout<<"\nEL NUMERO ES IMPAR"<<endl;
    break;
    case 3:
    cout<<"\n\tESTE PROGRAMA LE MOSTRARA LOS NUMEROS DEL -2 AL 100\n"<<endl;
    cout<<"\nPRESIONE ENTER PARA INICIAR\t"<<endl;
    getch();

    while(numero2>-4  && numero2<101){
        cout<<"\n\t"<<numero2<<endl;
        numero2++;
    }
    cout<<"\nPRESIONE ENTER PARA SALIR"<<endl;
    break;
    case 4:
    cout<<"\n\tESTE PROGRAMA LE MOSTRARA LOS NUMEROS PARES DEL 1 AL 100\n"<<endl;
    cout<<"\nPRESIONE ENTER PARA INICIAR\t"<<endl;
    getch();

    while(numero3>0 && numero3<101){
        if(numero3 % 2 == 0)
            cout<<"\n\t"<<numero3<<endl;
            numero3++;
    }
    cout<<"\nPRESIONE ENTER PARA SALIR"<<endl;
    break;
    case 5:
    cout<<"\n\tESTE PROGRAMA LE DIRA SU PROMEDIO DE NOTAS"<<endl;
    cout<<"\t\t\t--DE 10 a 50--\n"<<endl;
    cout<<"\nDIGITE LA NOTA FINAL DE MATERIA 1:\t";
    cin>>nota1;
    if(nota1==0){
        cout<<"\n\t\tDATO INCORRECTO"<<endl;
        cout<<"LA NOTA NO DEBE SER MENOR A 10 NI MAYOR A 50"<<endl;
    }
    else{
    cout<<"\nDIGITE LA NOTA FINAL DE MATERIA 2:\t";
    cin>>nota2;
    if(nota2==0){
        cout<<"\n\t\tDATO INCORRECTO"<<endl;
        cout<<"LA NOTA NO DEBE SER MENOR A 10 NI MAYOR A 50"<<endl;
    }
    else{
    cout<<"\nDIGITE LA NOTA FINAL DE MATERIA 3:\t";
    cin>>nota3;
    if(nota3==0){
        cout<<"\n\t\tDATO INCORRECTO"<<endl;
        cout<<"LA NOTA NO DEBE SER MENOR A 10 NI MAYOR A 50"<<endl;
    }
    else{
        promedio=(nota1+nota2+nota3)/3;
        cout<<"\n\nSU PROMEDIO FINAL ES:\t"<<promedio;
    }
    }
    }
    break;
    case 6:
    cout<<"\n\tESTE PROGRAMA LE MOSTRARA LOS MULTIPLOS DEL DOS Y DEL TRES\n"<<endl;
    cout<<"\t\t--LOS MULTIPLOS IRAN HASTA EL CIEN--\n"<<endl;
    cout<<"\n\t\t\tPRESIONE ENTER PARA INICIAR\n"<<endl;
    getch();

    cout<<"\nMULTIPLOS DE DOS:\n";
    getch();

    while(numero4>=0 && numero4<100){
        cout<<"\n\t\t\t"<<numero4<<endl;
        numero4=numero4+2;
    }
    getch();
    cout<<"\n\nMULTIPLOS DE TRES:\n"<<endl;
    getch();

    while(numero5>=3 && numero5<=100){
        cout<<"\n\t\t\t"<<numero5<<endl;
        numero5=numero5+3;
    }
    cout<<"\n\n\nPRESIONE ENTER PARA SALIR\n"<<endl;
    getch();
    break;
    case 7:
    cout<<"\n\tESTE PROGRAMA LE DIRA CUAL DE LOS DOS NUMEROS ES MAYOR\n"<<endl;
    cout<<"\nDIGITE EL PRIMER NUMERO:\t";
    cin>>numero6;
    cout<<"\nDIGITE EL SEGUNDO NUMERO:\t";
    cin>>numero7;

    if(numero6==0 && numero7==0){
        cout<<"\n\nDATOS INCORRECTOS"<<endl;
    }
    else{
        if(numero6>numero7){
        cout<<"\n\nEL NUMERO MAYOR ES:\t\t"<<numero6<<endl;
    }
    else{
        cout<<"\n\nEL NUMERO MAYOR ES:\t\t"<<numero7<<endl;
    }

    }
    break;
    case 8:
    cout<<"\n\tESTE PROGRAMA LE DIRA CUAL DE LOS DOS NUMEROS ES MENOR\n"<<endl;
    cout<<"\nDIGITE EL PRIMER NUMERO:\t";
    cin>>numero8;
    cout<<"\nDIGITE EL SEGUNDO NUMERO:\t";
    cin>>numero9;

    if(numero8==0 && numero9==0){
        cout<<"\n\nDATOS INCORRECTOS"<<endl;
    }
    else{
        if(numero8>numero9){
        cout<<"\n\nEL NUMERO MENOR ES:\t\t"<<numero9<<endl;
    }
    else{
        cout<<"\n\nEL NUMERO MENOR ES:\t\t"<<numero8<<endl;
    }

    }
    break;
    case 9:
    cout<<"\n\tESTE PROGRAMA LE DARA LA SUMA DE LOS NUMEROS DEL 20 AL 50\n"<<endl;
    cout<<"\n\t\t\tPRESIONE ENTER PARA INICIAR\n"<<endl;
    getch();

    for(numero10=20;numero10<51;numero10++){
            suma=suma+numero10;
        cout<<"\n\t\t\t\t"<<suma;
    }

    cout<<"\n\n\n\t\t\tPRESIONE ENTER PARA SALIR\n"<<endl;
    getch();
    break;
    case 10:
    cout<<"\n\tESTE PROGRAMA SUMARA 15 DISTINTOS NUMEROS\n"<<endl;
    cout<<"\nDIGITE EL PRIMER NUMERO:\t";
    cin>>numero11;
    cout<<"\nDIGITE EL SEGUNDO NUMERO:\t";
    cin>>numero12;
    cout<<"\nDIGITE EL TERCER NUMERO:\t";
    cin>>numero13;
    cout<<"\nDIGITE EL CUARTO NUMERO:\t";
    cin>>numero14;
    cout<<"\nDIGITE EL QUINTO NUMERO:\t";
    cin>>numero15;
    cout<<"\nDIGITE EL SEXTO NUMERO:\t\t";
    cin>>numero16;
    cout<<"\nDIGITE EL SEPTIMO NUMERO:\t";
    cin>>numero17;
    cout<<"\nDIGITE EL OCTAVO NUMERO:\t";
    cin>>numero18;
    cout<<"\nDIGITE EL NOVENO NUMERO:\t";
    cin>>numero19;
    cout<<"\nDIGITE EL DECIMO NUMERO:\t";
    cin>>numero20;
    cout<<"\nDIGITE EL UNDECIMO NUMERO:\t";
    cin>>numero21;
    cout<<"\nDIGITE EL DUODESIMO NUMERO:\t";
    cin>>numero22;
    cout<<"\nDIGITE EL DECIMOTERCER NUMERO:\t";
    cin>>numero23;
    cout<<"\nDIGITE EL DECIMOCUARTO NUMERO:\t";
    cin>>numero24;
    cout<<"\nDIGITE EL DECIMOQUINTO NUMERO:\t";
    cin>>numero25;

    total=numero11+numero12+numero13+numero14+numero15+numero16+numero17+numero18+numero19+numero20+numero21+numero22+numero23+numero24+numero25;

    cout<<"\n\nTOTAL SUMA:\t"<<total;
    break;
    case 11:
    cout<<"***ESTE ES UN PROGRAMA QUE COMPRUEBA SI EL USUARIO ES MAYOR DE EDAD***\n"<<endl;
    cout<<"Por favor indique su año de nacimiento:\n"<<endl;
    cin>>a;

    c=b-a;

    if(c>=18)
    {
        cout<<"\n***Usted es mayor de edad***\n"<<endl;
    }

    else
    {
        cout<<"\n***Usted NO es mayor de edad***\n"<<endl;
    }
    cout<<"Su edad actual es:\t"<<c<<endl;
    break;
    case 12:
    cout<<"\n\tESTE PROGRAMA LE DIRA CUAL DE LOS TRES NUMEROS ES MAYOR\n"<<endl;
    cout<<"\nDIGITE EL PRIMER NUMERO:\t";
    cin>>numero26;
    cout<<"\nDIGITE EL SEGUNDO NUMERO:\t";
    cin>>numero27;
    cout<<"\nDIGITE EL TERCER NUMERO:\t";
    cin>>numero28;
    cout<<"\n"<<endl;

    if(numero26>numero27 && numero26>numero28 && numero27>numero28)
    {
                       cout<<"\n\nEL NUMERO MAYOR ES:\t"<<numero26<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero27<<endl;
                       cout<<"\nEL NUMERO MENOR ES:\t"<<numero28<<endl;

                       }

    if(numero26>numero27 && numero26>numero28 && numero28>numero27)
    {
                       cout<<"\n\nEL NUMERO MAYOR ES:\t"<<numero26<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero28<<endl;
                       cout<<"\nEL NUMERO MENOR ES:\t"<<numero27<<endl;

                       }
    if(numero27>numero26 && numero27>numero28 && numero26>numero28)
    {
                       cout<<"\n\nEL NUMERO MAYOR ES:\t"<<numero27<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero26<<endl;
                       cout<<"\nEL NUMERO MENOR ES:\t"<<numero28<<endl;

                       }
    if(numero27>numero26 && numero27>numero28 && numero28>numero26)
    {
                       cout<<"\n\nEL NUMERO MAYOR ES:\t"<<numero27<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero28<<endl;
                       cout<<"\nEL NUMERO MENOR ES:\t"<<numero26<<endl;

                       }
    if(numero28>numero26 && numero28>numero27 && numero26>numero27)
    {
                       cout<<"\n\nEL NUMERO MAYOR ES:\t"<<numero28<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero26<<endl;
                       cout<<"\nEL NUMERO MENOR ES:\t"<<numero27<<endl;

                       }
    if(numero28>numero26 && numero28>numero27 && numero27>numero26)
    {
                       cout<<"\n\nEL NUMERO MAYOR ES:\t"<<numero28<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero27<<endl;
                       cout<<"\nEL NUMERO MENOR ES:\t"<<numero26<<endl;

                       }
    if(numero26==numero27 && numero28>numero26)
    {
                        cout<<numero26<<"\tY\t"<<numero27<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MAYOR ES:\t"<<numero28<<endl;

                        }
   if(numero26==numero27 && numero26>numero28)
    {
                        cout<<numero26<<"\tY\t"<<numero27<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MENOR ES:\t"<<numero28<<endl;

                        }
    if(numero27==numero28 && numero26>numero27)
    {
                        cout<<numero28<<"\tY\t"<<numero27<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MAYOR ES:\t"<<numero26<<endl;

                        }
    if(numero27==numero28 && numero27>numero26)
    {
                        cout<<numero28<<"\tY\t"<<numero27<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MENOR ES:\t"<<numero26<<endl;

                        }
    if(numero26==numero28 && numero27>numero28)
    {
                        cout<<numero26<<"\tY\t"<<numero28<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MAYOR ES:\t"<<numero27<<endl;

                        }
    if(numero26==numero28 && numero28>numero27)
    {
                        cout<<numero26<<"\tY\t"<<numero28<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MENOR ES:\t"<<numero27<<endl;

                        }
    if(numero26==numero27 && numero27==numero28)
    {
                        cout<<"\n\nLOS TRES NUMEROS SON IGUALES"<<endl;

                        }
    break;
    case 13:
    cout<<"\n\tESTE PROGRAMA LE DIRA CUAL DE LOS TRES NUMEROS ES MENOR\n"<<endl;
    cout<<"\nDIGITE EL PRIMER NUMERO:\t";
    cin>>numero29;
    cout<<"\nDIGITE EL SEGUNDO NUMERO:\t";
    cin>>numero31;
    cout<<"\nDIGITE EL TERCER NUMERO:\t";
    cin>>numero30;
    cout<<"\n"<<endl;

    if(numero29>numero31 && numero29>numero30 && numero31>numero30)
    {
                       cout<<"\n\nEL NUMERO MENOR ES:\t"<<numero30<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero31<<endl;
                       cout<<"\nEL NUMERO MAYOR ES:\t"<<numero29<<endl;

                       }

    if(numero29>numero31 && numero29>numero30 && numero30>numero31)
    {
                       cout<<"\n\nEL NUMERO MENOR ES:\t"<<numero31<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero30<<endl;
                       cout<<"\nEL NUMERO MAYOR ES:\t"<<numero29<<endl;

                       }
    if(numero31>numero29 && numero31>numero30 && numero29>numero30)
    {
                       cout<<"\n\nEL NUMERO MENOR ES:\t"<<numero30<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero29<<endl;
                       cout<<"\nEL NUMERO MAYOR ES:\t"<<numero31<<endl;

                       }
    if(numero31>numero29 && numero31>numero30 && numero30>numero29)
    {
                       cout<<"\n\nEL NUMERO MENOR ES:\t"<<numero29<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero30<<endl;
                       cout<<"\nEL NUMERO MAYOR ES:\t"<<numero31<<endl;

                       }
    if(numero30>numero29 && numero30>numero31 && numero29>numero31)
    {
                       cout<<"\n\nEL NUMERO MENOR ES:\t"<<numero31<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero29<<endl;
                       cout<<"\nEL NUMERO MAYOR ES:\t"<<numero30<<endl;

                       }
    if(numero30>numero29 && numero30>numero31 && numero31>numero29)
    {
                       cout<<"\n\nEL NUMERO MENOR ES:\t"<<numero29<<endl;
                       cout<<"\nEL NUMERO MEDIO ES:\t"<<numero31<<endl;
                       cout<<"\nEL NUMERO MAYOR ES:\t"<<numero30<<endl;

                       }
    if(numero29==numero31 && numero30>numero29)
    {
                        cout<<numero29<<"\tY\t"<<numero31<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MAYOR ES:\t"<<numero30<<endl;

                        }
   if(numero29==numero31 && numero29>numero30)
    {
                        cout<<numero29<<"\tY\t"<<numero31<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MENOR ES:\t"<<numero30<<endl;

                        }
    if(numero31==numero30 && numero29>numero31)
    {
                        cout<<numero30<<"\tY\t"<<numero31<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MAYOR ES:\t"<<numero29<<endl;

                        }
    if(numero31==numero30 && numero31>numero29)
    {
                        cout<<numero30<<"\tY\t"<<numero31<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MENOR ES:\t"<<numero29<<endl;

                        }
    if(numero29==numero30 && numero31>numero30)
    {
                        cout<<numero29<<"\tY\t"<<numero30<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MAYOR ES:\t"<<numero31<<endl;

                        }
    if(numero29==numero30 && numero30>numero31)
    {
                        cout<<numero29<<"\tY\t"<<numero30<<"\tSON IGUALES"<<endl;
                        cout<<"\nEL MENOR ES:\t"<<numero31<<endl;

                        }
    if(numero29==numero31 && numero31==numero30 )
    {
                        cout<<"\n\nLOS TRES NUMEROS SON IGUALES"<<endl;

                        }
    break;
    case 14:

    cout<<"\n\tESTE PROGRAMA CALCULA EL AREA Y EL VOLUMEN\n"<<endl;
    cout<<"\nDIGITE EL RADIO DEL CILINDRO:\t";
    cin>>radio;
    cout<<"\nDIGITE LA ALTURA DEL CILINDRO:\t";
    cin>>altura;

    area=2*3.1416*radio*altura;
    volumen=3.1416*radio*radio*altura;

    cout<<"\n\nEL AREA DEL CILINDRO ES:\t"<<area<<endl;
    cout<<"\nEL VOLUMEN DEL CILINDRO ES:\t"<<volumen<<endl;
    break;
    case 15:
    cout<<"\n\tESTE PROGRAMA CONVIERTE DE KM/H A M/S\n"<<endl;
    cout<<"\nDIGITE EL VALOR QUE DESEA CONVERTIR:\t";
    cin>>a1;

    b1=a1*1000/3600;

    cout<<"\nLA CONVERSION ES:\t"<<b1;
    cout<<"M/S";
    break;
    case 16:
    cout<<"\n\tESTE PROGRAMA LE MOSTRARA LOS NUMEROS IMPARES DEL 1 AL 100\n"<<endl;
    cout<<"\t\t\tPRESIONE ENTER PARA INICIAR"<<endl;
    getch();

    while(a2>0 && a2<101){
               cout<<"\n\n\t\t\t\t"<<a2<<endl;
               a2++;
               a2++;
               }
    cout<<"\n\n\t\t\tPRESIONE ENTER PARA SALIR"<<endl;
    getch();
    break;
    case 17:
    cout<<"\n\tESTE PROGRAMA LE MOSTRARA LA SUMA DE LOS NUMEROS IMPARES DEL 1 AL 100\n"<<endl;
    cout<<"\n\t\t\tPRESIONE ENTER PARA INICIAR"<<endl;
    getch();

    for(int i=1;i<=100;i++){
            if(i%2 != 0){
    cout<<"\t\t\t\t"<<sumaimpar<<endl;
                sumaimpar=sumaimpar+i;
            }
    }


    cout<<"\n\t\t\tPRESIONE ENTER PARA SALIR"<<endl;
    getch();
    break;
    case 18:
    cout<<"\n\tESTE PROGRAMA LE MOSTRARA LA SUMA DE LOS NUMEROS PARES DEL 1 AL 100\n"<<endl;
    cout<<"\n\t\t\tPRESIONE ENTER PARA INICIAR"<<endl;
    getch();

    for(int i=1;i<=100;i++){
            if(i%2 == 0){
    cout<<"\t\t\t\t"<<sumaimpar<<endl;
                sumaimpar=sumaimpar+i;
            }
    }


    cout<<"\n\t\t\tPRESIONE ENTER PARA SALIR"<<endl;
    getch();
    break;
    case 19:
    cout<<"\n\tESTE PROGRAMA LE MOSTRARA EL NUMERO MAYOR Y EL MENOR DE CINCO NUMEROS\n"<<endl;
    cout<<"\nIngrese el primer numero:\t";
    cin>>a3;
    cout<<"\nIngrese el segundo numero:\t";
    cin>>b3;
    cout<<"\nIngrese el tercer numero:\t";
    cin>>c3;
    cout<<"\nIngrese el cuarto numero:\t";
    cin>>d3;
    cout<<"\nIngrese el quinto numero:\t";
    cin>>e3;

    if(a3==b3 && b3==c3 && c3==d3 && d3==e3)
        cout<<"\n\n\t\tTODOS LOS NUMEROS SON IGUALES"<<endl;

    else
    {
       if(a3>=b3 && a3>=c3 && a3>=d3 && a3>=e3)
    {
    cout<<"\n\n\t\tEl numero mayor es:\t"<<a3<<endl;
    }
    if(a3<=b3 && a3<=c3 && a3<=d3 && a3<=e3)
    {
    cout<<"\n\n\t\tEl numero menor es:\t"<<a3<<endl;
    }


    if(b3>a3 && b3>=c3 && b3>=d3 && b3>=e3)
    {
    cout<<"\n\n\t\tEl numero mayor es:\t"<<b3<<endl;
    }
    if(b3<a3 && b3<=c3 && b3<=d3 && b3<=e3)
    {
    cout<<"\n\n\t\tEl numero menor es:\t"<<b3<<endl;
    }


    if(c3>a3 && c3>b3 && c3>=d3 && c3>=e3)
    {
    cout<<"\n\n\t\tEl numero mayor es:\t"<<c3<<endl;
    }
    if(c3<a3 && c3<b3 && c3<=d3  && c3<=e3)
    {
    cout<<"\n\n\t\tEl numero menor es:\t"<<c3<<endl;
    }


    if(d3>a3 && d3>b3 && d3>c3 && d3>=e3)
    {
    cout<<"\n\n\t\tEl numero mayor es:\t"<<d3<<endl;
    }
    if(d3<a3 && d3<b3 && d3<c3  && d3<=e3)
    {
    cout<<"\n\n\t\tEl numero menor es:\t"<<d3<<endl;
    }


    if(e3>a3 && e3>b3 && e3>c3 && e3>d3)
    {
    cout<<"\n\n\t\tEl numero mayor es:\t"<<e3<<endl;
    }
    if(e3<a3 && e3<b3 && e3<c3  && e3<d3)
    {
    cout<<"\n\n\t\tEl numero menor es:\t"<<e3<<endl;
    }
    }
    break;
    case 20:
    cout<<"\n\tESTE PROGRAMA LE DIRA EL FACTORIAL DE SU NUMERO\n"<<endl;
    cout<<"\nDIGITE UN NUMERO:\t";
    cin>>a4;

    b4=a4;

    for(c4=a4-1; c4>=1; c4--)
    {
    b4=b4*c4;
    }
    cout<<"\n\nEL FACTORIAL DE:\t"<<a4<<"\tES:\t"<<b4<<endl;
    break;
    case 21:
    cout<<"\n\tESTE PROGRAMA CONVIERTE LOS NUMEROS DEL 1 A 10 EN ROMANOS \n"<<endl;
    cout<<"\nDIGITE UN NUMERO:\t";
    cin>>a5;

    switch(a5){
    case 1:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\tI"<<endl;
    break;
    case 2:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\tII"<<endl;
    break;
    case 3:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\tIII"<<endl;
    break;
    case 4:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\IV"<<endl;
    break;
    case 5:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\tV"<<endl;
    break;
    case 6:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\tVI"<<endl;
    break;
    case 7:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\tVII"<<endl;
    break;
    case 8:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\tVIII"<<endl;
    break;
    case 9:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\IX"<<endl;
    break;
    case 10:cout<<"\nEL NUMERO:\t"<<a5<<"\tEN ROMANO ES:\tX"<<endl;
    break;
    default: cout<<"\n\n\t\t\tDEBES INGRESAR UN NUMERO DE 1 A 10"<<endl;
    }
    break;
    case 22:
    cout<<"\n\tESTE PROGRAMA TOMARA EL ULTIMO DIGITO DE SU NUMERO\n"<<endl;
    cout<<"\nDIGITE UN NUMERO:\t";
    cin>>a6;


    if(a6>=10)
    {
    b6=a6%10;
    cout<<"\nEL ULTIMO DIGITO DE SU NUMERO ES:\t"<<b6<<endl;
    }
    else
    {
    cout<<"\nEL ULTIMO DIGITO DE SU NUMERO ES:\t"<<a6<<endl;
    }
    break;
    case 23:
    cout<<"\n\tESTE PROGRAMA CONVIERTE LOS CM EN PULGADAS\n"<<endl;
    cout<<"\nDIGITE EL NUMERO EN CM:\t";
    cin>>a7;

    b7=a7/2.54;

    cout<<"\nCONVERSION:\t"<<b7<<"''"<<endl;
    break;
    case 24:
    cout<<"\n\t\tESTE PROGRAMA CONVERTIRA LOS MINUTOS EN HORAS\n"<<endl;
    cout<<"\t\t\tY DE SER NECESARIO A DIAS\n"<<endl;

    cout<<"POR FAVOR DIGITE LOS MINUTOS:\t";
    cin>>m;

    if(m<60)
    {
    h=0;
    d=0;
    cout<<"\n\nDIAS:\t"<<d;
    cout<<"\tHORAS:\t"<<h;
    cout<<"\tMINUTOS:\t"<<m;
    cout<<"\tSEGUNDOS:\t00"<<endl;
    }


    if(m>59)
    {
    h=m/60;
    m=m-(h*60);
    if(h>24)
    {
    d=h/24;
    h=h-(d*24);
    }
    cout<<"\n\nDIAS:\t"<<d;
    cout<<"\tHORAS:\t"<<h;
    cout<<"\tMINUTOS:\t"<<m;
    cout<<"\tSEGUNDOS:\t00"<<endl;
    }
    break;
    case 25:
    cout<<"\n\tESTE PROGRAMA CONVIERTE LOS NUMEROS A MESES \n"<<endl;
    cout<<"\nDIGITE UN NUMERO:\t";
    cin>>a8;

    switch(a8){
    case 1:cout<<"\n\nEL MES ES:\tENERO"<<endl;
    break;
    case 2:cout<<"\n\nEL MES ES:\tFEBRERO"<<endl;
    break;
    case 3:cout<<"\n\nEL MES ES:\tMARZO"<<endl;
    break;
    case 4:cout<<"\n\nEL MES ES:\tABRIL"<<endl;
    break;
    case 5:cout<<"\n\nEL MES ES:\tMAYO"<<endl;
    break;
    case 6:cout<<"\n\nEL MES ES:\tJUNIO"<<endl;
    break;
    case 7:cout<<"\n\nEL MES ES:\tJULIO"<<endl;
    break;
    case 8:cout<<"\n\nEL MES ES:\tAGOSTO"<<endl;
    break;
    case 9:cout<<"\n\nEL MES ES:\tSEPTIEMBRE"<<endl;
    break;
    case 10:cout<<"\n\nEL MES ES:\tOCTUBRE"<<endl;
    break;
    case 11:cout<<"\n\nEL MES ES:\tNOVIEMBRE"<<endl;
    break;
    case 12:cout<<"\n\nEL MES ES:\tDICIEMBRE"<<endl;
    break;
    default: cout<<"\n\n\t\tDEBES INGRESAR UN NUMERO DE 1 A 12"<<endl;
    }
    break;
    case 0:
        break;
    default:
        cout<<"\n\nPOR FAVOR DIGITE UN NUMERO DEL 1 AL 25\n\n"<<endl;
    }

    cout<<"\n\n\t\tELIJA UNA OPCION:"<<endl;
    cout<<"\n1.VOLVER AL MENU\t\t2.SALIR\n\n"<<endl;
    cin>>menu1;

    switch(menu1){
    case 1:goto menu;
    break;
    case 2:cout<<"\n\nGRACIAS"<<endl;
    break;
    default:
        cout<<"\n\nPOR FAVOR DIGITE 1 o 2\n\n"<<endl;

    }





    getch();
    return 0;
}
