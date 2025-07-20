#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;
    printf("\n Enter a Number=");
    scanf("%d",&No);

    printf("\n ===============================\n\n");

    if( (No >> 6) & 1)
    {
        printf("7th Bit - ");
    }
    if( (No >> 14) & 1);
    {
        printf("15th Bit - ");
    }
    if( (No >> 21) & 1)
    {
        printf("21st Bit - ");
    }
    if( (No >> 28) & 1)
    {
        printf("28th Bit - ");
    }

    printf("of Given Number %d is ON",No);

    printf("\n =============THANKS==============");
    getch();
    return 0;
}
