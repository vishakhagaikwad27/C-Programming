#include<stdio.h>
#include<conio.h>
int vowelConsonant_Count(char*,int*,int*,int*);

int main()
{
    int cnt = 0, V_cnt = 0, C_cnt = 0, O_cnt = 0;
    char cSrc[20] = "";

    printf("\n Enter a String = ");
    gets(cSrc);

    cnt = VowelConsonant_Count(cSrc,&V_cnt,&C_cnt,&O_cnt);

    printf("\n String Count of Given String is = %d",cnt);
    printf("\n Vowel Count of Given String is = %d",V_cnt);
    printf("\n Consonant Count of Given String is = %d",C_cnt);
    printf("\n Other Count of Given Number is = %d",O_cnt);

    getch();
    return 0;
}
int VowelConsonant_Count(char* Src, int* V, int* C, int* O)
{
    int i = 0;

    while(Src[i] != '\0')
    {
        if(Src[i] == 'A' || Src[i] == 'E' || Src[i] == 'I' || Src[i] == 'O' || Src[i] == 'U' || Src[i] == 'a' || Src[i] == 'e' || Src[i] == 'i' || Src[i] == 'o' || Src[i] == 'u')
        {
            (*V)++;
        }
        else if((Src[i] >= 65 && Src[i] <= 90) || (Src[i] >= 97 && Src[i] <= 122))
        {
            (*C)++;
        }
        else
        {
            (*O)++;
        }
        i++;
    }
    return i;
}
