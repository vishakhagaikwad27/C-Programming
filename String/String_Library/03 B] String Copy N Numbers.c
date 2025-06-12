#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Source[50] = {};
    char Destination[50] = "Swati Jadhav";

    puts("\n Enter a String To Copy First 5 Characters From it : ");
    gets(Source);

    printf("\n Before Copy => Source = %s, Destination = %s", Source,Destination);

    strncpy(Destination, Source, 5);
    Destination[5] = '\0';

    printf("\n After Copy => Source = %s, Destination = %s", Source, Destination);

    getch();
    return 0;
}
