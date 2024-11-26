#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    char a[50];
    printf("\n Enter your Name=");
    scanf("%s",&a);
    printf("\n");
    for(i=1; i<=50; i++)
    {
        printf("%s\t",a);
    }
    printf("\n\n==========================Thanks==============================\n");
    getch();
    return 0;
}
