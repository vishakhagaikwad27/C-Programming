#include<stdio.h>
#include<conio.h>
int main()
{
    int Marks;
    printf("Enter your Marks=");
    scanf("%d",&Marks);
    switch(Marks)
    {
    case 76:
        printf("\nThe Marks is 76.");
        break;

    case 82:
        printf("\nThe Marks is 82.");
        break;

    case 60:
        printf("\nThe Marks is 60.");
        break;

    default:
    printf("Marks is not 76,82 OR 60");
    }
    printf("\n===========Thanks===========");
    getch();
    return 0;
}
