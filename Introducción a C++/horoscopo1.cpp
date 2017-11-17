#include "stdio.h"
#include "conio.h"
main()
{
      int d,m;
      printf("ingresa tu dia en que naciste del (1 al 31) \n");
      scanf("%i",&d);
      printf("ingresa tu mes en que naciste del (1 al 12) \n");
      scanf("%i",&m);
      if(d>=21&&m==3||d<=20&&m==4)
      printf("tu signo es aries ");
      else if(d>=21&&m==4||d<=21&&m==5)
      printf("tu signo es tauro");
      else if(d>=22&&m==5||d<=21&&m==6)
      printf("tu signo es geminis ");
      else if(d>=22&&m==6||d<=23&&m==7)
      printf("tu signo es cancer ");
      else if(d>=24&&m==7||d<=23&&m==8)
      printf("tu signo es leo");
      else if(d>=24&&m==8||d<=23&&m==9)
      printf("tu signo es virgo ");
      else if(d>=24&&m==9||d<=23&&m==10)
      printf("tu signo es libra ");
      else if(d>=24&&m==10||d<=22&&m==11)
      printf("tu signo es escorpion");
      else if(d>=23&&m==11||d<=21&&m==12)
      printf("tu signo es sagitario");
      else if(d>=22&&m==12||d<=20&&m==1)
      printf("tu signo es capricornio");
      else if(d>=21&&m==1||d<=19&&m==2)
      printf("tu signo es acuario");
      else if(d>=20&&m==2||d<=20&&m==3)
      printf("tu signo es picis ");
      getch ();
      }
