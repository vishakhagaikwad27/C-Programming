#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Stud
{
    int RNo;
    char Name[20];
    float Per;
};

int main()
{
    struct Stud Std1={29,"Vishakha",95.56};
    struct Stud Std2;

    Std2.RNo=15;
    strcpy(Std2.Name,"Rohini");
    Std2.Per=75.45;

    printf("\n 1st Student Info is=>");

    printf("\n Roll Number=%d",Std1.RNo);
    printf("\n Name       =%s",Std1.Name);
    printf("\n Percentage =%f",Std1.Per);

    printf("\n=========********==========");

    printf("\n 2nd Student Info is=>");

    printf("\n Roll Number=%d",Std2.RNo);
    printf("\n Name       =%s",Std2.Name);
    printf("\n Percentage =%f",Std2.Per);

    printf("\n=========THANKS===========");
    getch();
    return 0;

}

