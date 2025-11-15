#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("\n\n Enter a Day Number : ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
            printf("\n The Day of The Week is: Monday.");
            break;

        case 2:
            printf("\n The Day of The Week is: Tuesday.");
            break;

        case 3:
            printf("\n The Day of The Week is: Wednesday.");
            break;

        case 4:
            printf("\n The Day of The Week is: Thursday.");
            break;

        case 5:
            printf("\n The Day of The Week is: Friday.");
            break;

        case 6:
            printf("\n The Day of The Week is: Saturday.");
            break;

        case 7:
            printf("\n The Day of The Week is: Sunday.");
            break;

        default:
            break;

    }
    printf("\n\n =============THANKS===========");
    getch ();
    return 0;

}
