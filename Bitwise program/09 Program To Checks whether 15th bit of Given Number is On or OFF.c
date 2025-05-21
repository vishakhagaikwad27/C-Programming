#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;
    printf("\n Enter a Number=");
    scanf("%d",&No);

    if((No >> 14) & 1)
    {
        printf("\n 15 th Bit of Given Number %d is On!!!",No);
    }
    else
    {
        printf("\n 15th Bit of Given Number %d is OFF!!!",No);
    }

    printf("\n ==============THANKS===============");
    getch();
    return 0;
}
