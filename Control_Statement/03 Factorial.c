#include<stdio.h>
#include<conio.h>
int main()
{
    int i,fact=1,number;
    printf("Enter a Number:");
    scanf("%d",&number);
    for(i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is=%d",number,fact);
    printf("\n==========THANKS===========");
    getch();
    return 0;
}
