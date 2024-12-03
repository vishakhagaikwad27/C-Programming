#include<stdio.h>
#include<conio.h>
int main()
{
    /// 2 4 6 8 10 .....n  => Even Number
    /// 1 3 5 7 9 .....n=> Odd Number
    int n;
    printf("\n Enter any Number=");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("\n This is Even Number");
    }
    else
    {
        printf("\n This is Odd Number");
    }
    printf("\n=======THANKS==========");
    getch();
    return 0;
}
