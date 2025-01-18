#include<stdio.h>
#include<conio.h>

void PrintTable();

int main()
{
    PrintTable();

    getch();
    return 0;
}
void PrintTable()
{
    int No=5,i=1;
    printf("\n Table of %d is=>",No);

    while(i<=10)
    {
        printf("\n %3d * %3d=%3d",No,i,(i*No));
        i++;
    }
    return;
}
