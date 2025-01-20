#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5]={0}, i=0;

    printf("\n Array initialized with 0");

     for (i=0; i<5; i++)
    {
        printf("\n Enter Number %d = %d",i+1,arr[i]);
    }


    printf("\n ******Enter 5 Numbers******");


    for (i=0; i<5; i++)
    {
        printf("\n Enter Number= ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n The Numbers of Array=");

    for (i=0; i<5; i++)
    {
        printf("\n Number of %d is = %d",(i+1),arr[i]);
    }
    printf("\n ==========THANKS==========");
    getch();
    return 0;
}
