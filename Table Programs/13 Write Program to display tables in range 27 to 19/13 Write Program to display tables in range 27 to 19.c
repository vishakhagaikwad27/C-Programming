#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0, C = 0;
    printf("\n Table in Range 27 to 19:\n\n");

    for(R = 1; R <= 10; R++)
    {
        for(C = 27; C >= 19; C--)
        {
            printf(" %3d",R*C);
        }
        printf("\n");
    }
    getch();
    return 0;
}
