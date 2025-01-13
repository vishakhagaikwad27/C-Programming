#include<stdio.h>
#include<conio.h>
int main()
{
          float Num1=0.0, Num2=0.0, Num3, Average=0.0;
          printf("\n Enter Three Numbers=");
          scanf("%f%f%f",&Num1,&Num2,&Num3);

          Average=(Num1+Num2+Num3)/3;

          printf("\n The Average is=%0.2f",Average);
          printf("\n ==============THANKS==============");
          getch();
          return 0;
}
