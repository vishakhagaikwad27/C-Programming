#include<stdio.h>
#include<conio.h>
int main()
    {
        float Km=0.0, Meter=0.0;
        printf("\n Enter Distance in Kilometer=");
        scanf("%f",&Km);

        Meter=Km * 1000;

        printf("\n Distance is %0.2f Km= %0.2f Meter",Km,Meter);
        printf("\n============THANKS==========");
        getch();
        return 0;
    }

