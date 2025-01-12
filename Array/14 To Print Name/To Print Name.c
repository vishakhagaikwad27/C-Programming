#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char a[100];
    printf("\n Enter Your Name:");
    scanf("%s",a);
    for(i=1; i<=100; i++)
    {
        printf("%s\t",a);
    }
    printf("\n\n\n===============================================THANKS==============================================================");
    getch();
    return 0;
}
