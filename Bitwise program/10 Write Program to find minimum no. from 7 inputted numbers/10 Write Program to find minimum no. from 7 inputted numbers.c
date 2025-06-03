#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, No[7] = {0}, Min = 0;
    for(i = 1; i <= 7; i++)
    {
        printf("\n Enter a Number = ");
        scanf("%d",&No[i]);
    }

     ///LOGIC TO FIND MIN

      if(i==0)
      {
           Min=No[i];
      }
      for(i = 1; i <= 7; i++)
      {
          if (No[i]<Min)
          {
              Min=No[i];
          }
      }
      printf("\n Result => Minimum Number is = %d",Min);
      getch();
      return 0;
}

