#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter Your Age : ");
    scanf("%d",&a);

    if(a > 17)
    {
        printf("\n You are Adult......!!");
    }
    else
    {
        printf("\n You are Not a Adult.....!!");
    }
    getch();
    return 0;
}
