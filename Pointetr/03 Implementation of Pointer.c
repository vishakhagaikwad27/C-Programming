#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=21,iNum=55;
    int *iptr1=&iNo;
    int *iptr2=&iNum;

    printf("\n\n Value of iNo=%d",iNo);                                             ///21
    printf("\n Address of iNo=%d",&iNo);                                            ///6356732
    printf("\n Value of iNo using its Pointer iptr1=%d",*iptr1);                    ///21
    printf("\n Address of iptr1=%d",&iptr1);                                        ///6356724

    getch();

    printf("\n\n Value of iNum=%d",iNum);                                           ///55
    printf("\n Address of iNum=%d",&iNum);                                          ///6356728
    printf("\n Value of variable using its pointer iptr2=%d",*iptr2);               ///55
    printf("\n Address of variable using iptr2=%d",iptr2);                          ///6356728
    printf("\n Address of iptr2=%d",&iptr2);                                        ///6356720

    getch();

    printf("\n\n value=%d",&(*iptr1));                                              ///6356732
    printf("\n\n value=%d",&(*iptr2));                                              ///6356728

    getch();

    iptr1=&iNum;

    *iptr1=570;

    printf("\n\n value of iNo=%d",iNo);                                              ///21
    printf("\n Address of iNo=%d",&iNo);                                            ///6356732
    printf("\n value of iNo using its pointer iptr1=%d",*iptr1);                    ///570
    printf("\n Address of iNo using iptr1=%d",iptr1);                               ///6356728
    printf("\n Address of iptr1=%d",&iptr1);                                        ///6356724

    getch();

    printf("\n\n Value of iNum=%d",iNum);                                            ///570
    printf("\n Addess of iNum=%d",&iNum);                                           ///6356728
    printf("\n Value of variable using its pointer iptr2=%d",*iptr2);               ///570
    printf("\n Address of variable using iptr2=%d",iptr2);                          ///6356728
    printf("\n Address of iptr2=%d",&iptr2);                                        ///6356720

    getch();
    return 0;

}
