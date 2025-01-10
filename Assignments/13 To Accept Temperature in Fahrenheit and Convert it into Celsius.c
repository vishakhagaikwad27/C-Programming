#include<stdio.h>
#include<conio.h>
int main()
    {
        float Fahrenheit=0.0, Cel=0.0;
        printf("\n Enter Temperature in Fahrenheit=");
        scanf("%f",&Fahrenheit);

        Cel=(Fahrenheit-32)*(5.0/9.0);

        printf("\n Temperature in Fahrenheit %0.2f =%0.2f Cel",Fahrenheit,Cel);
        printf("\n============THANKS==========");
        getch();
        return 0;
    }

