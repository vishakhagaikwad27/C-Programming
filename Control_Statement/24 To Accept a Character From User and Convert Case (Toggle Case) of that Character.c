#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a Character = ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("\n Output: %c",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("\n Output: %c",ch);
    }
    else
    {
        printf("\n Output: %c",ch);
    }
    getch();
    return 0;
}
