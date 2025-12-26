#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0, C = 0, Spt = 0, Ept = 0;
    printf("\n Enter a Starting Point = ");
    scanf("%d",&Spt);
    printf("\n Enter a Ending Point = ");
    scanf("%d",&Ept);


    for(R = 1; R <= 10; R++)
    {
        if( Spt < Ept)
        {
            for(C = Spt; C <= Ept; C++)
            {
                printf(" %3d",R*C);
            }
        }

        else
        {
            for(C = Spt; C >= Ept; C--)
            {
                printf(" %3d",R*C);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
