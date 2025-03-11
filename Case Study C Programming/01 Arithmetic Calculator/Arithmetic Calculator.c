#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Helper\Calculator.c"

int main()
{
    int choice = 0;
    char ch = '\0';

    for(;;)
    {
        printf("\n ********Fork Infosystem*********\n\tArithmetic Calculator");
        printf("=============================================================");
        printf("\n Choices = \n\t 1.Addition\n\t 2.Substraction\n\t 3.Division\n\t 4.Multiplication\n\t 5.Remainer\n\t 6.EXIT\n");
        printf("\n ==========================================================");

        printf("\n Enter Your Choice = ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            Add();
            getch();
            system("cls");
            getch();
            break;

        case 2:
            Sub();
            getch();
            system("cls");
            break;

        case 3:
            Div();
            getch();
            system("cls");
            break;

        case 4:
            Mul();
            getch();
            system("cls");
            break;

        case 5:
            Mod();
            getch();
            system("cls");
            break;

        case 6:
            fflush(stdin);
            printf("\n Are You Sure Do You Want To Exit?? (Yes/No): ");
            ch=getchar();

            if(ch=='y' || ch=='Y')
            {
                goto DWN;
            }
            fflush(stdin);
            system("cls");
            break;

        default:
            printf("\n INVALID CHOICE");
            getch();
            system("cls");
            break;
        }
    }

    DWN:
        printf("\n *** Thanks For Using Fork Infosystem Calculator Services ***");
        printf("\n Press Any Key To Exit Application!!");
        getch();
        return 0;
}
