#include<stdio.h>
#include<conio.h>
int main()
{
    /// 0 1 1 2 3 5 8 ...N
    int i, n, a=0, b=1, c;
    printf("\n Enter Number of Terms=");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n=======THANKS========");
    getch();
    return 0;
}
