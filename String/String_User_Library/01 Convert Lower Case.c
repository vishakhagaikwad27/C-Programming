#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;
    char cSrc[20] =  {'\0'};

    printf("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '0')
    {
        if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
            cSrc[i] = cSrc[i] +32;
        }
        i++;
    }
    printf("\n Given String After Lower Case = %s",cSrc);

    getch();
    return 0;
}
