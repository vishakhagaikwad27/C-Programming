#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0, N2 = 0, N3 = 0;

    printf("\n Enter 1st Number=");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number=");
    scanf("%d",&N2);
    printf("\n Enter 3rd Number=");
    scanf("%d",&N3);


    printf("\n Before Swap => Number 1=%d, Number 2=%d, Number 3 =%d",N1,N2,N3);

    swap(&N1,&N2,&N3);

    printf("\n After Swap => Number 1=%d,  Number 2=%d, Number 3=%d",N1,N2,N3);

    return 0;
}

void swap(int *p1, int *p2, int *p3)
{
    int Temp = *p1;

    *p1 = *p2;
    *p2 = *p3;
    *p3 = Temp;
}

