#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Sum = 0;
    while(1)                            ///It is Used for Infinite Loop
    {
    printf("\n Enter a Number = ");
    scanf("%d",&No);

        if(No <= 0)
        {
            break;
        }
    Sum += No;
    }

    printf("\n Total Sum = %d",Sum);
    getch();
    return 0;
}
