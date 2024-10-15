#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("\n Press 1 for Monday\n");
    printf("\n Press 2 for Tuesday\n");
    printf("\n Press 3 for Wednesday\n");
    printf("\n Press 4 for Thursday\n");
    printf("\n Press 5 for Friday\n");
    printf("\n Press 6 for Saturday\n");
    printf("\n Press 7 for Sunday\n");


    printf("\n Enter Day Number=");
    scanf("%d",&day);
    switch(day)
        {
            case 1:
               printf("\n Monday");
               break;

            case 2:
                printf("\n Tuesday");
                break;

            case 3:
                printf("\n Wednesday");
                break;

            case 4:
                printf("\n Thursday");
                break;

            case 5:
                printf("\n Friday");
                break;

            case 6:
                printf("\n Saturday");
                break;

            case 7:
                printf("\n Sunday");
                break;

            default:
                break;
        }
        printf("\n =============THANKS============");
        return 0;

}
