#include<stdio.h>
#include<conio.h>
int main()
{
    int i, No;
    printf("\n Enter a Number = ");
    scanf("%d",&No);

    for(i = 0; i <= No; i++)
    {
        printf("*");
    }
    getch();
    return 0;
}
