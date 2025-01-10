#include<stdio.h>
#include<conio.h>
int main()
{
    float radius=0.0,circumference=0.0;
    const float PI=3.14;

    printf("\n Enter Radius of Circle is=");
    scanf("%f",&radius);

    circumference=2*PI*radius;
    printf("\n Circumference of Circle with Radius %0.2f=%0.2f",radius,circumference);
    printf("\n=========THANKS===========");
    getch();
    return 0;
}
