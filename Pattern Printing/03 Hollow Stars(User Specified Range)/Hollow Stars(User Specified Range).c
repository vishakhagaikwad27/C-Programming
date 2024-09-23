#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0, C = 0, Row = 0, Col = 0;
    printf("\n Enter Row Count=");
    scanf("%d",&Row);
    printf("\n Enter Column Count=");
    scanf("%d",&Col);
    printf("\n ==========PATTERN==========\n");
        for( R = 1; R <= Row; R++ )   ///Row
    {
        for( C = 1; C <= Col; C++ )  ///Column
        {
            if( R == 1 || C == 1 || R == Row || C == Col )
            {
                printf(" * ");
            }
            else
            {
                printf(" $ ");
            }
        }
        printf("\n");
    }
    printf("\n==========THANKS===========\n");
    getch();
    return 0;
}
