#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, X=0;
    printf("\n Enter Row and Column Count:");
    scanf("%d",&X);
    printf("\n ==========Pattern===========\n");
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            if(C==X/2+1 || R==1 || R==X)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n===========THANKS=============");
    getch();
    return 0;
}
