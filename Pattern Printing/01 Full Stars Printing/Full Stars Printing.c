#include<stdio.h>
#include<conio.h>
int main()
{
        int R=0, C=0;
        printf("\n *****************Patterrn*******************\n");
        for(R=1;R<=7;R++)       ///Row
        {
           for(C=1;C<=4;C++)    ///Column
           {
           printf(" * ");
           }
           printf("\n");
        }
        getch();
        return 0;
}
