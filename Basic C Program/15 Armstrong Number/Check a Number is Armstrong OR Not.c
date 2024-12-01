#include<stdio.h>
#include<conio.h>
int main()
{
    ///input 153 => 1*1*1 + 5*5*5 + 3*3*3 = 153
    int n,arm=0,r,c;
    printf("\n Enter any Number=");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    {
      printf("\n This is Armstrong Number.");
    }
    else
    {
        printf("\n This is Not Armstrong Number.");
    }
    printf("\n=====THANKS=======");
    getch();
    return 0;
}
