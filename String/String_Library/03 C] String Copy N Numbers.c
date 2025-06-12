#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Source[50] = {};
    char Destination[50] = "Swati Jadhav";
    int n = 0;

    puts("\n Enter a String to Copy Part of it : ");
    gets(Source);

    printf("\n Enter How Many Characters You Want To Copy : ");
    scanf("%d",&n);

    printf("\n Before Copy => Source = %s, Destination = %s",Source,Destination);

    strncpy(Destination, Source, n);
    Destination[n] = '\0';

    printf("\n After Copy => Source = %s, Destination = %s", Source, Destination);

    getch();
    return 0;
}
