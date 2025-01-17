#include<stdio.h>
#include<conio.h>

struct Stud
{
    int RNo;
    char Name[30];
    float per;
};

int main()
{
    struct Stud std1={29,"Vishakha",95.55};

    printf("\n Roll Number=%d.",std1.RNo);
    printf("\n Name       =%s.",std1.Name);
    printf("\n Percentage =%f.",std1.per);

    printf("\n========THANKS===========");

    getch();
    return 0;
}
