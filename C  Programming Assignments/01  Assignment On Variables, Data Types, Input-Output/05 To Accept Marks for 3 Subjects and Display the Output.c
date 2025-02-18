#include<stdio.h>
#include<conio.h>
int main()
{
    int S1=0, S2=0, S3=0, Total=0;
    float Per=0.0;

    printf("\n Marks of 1st Subject =");
    scanf("%d",&S1);
    printf("\n Marks of 2nd Subject=");
    scanf("%d",&S2);
    printf("\n Marks of 3rd Subject=");
    scanf("%d",&S3);

    Total=S1+S2+S3;

    Per=Total/3;

    printf("\n Marks of 1st Subject is=%d",S1);
    printf("\n Marks of 2nd Subject is=%d",S2);
    printf("\n Marks of 3rd Subject is=%d",S3);

    printf("\n\n Total Marks=%d",Total);

    printf("\n\n Precentage of Marks=%f",Per);

    printf("\n===========THANKS===========");
    getch();
    return 0;
}
