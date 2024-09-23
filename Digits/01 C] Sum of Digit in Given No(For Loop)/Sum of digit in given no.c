#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, dSum=0, Temp=0;
    printf("\n Enter a No=");
    scanf("%d",&No);         ///4938
    for(Temp = No;Temp > 0;Temp/= 10)
    {
        dSum += (Temp % 10);
    }
    printf("\n Sum of Digits %d = %d",No,dSum);
    getch();
    return 0;
}
