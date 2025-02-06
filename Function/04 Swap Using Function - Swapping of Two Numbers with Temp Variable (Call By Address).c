#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0,N2 = 0;

    printf("\n Enter 1st Number=");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number=");
    scanf("%d",&N2);

    printf("\n Before Swap =>\n Number 1 = %d, Number 2 = %d", N1, N2 );

    Swap(&N1, &N2);

    getch();

    printf("\n\n After Swap =>\n Number 1 = %d, Number 2 = %d", N1, N2 );

    printf("\n=======THANKS=======");

    getch();

    return 0;
}

void Swap(int *p1, int *p2)
{
    int Temp = 0;

    ///LOGIC FOR SWAPPING

    Temp = *p1;
    *p1 = *p2;
    *p2 = Temp;

}
