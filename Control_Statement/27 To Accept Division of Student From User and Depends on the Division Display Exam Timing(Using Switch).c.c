#include<stdio.h>
#include<conio.h>
int main()
{
    char division;
    printf("\n Enter Your Division = ");
    scanf("%c",&division);

    division = toupper(division);
    switch(division)
    {
    case 'A':
        printf("\n Your Exam is at 10 AM.");
        break;

    case 'B':
        printf("\n Your Exam is at 10.30 AM.");
        break;

    case 'C':
        printf("\n Your Exam is at 1 PM.");
        break;

    case 'D':
        printf("\n Your Exam is at 1.30 PM.");
        break;

    default:
        printf("\n INVALID DIVISION!! Please Enter A, B, C, D.");
    }
    getch();
    return 0;
}
