#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FirstString[50] = "";
    char SecondString[50] = "";
    int ComparisonResult = 0;

    puts("\n Enter 1st String : ");
    gets(FirstString);

    puts("\n Enter 2nd String : ");
    gets(SecondString);

    ComparisonResult = strcmp(FirstString, SecondString);

    printf("\n Comparing %s and %s \n", FirstString, SecondString);

    if(ComparisonResult == 0)
    {
        printf("Both Strings are Equal");
    }
    else if(ComparisonResult > 0)
    {
        printf("%s is Greater Than %s", FirstString, SecondString);
    }
    else
    {
        printf("%s is Less Than %s", FirstString, SecondString);
    }
    getch();
    return 0;
}
