#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("\n Enter any Year=");
    scanf("%d",&y);
    if(y%400==0 || y%4==0 && y%100!=0)
    {
        printf("\n The Year %d is a Leapyear.",y);
    }
    else
    {
        printf("\n The Year %d is not a Leapyear",y);
    }
    printf("\n=====THANKS======");
    getch();
    return 0;
}
