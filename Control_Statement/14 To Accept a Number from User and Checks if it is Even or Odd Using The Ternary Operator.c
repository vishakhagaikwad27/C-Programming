#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Even_No = 0, Odd_No = 0;
    printf("\n Enter a Number = ");
    scanf("%d",&No);

    if(( No %2 == 0) && (No != 0))
    {
        printf("\n The Given Number %d is Even",No);
    }
    else
    {
        printf("\n The Given Number %d is Odd",No);
    }

    printf("\n ==========THANKS=========");
    getch();
    return 0;
}
