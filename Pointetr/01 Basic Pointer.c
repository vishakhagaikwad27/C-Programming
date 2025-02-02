#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10;
    int * ptr = &x;
    printf("\n Value of x=%d",*ptr);
    printf("\n Address of x=%d",&x);
    printf("\n Value of Pointer (address of x)=%d",&ptr);
    getch();
    return 0;
}
