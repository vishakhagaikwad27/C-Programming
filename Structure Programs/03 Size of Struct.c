#include<stdio.h>
#include<conio.h>

struct Stud1
{
    char Nm[8];
    char Cit[10];
    int RNo;
    long int MNo;
    float Per;
};
struct Stud2
{
    int RNo;
    char Nm[8];
    long int MNo;
    char City[10];
    float Per;
};
struct Stud3
{
    char Nm[8];
    int RNo;
    char City[10];
    long int MNo;
    float Per;
};

int main()
{
    struct Stud1 Std1;
    struct Stud2 Std2;
    struct Stud3 Std3;

    printf("\n Size of 1st Structure Object %d",sizeof(Std1));
    printf("\n Size of 2nd Structure Object %d",sizeof(Std2));
    printf("\n Size of 3rd Structure Object %d",sizeof(Std3));

    getch();
    return 0;


}
