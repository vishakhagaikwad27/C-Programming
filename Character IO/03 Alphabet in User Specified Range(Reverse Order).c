#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0', Spt='\0', Ept='\0';
    printf("\n Enter a Start Point=");
    scanf("%c",& Spt);
    fflush(stdin);
    printf("\n Enter a End Point=");
    scanf("%c",& Ept);
    for(ch=Spt; ch>=Ept; ch--)
    {
        printf("\n %3c",ch);
    }
    printf("\n ============THANKS============");
    getch();
    return 0;
}
