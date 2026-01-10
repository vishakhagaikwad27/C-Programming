#include<stdio.h>
#include<conio.h>
int ConsonantCount(char[]);

int main()
{
    char cSrc[20] = "";
    int l_Cnt = 0;

    printf("\n Enter a String = ");
    gets(cSrc);

    l_Cnt = ConsonantCount(cSrc);
    printf("\n Consonant Count of Given String is = %d",l_Cnt);

    getch();
    return 0;
}
int ConsonantCount(char Src[])
{
    int C_Cnt = 0, i = 0;

    while(Src[i] != '\0')
    {
        if((Src[i] >= 'A' && Src[i] <= 'Z') || (Src[i] >= 'a' && Src[i] <= 'z'))
        {
            C_Cnt++;
        }
        i++;
    }
    return C_Cnt;
}
