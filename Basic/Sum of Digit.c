#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int N,Sum,R=0;
  printf("Enter the Digit : ");
  scanf("%d",&N);
  while(N!=0)
  { 
  R=N%10;
  Sum=Sum+R;
  N=N/10;
  }
  printf("The Sum of a Digit is %d",Sum);
  getch();
}
