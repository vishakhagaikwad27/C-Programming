#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define BillCount 5
int main()
{
    int i=0, Bills[BillCount]={0};
    printf("\n Enter Todays Bills....");
    for(i=0;i<BillCount;i++)
    {
        printf("\n Enter Bill No %d=",i+1);
        scanf("%d",&Bills[i]);
    }
    getch();
    system("cls");
    printf("\n Bills in Array Are=");
    for(i=0;i<BillCount;i++)
    {
        printf("\n Value of %d Bill=%d",i+101,Bills[i]);
    }
    printf("\n==========THANKS===============");
    getch();
    return 0;
}

