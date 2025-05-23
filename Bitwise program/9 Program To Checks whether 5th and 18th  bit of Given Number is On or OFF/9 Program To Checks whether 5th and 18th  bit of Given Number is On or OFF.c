#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;
    printf("\n Enter a Number=");
    scanf("%d",&No);

    printf("\n =====================================================");

    if( (No >> 4) & 1) && ((No >> 17) & 1)
    {
        printf("\n 5th and 18th Bit of Given Number %d is ON.",No);
    }
    else if((No >> 4) & 1)
    {
        printf("\n For Given Number %d 5th Bit is ON and 18th Bit is OFF.",No);
    }
    else if((No >> 17) & 1)
    {
        printf("\n For Given Number %d 5th Bit is OFF and 18th Bit ON.",No);
    }
    else
    {
        printf("\n For Given Number %d 5th Bit and 18th Bit is OFF.",No);
    }
    printf("\n ==========================THANKS========================")

    getch();
    return 0;
}
