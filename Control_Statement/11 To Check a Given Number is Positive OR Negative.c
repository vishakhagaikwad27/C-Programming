#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Positive=0, Negative=0;

    printf("\n Enter a Number=");
    scanf("%d",&No);

    if(No > 0)
    {
        printf("\n Given Number is Positive");
    }

    else if(No < 0)
    {
        printf("\n Given Number is Negative");
    }

 ///

    printf("\n========THANKS========");
    getch();
    return 0;

}
