#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("\n The Alphabet Range Between w to e is =>");
    for(ch='w'; ch>='e'; ch--)
    {
        printf("\n %3c",ch);
    }
    printf("\n =========THANKS========");
    getch();
    return 0;
}
