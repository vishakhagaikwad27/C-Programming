#include<stdio.h>
#include<conio.h>
int main()
{
    int month;
    printf("\n Enter a Month Number = ");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
        printf("\n The Month is January.");
        break;

    case 2:
        printf("\n The Month is February.");
        break;

    case 3:
        printf("\n The Month is March.");
        break;

    case 4:
        printf("\n The Month is April.");
        break;

    case 5:
        printf("\n The Month is May.");
        break;

    case 6:
        printf("\n The Month is June.");
        break;

    case 7:
        printf("\n The Month is July.");
        break;

    case 8:
        printf("\n The Month is Auguest.");
        break;

    case 9:
        printf("\n The Month is September.");
        break;

    case 10:
        printf("\n The Month is October.");
        break;

    case 11:
        printf("\n The Month is November.");
        break;

    case 12:
        printf("\n The Month is December.");

    default:
        break;
    }

        printf("\n ===========THANKS=========");
        getch();
        return 0;
}
