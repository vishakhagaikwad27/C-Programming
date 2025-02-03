#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 21;
        int  *p = &No;
        int  **q = &p;
        int  ***m = &q;
        int  ****x = &m;
        int  *****r = &x;

        printf("\n %d",*****(&x));
        printf("\n=======THANKS=======");

        getch();
        return 0;
}
