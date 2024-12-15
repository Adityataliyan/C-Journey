#include<stdio.h>
#include<conio.h>
void main()
{  
  clrscr();
  int A,B,C=0;
  printf("Enter the A :");
  scanf("%d",&A);
  printf("Enter the B :");
  C=A;
  A=B;
  B=C;
  printf("A=",A);
  printf("B=",B);
  getch();
}
