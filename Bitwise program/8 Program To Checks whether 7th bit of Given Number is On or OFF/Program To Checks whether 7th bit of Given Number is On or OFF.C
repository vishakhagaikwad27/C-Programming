/// Program To Checks whether 7th bit of Given Number is On or OFF
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    if((No >> 6) & 1)
    {
        printf("\n 7th Bit of Given Number %d is ON.", No);
    }
    else
    {
        printf("\n 7th Bit of Given Number %d is OFF.", No);
    }

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}
