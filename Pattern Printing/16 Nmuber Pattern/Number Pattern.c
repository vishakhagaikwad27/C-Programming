#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, k = 0;

    for(i = 4; i >= 1; i--)
    {
        for(j = 5; j >= 1; j--)
        {
            printf(" %d ",j);

        }
        printf("\n");
    }
    getch();
    return 0;
}
