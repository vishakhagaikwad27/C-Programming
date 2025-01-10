#include<stdio.h>
#include<conio.h>
int main()
{
    float radius=0.0, area=0.0;
    const float PI=3.14;

    printf("\n Enter Radius of Circle is=");
    scanf("%f",&radius);

    area=radius*radius;
    printf("\n Area of Circle with Radius %0.2f=%0.2f",radius,area);
    printf("\n=========THANKS===========");
    getch();
    return 0;
}
