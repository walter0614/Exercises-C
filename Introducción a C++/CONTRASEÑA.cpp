#include <iostream>
#include <conio.h>
#include <windows.h>

int main()

{
    bool salida=false;
    int numero,nombre;

    do{
    
	std::cout<<"\n\n\n\n\t\tIngrese la clave:\t";std::cin>>numero;
	
    std::cout<<"\n\n\t\tValidando .";

    for(int i=0;i<9;i++){
        std::cout<<".";
        Sleep(1000);}
    if(numero==123456)
        salida=true;


    }while(!salida);
    std::cout<<"\n\n";
    std::cout<<"\n\n\t\t\t\tBienvenido";


    getch();
    return 0;
}


