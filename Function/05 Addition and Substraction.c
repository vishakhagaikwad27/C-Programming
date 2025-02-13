#include<stdio.h>
#include<conio.h>
void add()
{
    int a=10, b=20, c;

    c = a + b;
    printf("\n Addition %d\n",c);
}
void sub()
{
    int a=20, b=10, c;
    c=a-b;
    printf("\n Substraction %d\n",c);
}
int main()
{
    add();
    sub();
    return;
}
