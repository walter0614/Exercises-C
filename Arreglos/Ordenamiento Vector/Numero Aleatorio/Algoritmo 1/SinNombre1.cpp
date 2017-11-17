#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v;
    int k;
    srand(time(NULL));
    system("cls");
    for(k=0;k<10;k++){
     v=rand()%100;
     printf("\n\t%d",v);
    }
    getche();
}
