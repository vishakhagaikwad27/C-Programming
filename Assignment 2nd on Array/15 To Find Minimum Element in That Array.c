#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i=0,Bills[7]={0}, Min=0;

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

        ///Logic To Find Min

        if(i==0)
      {
           Min=Bills[i];
           continue;
      }
      if (Bills[i]<Min)
      {
          Min=Bills[i];
      }

    }
    printf("\n Minimum Bill Amount is=%d",Min);
    printf("\n============THANKS============");
    getch();
    return 0;
}

