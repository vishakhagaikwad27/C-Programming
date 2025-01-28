#include<stdio.h>
#include<conio.h>
int main()
{
char ch='\0';
printf("\n Enter the Alphabet to convert into Uppercase or Lowercase=");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
       {
            ch=ch-32;
            printf("\n The Given Alphabet in a Lowercase Then it is converted into Uppercase.");
       }
else if(ch>='A' && ch<='Z')
       {
             ch=ch-32;
             printf("\n The Given Alphabet in a Uppercase then it is Converted into Lowercase.");
       }
       else
       {
              printf("\n The Given Input is not Alphabet Hence it is Not Converted");
       }
       printf("\n ================THANKS================");
       getch();
       return 0;
}
