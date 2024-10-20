#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Billcount 5
int main()
{
    int i=0, Bills[Billcount]={0};
    printf("\n Enter Todays Bills:\n");
    for(i=0; i<Billcount; i++)
    {
        printf("\n Enter Bill No %d=",i+1);
        scanf("%d",&Bills[i]);
    }
    getch();
    system("cls");          ///clrscr();function to clear the output window
    printf("\n Bills in Array are:");
    for(i=0;i<Billcount;i++)
    {
        printf("\n Value of %d Bill=%d",i+101,Bills[i]);
    }
    printf("\n==========Thanks===========");
    getch();
    return 0;
}

