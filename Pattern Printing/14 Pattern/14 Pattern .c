#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, n = 7, x = 1;
    printf("\n\n\n\n\n\n");

    for(i = 1; i <= n; i++)
    {
        printf("  ");
        for(j = 1; j <= n; j++)
        {
            if(j >= x || j >= n-x+1)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        if(i <= n/2)
        {
            x++;
        }
        else
        {
            x--;
        }
            printf("\n");
    }
    getch();
    return 0;
}
