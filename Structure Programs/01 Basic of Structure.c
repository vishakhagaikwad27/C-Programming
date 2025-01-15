#include<stdio.h>
#include<conio.h>

struct Stud
{
    int RollNo;
    char Name[30];
    float per;
};
int main()
{
    int Num;
    struct Stud S1;

    printf("\n Size of Integer is=%d",sizeof(int));
    printf("\n Size of Structure Student Object / Insance is=%d",sizeof(struct Stud));

    getch();
    return 0;

}
