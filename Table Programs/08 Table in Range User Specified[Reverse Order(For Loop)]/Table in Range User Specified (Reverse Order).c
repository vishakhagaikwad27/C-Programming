#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, Spt=0, Ept=0;
    printf("\n Enter a start point=");
    scanf("%d",&Spt);
    printf("\n Enter a end point=");
    scanf("%d",&Ept);
    printf("Table of %d-%d=\n\n",Spt,Ept);
    for(R=10; R>=1; R--)
    {
        for(C=Ept; C>=Spt; C--)
        {
            printf("%3d",R*C);
        }
        printf("\n");
    }
    printf("\n=============Thanks============");
    getch();
    return 0;
}
