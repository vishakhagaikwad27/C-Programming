#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0;
    printf("\n Tables in Range 7-13=\n");
    for(R=1; R<=10; R++)         ///Row
    {
        for(C=7; C<=13; C++)     ///Column
        {
            printf("%3d",R*C);
        }
        printf("\n");
    }
    printf("\n Thanks!!!!");
    getch();
    return 0;

}
