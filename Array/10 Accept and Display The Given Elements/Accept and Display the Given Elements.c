#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[5]={};

    printf("\n Enter a 1st Element=");
    scanf("%d",&Num[0]);
    printf("\n Enter a 2nd Element=");
    scanf("%d",&Num[1]);
    printf("\n Enter a 3rd Element=");
    scanf("%d",&Num[2]);
    printf("\n Enter a 4th Element=");
    scanf("%d",&Num[3]);
    printf("\n Enter a 5th Element=");
    scanf("%d",&Num[4]);

    printf("\n Value of 1st Element=%d",Num[0]);
    printf("\n Value of 2nd Element=%d",Num[1]);
    printf("\n Value of 3rd Element=%d",Num[2]);
    printf("\n Value of 4th Element=%d",Num[3]);
    printf("\n Value of 5th Element=%d",Num[4]);
    getch();

    system("cls");


    Num[3]=44;
    Num[4]=56;

    printf("\n Enter a Given Element");

    printf("\n Value of 1st Element=%d",Num[0]);
    printf("\n Value of 2nd Element=%d",Num[1]);
    printf("\n Value of 3rd Element=%d",Num[2]);
    printf("\n Value of 4th Element=%d",Num[3]);
    printf("\n Value of 5th Element=%d",Num[4]);

    printf("\n============THANKS===========");

    getch();
    return 0;
}



