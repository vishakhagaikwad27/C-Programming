#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0',Spt='\0',Ept='\0';
    printf("\n Enter a Starting Alphabet=");
    scanf("\n %c",& Spt);
    fflush(stdin);
    printf("\n Enter a Ending Alphabet=");
    scanf("\n %c",& Ept);
    for(ch=Spt; ch<=Ept; ch++)
    {
        printf("\n %3c",ch);
    }
    printf("\n ===========THANKS============");
    getch();
    return 0;
}
