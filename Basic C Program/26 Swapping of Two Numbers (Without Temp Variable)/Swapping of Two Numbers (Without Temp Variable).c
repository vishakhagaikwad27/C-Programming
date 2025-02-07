#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0, N2 = 0;

    printf("\n Enter Number 1=");
    scanf("%d",&N1);

    printf("\n Enter Number 2=");
    scanf("%d",&N2);

    printf("\n Before Swap : Number 1st = %d.\t Number 2nd = %d", N1, N2);

    ///Logic for Swapping

    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;

    printf("\n\n After Swap : Number 1st = %d.\t Number 2nd = %d", N1, N2);

    printf("\n===========THANKS===========");
    getch();
    return 0;
}
