#include<stdio.h>
#include<conio.h>
int main()
{
    double No1, No2, Result;
    char operator;
    printf("\n Enter an Operator (+,-,*,/,%%) = ");
    scanf("%c",&operator);

    printf("\n Enter a First Number = ");
    scanf("%lf",&No1);
    printf("\n Enter a Second Number = ");
    scanf("%lf",&No2);

    switch(operator)
    {
        case '+':
        Result = No1 + No2;
        printf("\n Result => %.2lf",Result);
        break;

        case '-':
        Result = No1 - No2;
        printf("\n Result => %.2lf",Result);
        break;

        case '*':
        Result = No1 * No2;
        printf("\n Result => %.2lf",Result);
        break;

        case '/':
        if(No2 != 0)
        {
             Result = No1 / No2;
             printf("\n Result => %.2lf",Result);
        }
        else
        {
            printf("\n ERROR!! Division of Zero is Not Allowed.");
        }
        break;

        case '%':
        if((int)No1 == No1 && (int)No2 == No2)
        {
            printf("\n Result => %d",(int)No1 % (int)No2);                  ///The Both Numbers are Integers
        }
        else
        {
            printf("\n ERROR!! Modulus Operator Requires Integer Operands.");
        }
        break;

        default:
            printf("\n INVALID OPERATOR.");
    }
    getch();
    return 0;
}

