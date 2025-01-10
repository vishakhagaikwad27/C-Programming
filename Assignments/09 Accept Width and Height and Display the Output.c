#include<stdio.h>
#include<conio.h>
int main()
    {
        float Height=0.0, Width=0.0, Area=0.0;
        printf("\n Enter Width of Rectangle=");
        scanf("%f",&Width);
        printf("\n Enter Height of Rectangle=");
        scanf("%f",&Height);

        Area=Width * Height;

        printf("\n Area of Rectangle %0.2f * %0.2f=%0.2f",Width,Height,Area);
        printf("\n============THANKS==========");
        getch();
        return 0;
    }
