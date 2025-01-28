#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter the Alphabet=");
    scanf("%c",& ch);
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("\n The Alphabet is Converted into Uppercase");
    }
    else
    {
        printf("\n The Alphabet is Not Lowercase Then it is not Converted ");
    }
    printf("\n ==========THANKS==========");
    getch();
    return 0;
}
