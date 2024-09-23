#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Dig=0, dSum=0, Temp=0;
    printf("\n Enter a Number=");
    scanf("%d",&No);          ///4321
    while(No > 0)
    {
        Dig=No % 10;
        dSum=dSum + Dig;
        No=No / 10;
    }
    printf("\n Sum of Digit =%d",dSum);
    getch();
    return 0;
}
