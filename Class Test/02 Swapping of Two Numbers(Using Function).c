#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0, N2 = 0;

    printf("\n Enter 1st Number=");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number=");
    scanf("%d",&N2);

    printf("\n Before Swap => Number 1=%d, Number 2=%d",N1,N2);

    swap(&N1,&N2);

    printf("\n After Swap => Number 1=%d,  Number 2=%d",N1,N2);

    return 0;
}

void swap(int *p1, int *p2)
{
    int Temp = 0;

    Temp = *p1;
    *p1 = *p2;
    *p2 = Temp;
}

