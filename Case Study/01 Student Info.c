#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{

    int Roll_No;
    char Name[40];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};

int main()
{

    struct Stud Std;
    Std.Roll_No = 8029;
    strcpy(Std.Name,"Vishakha Gaikwad");
    Std.Phy = 80;
    Std.Chem = 88;
    Std.Maths = 90;

    Std.Total = Std.Phy + Std.Chem + Std.Maths;

    Std.Per = (Std.Total / 300) * 100;

    printf("\n Roll Number = %d",Std.Roll_No);
    printf("\n Name = %s",Std.Name);
    printf("\n Total Marks = %0.0f",Std.Per);

    printf("\n Thanks For Using Our Applications!!!");

    getch();
    return 0;
}
