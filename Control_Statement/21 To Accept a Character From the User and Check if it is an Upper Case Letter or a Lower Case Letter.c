#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a Character = ");
    scanf("%c",&ch);

    if(ch >='A' && ch <= 'Z')
    {
        printf("\n The Character '%c' is Upper Case.",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n The Character '%c' is Lower Case.",ch);
    }
    else
    {
        printf("\n The Character '%c' is Not a Letter.",ch);
    }
    printf("\n =================THANKS==================");
    getch();
    return 0;

}
