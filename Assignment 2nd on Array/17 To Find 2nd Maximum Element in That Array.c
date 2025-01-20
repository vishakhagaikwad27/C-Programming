#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i=0,Bills[7]={0}, Max=0, Max2=0;

    printf("\n Enter Todays Bills...");

    for(i=0; i<7; i++)
    {
        printf("\n Enter Bill No %d=",i+1);
        scanf("%d",&Bills[i]);
    }
    getch();
    system("cls");          ///clrscr(); Function to clear output window
    printf("\n Bills in Array are....");

    for(i=0; i<7; i++)
    {
        printf("\n Value of %d Bill=%d",i+101,Bills[i]);

        ///Logic To Find Max

      if((i==0) || (Bills[i] > Max))
      {
           Max=Bills[i];
           continue;
      }
      if (Bills[i]>Max)
      {
          Max=Bills[i];
      }

      if((i==0) || (Bills[i] > Max2))
      {
           Max2=Bills[i];

      }

    }
    printf("\n 1st Maximum Bill Amount is=%d",Max);
    printf("\n 2nd Maximum Bill Amount is=%d",Max2);
    printf("\n============THANKS============");
    getch();
    return 0;
}

