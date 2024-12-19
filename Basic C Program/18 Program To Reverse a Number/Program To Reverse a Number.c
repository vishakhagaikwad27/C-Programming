#include<stdio.h>
#include<conio.h>
int main()
{
    /// input 234 => 432
    int No=0,Rev=0;
    printf("\n Enter a Number=");
    scanf("%d",&No);
    while(No>0)
    {
        Rev=No % 10;
        printf("%d",Rev);
        No= No / 10;
    }
    printf("\n ==========THANKS===========");
    getch();
    return 0;
}
