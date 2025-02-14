#include<stdio.h>
#include<conio.h>
int main()
    {
        float Meter=0.0, Km=0.0;
        printf("\n Enter Distance in meter=");
        scanf("%f",&Meter);

        Km=Meter * 1000;

        printf("\n Distance is %0.2f Meter= %0.2f Km",Meter,Km);
        printf("\n============THANKS==========");
        getch();
        return 0;
    }
