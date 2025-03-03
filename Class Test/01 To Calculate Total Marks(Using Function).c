#include<stdio.h>
#include<conio.h>
int Calc_Total(int Physics,int Chem,int Maths);      ///Function Prototype
int main()
{
    int Physics= 0, Chem = 0, Maths = 0, Total = 0;
    printf("\n Enter Marks of Physics=");
    scanf("%d",&Physics);
    printf("\n Enter Marks of Chem = ");
    scanf("%d",&Chem);
    printf("\n Enter Marks of Maths = ");
    scanf("%d",&Maths);

    Total = Calc_Total(Physics,Chem,Maths);        ///Function call

    printf("\n Marks of Physics is = %d",Physics);
    printf("\n Marks of Chem is = %d",Chem);
    printf("\n Marks of Maths is = %d",Maths);
    printf("\n Total Marks = %d",Total);
    return 0;
}
int Calc_Total(int Physics,int Chem,int Maths)
{
    int Total = 0;
    Total=Physics+Chem+Maths;
    return Total;
}
