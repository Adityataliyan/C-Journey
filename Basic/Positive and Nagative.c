#include<stdio.h>
#include<conio.h>
void mian()
{  
  clrscr();
  int A=0;
  printf("Enter the Number To check");
  scanf("%d",&A);
  if(A==0)
{printf("Zero");}
  else
{if(A>0)
{printf("Postive");}
else
{printf("Negative");}
}
getch();
}
