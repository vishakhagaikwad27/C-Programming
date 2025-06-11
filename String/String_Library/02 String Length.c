#include<stdio.h>
#include<conio.h>
#include<conio.h>

int main()
{
    char str[40] = {};
    int length = 0;

    puts("\n Enter a String To Calculate its Length : ");

    gets(str);

    printf("\n You Entered String is : %s",str);

    length = strlen(str);

    printf("\n\n Length of the String : %d",length);

    getch();
    return 0;
}
