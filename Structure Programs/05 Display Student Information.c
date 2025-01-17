#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
       struct Stud
       {
       int RNo;
       char Name[15];
       long long int MNo;
       float Income;
       };

       struct Stud Std1;

       Std1.RNo=29;
        Strcpy(Std1.Name,"Vishakha");
       Std1.MNo=8446580345;
       Std1.Income=1000;

       printf("\n 1st Student RNo    =%d",Std1.RNo);
       printf("\n 1st Student Name   =%s",Std1.Name);
       printf("\n 1st Student MNo    =%lld",Std1.MNo);
       printf("\n 1st Student Income =%0.2f", Std1.Income);

       getch();
       return 0;

}
