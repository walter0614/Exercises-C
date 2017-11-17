#include <iostream.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int hora,segundo,minuto;

    printf("Dame los segundos:\t");
    scanf("%d",&segundo);
    printf("Dame los minutos:\t");
    scanf("%d",&minuto);
    printf("Dame las horas:\t\t");
    scanf("%d",&hora);


segundo=segundo+1;

if(segundo>60)
{
    cout<<"\nDATOS INCORRECTOS"<<endl;
}
else
{
    if(segundo>59)
{
    segundo=0;
    minuto=minuto+1;
}
if(minuto>59)
{
    minuto=0;
    hora=hora+1;
}
if(hora>23)
{
    hora=0;
}
printf("La hora despues de un segundo es: %d : %d : %d",hora,minuto,segundo);
}






    getch();
    return 0;
}








