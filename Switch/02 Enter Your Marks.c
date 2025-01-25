#include<stdio.h>
#include<conio.h>
int main()
{
    int Marks;
    printf("Enter your Marks=");
    scanf("%d",&Marks);
    switch(Marks)
    {
    case 50:
        printf("\nThe Marks is 50.");
        break;

    case 60:
        printf("\nThe Marks is 60.");
        break;

    case 80:
        printf("\nThe Marks is 80.");
        break;

    default:
    printf("\n Marks is not 50,60 OR 80");
    }
    printf("\n===========Thanks===========");
    getch();
    return 0;
}
