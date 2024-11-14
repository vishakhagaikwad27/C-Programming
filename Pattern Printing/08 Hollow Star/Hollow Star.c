#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, Row=0, Column=0;
    printf("\n Enter Row Value=");
    scanf("%d",&Row);
    printf("\n Enter Column Value=");
    scanf("%d",&Column);

    for(R=1; R<=5; R++)
    {
        for(C=1; C<=5; C++)
        {
            if(R==1 || C==1 || R==5 || C==5)
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
    getch();
    return 0;
}
