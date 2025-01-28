#include<stdio.h>
#include<conio.h>
int main()
{
    /// a e i o u => Vowel
    ///Remaining all => Consonant
    char ch;
    printf("\n Enter any Character=");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("\n Character is Vowel");
    }
    else
        {
            printf("\n Character is Consonant");
        }
        printf("\n======THANKS=======");
        getch();
        return 0;
}
