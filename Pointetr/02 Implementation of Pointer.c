#include<stdio.h>
#include<conio.h>
int main()
{
int iNo=21;
int *iptr1=&iNo;

printf("\n Value of iNo=%d",iNo);
printf("\n Address of iNo=%d",&iNo);
printf("\n Value of iNo using its Pointer iptr1=%d",*iptr1);
printf("\n Address of iNo using iptr1=%d",iptr1);
printf("\n Address of iptr1=%d",&iptr1);

printf("\n\n Value=%d",&(*iptr1));
getch();

iNo=101;

printf("\n Value of iNo=%d",iNo);
printf("\n Value of iNo using its pointer iptr1=%d",*iptr1);

getch();
*iptr1=500;

printf("\n Value of iNo=%d",iNo);
printf("\n Value of iNo using its pointer iptr1=%d",*iptr1);

getch();
return 0;
}
