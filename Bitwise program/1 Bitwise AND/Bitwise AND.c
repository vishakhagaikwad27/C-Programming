#include<stdio.h>
#include<conio.h>
int main()
{
int No1=0,No2=0,Res=0;
printf("\n Enter 1st No=");
scanf("%d",&No1);
printf("\n Enter 2nd No=");
scanf("%d",&No2);
printf("\n==================================================**************========================================================");
Res=No1&No2;
printf("\n Result=%d&%d=%d",No1,No2,Res);
printf("\n\n==================================================**************========================================================");
getch();
return 0;
}
