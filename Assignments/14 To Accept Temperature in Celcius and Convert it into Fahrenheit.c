#include<stdio.h>
#include<conio.h>
int main()
    {
        float Cel=0.0, Fahrenheit=0.0;
        printf("\n Enter Temperature in Celcius=");
        scanf("%f",&Cel);

        Fahrenheit=(Cel-32)*(5.0/9.0);

        printf("\n Temperature in Celcius %0.2f =%0.2f Fahrenheit",Cel,Fahrenheit);
        printf("\n============THANKS==========");
        getch();
        return 0;
    }

