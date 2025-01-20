#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, BSum=0, Bills[7]={};
    for(i=0; i<7; i++)                ///Bills Empty Array Display
    {
        printf("\n Bill Value of %d=%d",(i+1),Bills[i]);
    }
    getch();
    printf("\n==========********==========");

    printf("\n Enter All 7 Bill Amounts");

    for(i=0; i<7; i++)                  ///Accepting Bills
    {
        printf("\n Enter Bill %d=",(i+101));
        scanf("%d",&Bills[i]);
    }
    for(i=0; i<7; i++)                 ///Generate Bill Sum
    {
        BSum=BSum+Bills[i];
    }
    printf("\n Total of Bills=%d",BSum);
    printf("\n===========THANKS===========");
    getch();
    return 0;
}
