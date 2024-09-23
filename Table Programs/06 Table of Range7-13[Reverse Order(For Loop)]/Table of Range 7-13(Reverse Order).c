#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0;
    printf("\n Table of 13-7=\n\n");
    for(R=10; R>=1; R--)
    {
        for(C=13; C>=7; C--)
        {
        printf("%3d",R*C);
        }
    printf("\n");
    }
    printf("\n Thanks!!!");
    getch();
    return 0;
}
