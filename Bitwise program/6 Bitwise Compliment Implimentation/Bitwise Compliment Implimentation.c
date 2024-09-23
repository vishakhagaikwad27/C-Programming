#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Res=0;
    printf("\n Enter a No=");
    scanf("%d",&No);
    Res=~No;
    printf("\n Result= ~%d = %d",No,Res);
    printf("\n ================Thanks==============");
    getch();
    return 0;
}
