#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21;
    int  *iPtr1 = &iNo;

    printf("\n Value of iNo = %d", iNo);
    printf("\n Address of iNo = %d",&iNo);
    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);
    printf("\n Address Of iNo Using iPtr1 = %d", iPtr1);
    printf("\n Address Of iPtr1 = %d",&iPtr1);

    printf("\n\n Value = %d",&(*iPtr1));

    getch();

    iNo = 101;

    printf("\n\n Value of iNo = %d", iNo);
    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);

    getch();
    *iPtr1 = 500;

    printf("\n\n Value of iNo = %d", iNo);
    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);

    getch();
    return 0;
}
