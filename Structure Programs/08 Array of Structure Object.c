#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Stud
{
    int RNo;
    char Name[20];
    float Per;
};

int main()
{
    int i = 0;
    struct Stud std[3];

    for(i=0; i<3; i++)
    {
        printf("\n Enter Student No %d Details => ",i+1);

        printf("\n Enter Roll Number = ");
        scanf("%d",&std[i].RNo);

        fflush(stdin);

        printf("\n Enter Name = ");
        gets(std[i].Name);

        printf("\n Enter Percentage = ");
        scanf("%f",&std[i].Per);
    }
    getch();
    system("cls");

    printf("\n ===============************=============");

    printf("\n Student Database");

    for(i=0; i<3; i++)
    {
        printf("\n %d Student Info is => ",i+1);

        printf("\n Roll Number = %d",std[i].RNo);
        printf("\n Name        = %s",std[i].Name);
        printf("\n Percentage  = %0.2f",std[i].Per);
    }
    printf("\n ===================THANKS=================");

    getch();
    return 0;
}
