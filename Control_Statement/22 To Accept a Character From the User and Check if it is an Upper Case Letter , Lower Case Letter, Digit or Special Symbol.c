#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a Character = ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n The Character '%c' is Upper Case.",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n The Character '%c' is Lower Case.",ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n The Character '%c' is a Digit.",ch);
    }
    else
    {
        printf("\n The Character '%c' is a Special Symbol.",ch);
    }
    printf("\n ==================THANKS====================");
    getch();
    return 0;
}
