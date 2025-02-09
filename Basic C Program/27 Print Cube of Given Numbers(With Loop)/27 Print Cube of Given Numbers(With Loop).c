#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 0 , i = 0 ;
    printf("\n Enter a Number=");
    scanf("%d",&n);

///Loop to Calculate and Print Cubes

    for(i=1; i<=n; i++)
    {
        printf("\n Number is %d and Cube of %d is=%d",i,i,(i*i*i));
    }

    getch();
    return 0;
}
