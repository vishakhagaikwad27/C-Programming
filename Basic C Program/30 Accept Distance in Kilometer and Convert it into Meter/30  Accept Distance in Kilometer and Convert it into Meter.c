#include<stdio.h>
#include<conio.h>
int main()
    {
        float Kilometer=0.0, Meter=0.0;
        printf("\n Enter Distance in Kilometer=");
        scanf("%f",&Kilometer);

        Meter=Kilometer * 1000;

        printf("\n Distance is %0.2f Kilometer= %0.2f Meter",Kilometer,Meter);
        printf("\n============THANKS==========");
        getch();
        return 0;
    }
