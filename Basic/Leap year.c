#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int year=0;
    printf("Enter the year to check is leap or not a leap year");
    scanf("%d",&year);
    if((y%4==0)&&(y%100!=0||y%400==0))
    {printf("The %d year is leap",year);
    }
    else
    {printf("The %d year is not leap year",year);
    }
    getch();
}
