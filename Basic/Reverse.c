#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int N,R,=0;
  printf("Enter the digit :");
  scanf("%d",&N);
  while(N!=0)
  {
    R=N%10;
    R=(R*10)+R:
    N=N/10;
  }
  printf("Reverse=%d",R);
  getch();
}
