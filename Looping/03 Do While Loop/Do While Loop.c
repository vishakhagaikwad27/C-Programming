#include<stdio.h>
#include<conio.h>
int main()
{
    int Cnt=0;
    printf("\n Hello \n");
    Cnt=1;
    do
    {
        printf("\n %d WELCOME",Cnt);
        Cnt++;
    }
    while(Cnt <= 10);
    printf("\n =============THANKS===============");
    getch();
    return 0;
}
