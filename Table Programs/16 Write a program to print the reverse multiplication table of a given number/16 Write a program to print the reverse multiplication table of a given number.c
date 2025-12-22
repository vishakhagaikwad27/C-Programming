#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, No = 0;
    printf("\n Enter a Number = ");
    scanf("%d",&No);

    for(i = 10; i >= 1; i--)
    {
        printf("\n %3d",No*i);
    }
    getch();
    return 0;
}
