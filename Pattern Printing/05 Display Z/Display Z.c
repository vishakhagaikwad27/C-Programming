#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0, C = 0, Cnt = 0;
    printf("\n Enter Row & Column Count=");
    scanf("%d",&Cnt);       /// 5
    printf("\n *******Pattern******* \n");
    for( R = 1; R <= Cnt; R++ )        /// Row
    {
        for( C = 1; C <= Cnt; C++ )   /// Column
        {
            if( R == 1 || R == Cnt || (R + C) == (Cnt + 1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n =========THANKS========= \n");
    getch();
    return 0;
}

