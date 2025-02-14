#include<stdio.h>
#include<conio.h>
int main()
{
    int No1 = 0, No2 = 0, No3 = 0, No4 = 0,No5 = 0;

    printf("\n Enter 1st Number=");
    scanf("%d",&No1);
    printf("\n Enter 2nd Number=");
    scanf("%d",&No2);
    printf("\n Enter 3rd Number=");
    scanf("%d",&No3);
    printf("\n Enter 4th Number=");
    scanf("%d",&No4);
    printf("\n Enter 5th Number=");
    scanf("%d",&No5);

    printf("\n Cubes of The Numbers!!");

    printf("\n Cube of 1st No %d = %d",No1,(No1*No1*No1));
    printf("\n Cube of 2nd No %d = %d",No2,(No2*No2*No2));
    printf("\n Cube of 3rd No %d = %d",No3,(No3*No3*No3));
    printf("\n Cube of 4th No %d = %d",No4,(No4*No4*No4));
    printf("\n Cube of 5th No %d = %d",No5,(No5*No5*No5));

    printf("\n ========THANKS========");

    getch();
    return 0;

}
