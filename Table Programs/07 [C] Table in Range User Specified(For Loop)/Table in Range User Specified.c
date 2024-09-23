#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, Spt=0, Ept=0;
    printf("\n Enter start point=");
    scanf("%d",&Spt);
    printf("\n Enter end point=");
    scanf("%d",&Ept);
    printf("Table in Range %d-%d=\n\n",Spt,Ept);
    for(R=1; R<=10; R++)
    {
        for(C=Spt; C<=Ept; C++)
        {
            printf("%3d",R*C);
        }
        printf("\n");
    }
    printf("\n ================Thanks==============");
    getch();
    return 0;
}
