#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter your age=");
    scanf("%d",&age);
    switch(age)
    {
    case 2:
        printf("\nThe age is 2.");
        break;

    case 12:
        printf("\nThe age is 12.");
        break;

    case 23:
        printf("\nThe age is 23.");
        break;

    default:
    printf("Age is not 2,12 OR 10");
    }
    printf("\n===========Thanks===========");
    getch();
    return 0;
}
