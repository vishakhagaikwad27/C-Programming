#include<stdio.h>
#include<conio.h>
int main()
{
    int R_Pages = 0, Total_Pages = 0, Day_Cnt = 0;

    printf("\n\n Enter Total Number of Pages = ");
    scanf("%d",&Total_Pages);                                   ///2000

    for(Day_Cnt = 1; R_Pages < Total_Pages; Day_Cnt++)
    {
        R_Pages = Book_Read();
        printf("\n\n Pages Read By Day %d = %d",Day_Cnt,R_Pages);
        getch();
    }

    printf("\n\n Congrats You Have Completed Book in %d Days",Day_Cnt);

    getch();
    return 0;
}

int Book_Read()
{
    static int Res = 10;
    int PCnt = 0;

    printf("\n\n How Many Pages Read Today = ");
    scanf("%d",&PCnt);

    Res = Res + PCnt;
    return Res;
}
