#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[4];
    printf("\n Enter the Marks of Physics=");
    scanf("%d",&marks[0]);
    printf("\n Enter the Marks of Chemistry=");
    scanf("%d",&marks[1]);
    printf("\n Enter the Marks of Maths=");
    scanf("%d",&marks[2]);
    printf("\n Enter the Marks of Biology=");
    scanf("%d",&marks[3]);

    system("cls");

    printf("\n Marks of Physics is:%d",marks[0]);
    printf("\n Marks of Chemistry is:%d",marks[1]);
    printf("\n Marks of Maths is:%d",marks[2]);
    printf("\n Marks of Biology is:%d",marks[3]);

    printf("\n===========THANKS=============");

    getch();
    return 0;


}
