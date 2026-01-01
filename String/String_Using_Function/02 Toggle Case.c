#include<stdio.h>
#include<conio.h>

int ToggleCase(char[]);
int main()
{
    char cSrc[20]="";

    printf("\n Enter a String : ");
    gets(cSrc);

    ToggleCase(cSrc);
    printf("\n After Toggle Case String is : %s",cSrc);

    getch();
    return 0;
}
int ToggleCase(char Src[])
{
    int i = 0;
    while(Src[i] != '\0')
    {
        if(Src[i] >= 'A' && Src[i] <= 'Z')
        {
            Src[i] = Src[i]+32;
        }
        else if(Src[i] >= 'a' && Src[i] <= 'z')
        {
            Src[i] = Src[i]-32;
        }
        i++;
    }
    return;
}
