#include<stdio.h>
#include<conio.h>
int main()
{
    int roll_no;
    char student_name[20], course_name[20], city[20];
    printf("\n Enter Student Name:");
    scanf("%s",&student_name);
    printf("\n Enter Roll Number:");
    scanf("%d",&roll_no);
    printf("\n Enter Course Name:");
    scanf("%s",&course_name);
    printf("\n Enter City:");
    scanf("%s",&city);

    printf("\n Name of Student is:%s,\n Roll Number Of Student is:%d,\n Course Name:%s,\n City Name:%s\n",student_name,roll_no,course_name,city);

    printf("\n=========THANKS=========");
    getch();
    return 0;

}
