#include<stdio.h>
#include<conio.h>
int main()
{
    /// 1) 1200 1600 2000 2400 etc
    /// 2) 2012 2016 2020 ... 2096 and
    /// 3) 2100 2200 2300 2500
    int y;
    printf("\n Enter any Year=");
    scanf("%d",&y);
    if(y%400==0 || y%4==0 && y%100!=0)
    {
        printf("\n Year is Leapyear");
    }
    else
    {
        printf("\n Year is not Leapyear");
    }
    printf("\n=====THANKS======");
    getch();
    return 0;
}
