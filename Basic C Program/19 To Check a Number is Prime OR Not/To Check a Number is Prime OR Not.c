#include<stdio.h>
#include<conio.h>
int main()
{
    ///input 7 => Prime Number
    int i=0, No=0, Count=0;
    printf("\n Enter any Number=");
    scanf("%d",&No);
    for(i=1; i<=No; i++)
    {
        if(No%i==0)
        {
            Count++;
        }
    }
    if(Count==2)
        printf("Prime Number");
    else
        printf("Not Prime Number");
    getch();
    return 0;
}
