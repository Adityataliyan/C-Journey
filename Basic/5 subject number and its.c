#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int sub1,sub2,sub3,sub4,sub5=0;
    float total,per=0;
    printf("Enter the number of 5 Subject");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=sub1+sub2+sub3+sub4+sub5:
    per=total/5;
    printf("Total Number=%f",total);
    printf("Percentage is %f",per);
    if(per>90)
    {printf("A");}
    else if(per>80)
    {printf("B");}
    else if(per>70)
    {printf("C");}
    else if(per>60)
    {printf("D");}
    else if(per>50)
    {printf("E");}
    else
    {printf("Fail");}
    getch();
}
