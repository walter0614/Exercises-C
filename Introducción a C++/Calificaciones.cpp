#include <iostream.h>
#include <conio.h>

int main()
{
    double astro, calif, parti, tarea, tarea1, tarea2;//Variables de la materia Astrologia
    double calculo, calif1,parti1, tarea3, tarea4;//Variables de la materia Calculo
    double mecan, calif2, parti2, tarea5, tarea6, tarea7;//Variables de la materia Mecanica Cuantica
    double program, calif3, parti3;//Variables de la materia Programacion
    double redes, calif4, parti4;//Variables de la materia Redes
    double nftarea ,nftarea1 , nftarea2, promfinal;//Notas finales

    cout<<"****BIENVENIDO****\n"<<endl;
    cout<<"ESTE PROGRAMA LE DARA EL PROMEDIO DE SUS CINCO MATERIAS Y EL GENERAL\n"<<endl;

    cout<<"Por favor digite la nota de su calificacion en ASTROFISICA:"<<endl<<endl;
    cin>>calif;
    cout<<"Por favor digite la nota de su participacion en ASTROFISICA:"<<endl<<endl;
    cin>>parti;
    cout<<"Por favor digite la nota de su tarea 1 en ASTROFISICA:"<<endl<<endl;
    cin>>tarea;
    cout<<"Por favor digite la nota de su tarea 2 en ASTROFISICA:"<<endl<<endl;
    cin>>tarea1;
    cout<<"Por favor digite la nota de su tarea 3 en ASTROFISICA:"<<endl<<endl;
    cin>>tarea2;

    cout<<"Por favor digite la nota de su calificacion en CALCULO INTEGRAL:"<<endl<<endl;
    cin>>calif1;
    cout<<"Por favor digite la nota de su participacion en CALCULO INTEGRAL:"<<endl<<endl;
    cin>>parti1;
    cout<<"Por favor digite la nota de su tarea 1 en CALCULO INTEGRAL:"<<endl<<endl;
    cin>>tarea3;
    cout<<"Por favor digite la nota de su tarea 2 en CALCULO INTEGRAL:"<<endl<<endl;
    cin>>tarea4;

    cout<<"Por favor digite la nota de su calificacion en MECANICA CUANTICA:"<<endl<<endl;
    cin>>calif2;
    cout<<"Por favor digite la nota de su participacion en MECANICA CUANTICA:"<<endl<<endl;
    cin>>parti2;
    cout<<"Por favor digite la nota de su tarea 1 en MECANICA CUANTICA:"<<endl<<endl;
    cin>>tarea5;
    cout<<"Por favor digite la nota de su tarea 2 en MECANICA CUANTICA:"<<endl<<endl;
    cin>>tarea6;
    cout<<"Por favor digite la nota de su tarea 3 en MECANICA CUANTICA:"<<endl<<endl;
    cin>>tarea7;

    cout<<"Por favor digite la nota de su calificacion en PROGRAMACION:"<<endl<<endl;
    cin>>calif3;
    cout<<"Por favor digite la nota de su participacion en PROGRAMACION:"<<endl<<endl;
    cin>>parti3;

    cout<<"Por favor digite la nota de su calificacion en REDES:"<<endl<<endl;
    cin>>calif4;
    cout<<"Por favor digite la nota de su participacion en REDES:"<<endl<<endl;
    cin>>parti4;



    nftarea = (tarea+tarea1+tarea2)/3;
    astro = (calif*0.6)+(parti*0.2)+(nftarea*0.2);

    nftarea1 = (tarea3+tarea4)/2;
    calculo = (calif1*0.4)+(parti1*0.4)+(nftarea1*0.2);

    nftarea2= (tarea5+tarea6+tarea7)/3;
    mecan = (calif2*0.6)+(parti2*0.3)+(nftarea2*0.1);

    program = (calif3+parti3)/2;

    redes = (calif4+parti4)/2;

    promfinal = (astro+calculo+mecan+program+redes)/5;

    if(astro>50 && calculo>50 && mecan>50 && program>50 && redes>50 && promfinal>50)
    {
    cout<<"DIGITE DATOS MENORES A 50"<<endl;
    }
    if(astro<=50 && calculo<=50 && mecan<=50 && program<=50 && redes<=50 && promfinal<=50)
    {
    cout<<"\n-----SUS NOTAS FINALES SON-----"<<endl;
    cout<<"\nSu nota final en ASTROFISICA es:\t"<<astro<<endl;
    cout<<"Su nota final en CALCULO es:\t"<<calculo<<endl;
    cout<<"Su nota final en MECANICA CUANTICA es:\t"<<mecan<<endl;
    cout<<"Su nota final en PROGRAMACION es:\t"<<program<<endl;
    cout<<"Su nota final en REDES es:\t"<<redes<<endl<<endl;

    cout<<"\nSU PROMEDIO FINAL ES:\t\t"<<promfinal<<endl<<endl;
    }

    if(astro>=30)
    cout<<"\n\nAprobaste ASTROFISICA"<<endl;
    if(calculo>=30)
    cout<<"\n\nAprobaste CALCULO"<<endl;
    if(mecan>=30)
    cout<<"\n\nAprobaste MECANICA CUANTICA"<<endl;
    if(program>=30)
    cout<<"\n\nAprobaste PROGRAMACION"<<endl;
    if(redes>=30)
    cout<<"\n\nAprobaste REDES"<<endl;

    if(astro<30)
    cout<<"\n\nReprobaste ASTROFISICA"<<endl;
    if(calculo<30)
    cout<<"\n\nReprobaste CALCULO"<<endl;
    if(mecan<30)
    cout<<"\n\nReprobaste MECANICA CUANTICA"<<endl;
    if(program<30)
    cout<<"\n\nReprobaste PROGRAMACION"<<endl;
    if(redes<30)
    cout<<"\n\nReprobaste REDES"<<endl;


cout<<"\n\n******EN HORA BUENA XD******"<<endl;


getch();
return 0;
}
