#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i=0,Bills[7]={0}, Max=0, 2nd Max=0;

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

        if(i==0)
      {
           Max=Bills[i];
           continue;
      }
      if (Bills[i]>Max)
      {
          Max=Bills[i];
      }
      ///Logic To Find 2nd Max

        if(i==0)
      {
           Max=Bills[i];
           continue;
      }
      if (Bills[i]>Max)
      {
           Max=Bills[i];
      }


    }
    printf("\n Maximum Bill Amount is=%d",Max);
    printf("\n 2nd Maximum Bill Amount is=%d",2nd Max);
    printf("\n============THANKS============");
    getch();
    return 0;
}

