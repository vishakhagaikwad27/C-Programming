#include<stdio.h>
#include<conio.h>
int main()
{
    int Month;
    printf("Enter Number Between 1 to 12=");
    scanf("%d",&Month);
    switch(Month)
    {
    case 1:
        printf("\nThe Month is January.");
        break;

    case 2:
        printf("\nThe Month is February.");
        break;

    case 3:
        printf("\nThe Month is March.");
        break;

    case 4:
        printf("\nThe Month is April.");
        break;

    case 5:
        printf("\nThe Month May.");
        break;

    case 6:
        printf("\nThe Month June.");
        break;

    case 7:
        printf("\nThe Month July.");
        break;

    case 8:
        printf("\nThe Month August.");
        break;

    case 9:
        printf("\nThe Month September.");
        break;

    case 10:
        printf("\nThe Month is October.");
        break;

    case 11:
        printf("\nThe Month is November.");
        break;

    case 12:
        printf("\nThe Month December.");
        break;

    default:
    printf("Invalid Input");
    }
    printf("\n===========Thanks===========");
    getch();
    return 0;
}

