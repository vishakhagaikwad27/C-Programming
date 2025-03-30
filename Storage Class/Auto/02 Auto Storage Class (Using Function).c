#include<stdio.h>
#include<conio.h>
int add();
int main()
{
    add();
    getch();
    return 0;
}

int add()                            ///User Defined Function
{
    auto int a = 10,b = 20;
    printf("Addition : %d",a + b);
    return;
}
