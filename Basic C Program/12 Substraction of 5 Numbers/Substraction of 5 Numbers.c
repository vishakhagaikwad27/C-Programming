#include<stdio.h>
#include<conio.h>
int main()
{
    int N1=0, N2=0, N3=0, N4=0, N5=0, Sub=0;
     printf("\n *******Substraction of 5 Numbers*****");

        printf("\n Enter a 1st Number=");
        scanf("%d",&N1);

        printf("\n Enter a 2nd Number=");
        scanf("%d",&N2);

        printf("\n Enter a 3rd Number=");
        scanf("%d",&N3);

        printf("\n Enter a 4th Number=");
        scanf("%d",&N4);

        printf("\n Enter a 5th Number=");
        scanf("%d",&N5);



        Sub=N1-N2-N3-N4-N5;

        printf("\n Result=>Substration of %d-%d-%d-%d-%d=%d.",N1,N2,N3,N4,N5,Sub);

        printf("\n============THANKS============");

        getch();
        return 0;
}


