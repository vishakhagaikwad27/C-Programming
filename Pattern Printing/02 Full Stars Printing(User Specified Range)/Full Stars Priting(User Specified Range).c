#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, Row=0, Col=0;

    printf("\n Enter Row Count =");
    scanf("%d",&Row);
    printf("\n Enter Col Count=");
    scanf("%d",&Col);
    printf("\n====================Pattern==================\n\n");
    for(R=1; R<=Row; R++)              ///Row
    {
        for(C=1; C<=Col; C++)         ///Column
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n================Thanks==================\n");
    getch();
    return 0;
}
