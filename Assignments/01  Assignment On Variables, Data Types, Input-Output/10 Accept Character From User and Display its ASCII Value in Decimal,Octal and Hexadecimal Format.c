#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a Character = ");
    scanf("%c",&ch);

    printf("\n Decimal of %c is = %d",ch,ch);
    printf("\n Octal of %c is = %o",ch,ch);
    printf("\n Hexadecimal of %c is = %x",ch,ch);

    printf("\n ===============THANKS==============");
    getch();
    return 0;
}
