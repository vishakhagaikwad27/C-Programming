#include<stdio.h>
#include<conio.h>
int Book_Read(int);
int main()
{
    int No = 0,Res = 0;
    printf("\n\n The Read Pages Count in First Day = ");
    scanf("%d",&No);

    Res = Book_Read(No);

    printf("\n Total Pages of Read = %d",Res);
    getch();

    printf("\n\n The Read Pages Count in Second Day = ");
    scanf("%d",&No);

    Res=Book_Read(No);

    printf("\n Total Pages of Read = %d",Res);
    getch();

    printf("\n\n The Read Pages Count in Third Day = ");
    scanf("%d",&No);

    Res = Book_Read(No);

    printf("\n Total Pages of Read = %d",Res);

    getch();
    return 0;
}

int Book_Read(int Num)
{
    static int No = 10;
    No = No + Num;
    return No;
}
