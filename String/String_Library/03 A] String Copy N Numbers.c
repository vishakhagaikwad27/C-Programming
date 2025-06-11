#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Source[50] = {};
    char Destination[50] = {};
    int n = 0;

    puts("\n Enter a String To Copy Part of it : ");
    gets(Source);

    printf("\n Enter How Many Characters You Want to Copy : ");
    scanf("%d",&n);

    printf("\n Before Copy => Source = %s, Destination = %s",Source,Destination);

    strncpy(Destination, Source, n);
    Destination[n] = '\0';

    printf("\n After Copy => Source = %s, Destination = %s",Source,Destination);

    getch();
    return 0;
}
