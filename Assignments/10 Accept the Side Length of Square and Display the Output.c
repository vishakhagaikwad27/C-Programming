#include<stdio.h>
#include<conio.h>
int main()
    {
        float Side=0.0, Area=0.0;
        printf("\n Enter Side Length of Square=");
        scanf("%f",&Side);

        Area=Side* Side;

        printf("\n Area of Side Length of Square %0.2f * %0.2f=%0.2f",Side,Side,Area);
        printf("\n============THANKS==========");
        getch();
        return 0;
    }

