#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n Enter the Alphabet=");
    scanf("%c",& ch);
    if(ch>='A' && ch<='Z')
    {
        ch=ch-32;
        printf("\n The Alphabet is Converted into Lowercase");
    }
    else
    {
        printf("\n The Alphabet is Not Uppercase then it is not Converted ");
    }
    printf("\n ==================THANKS================");
    getch();
    return 0;
}
