#include<stdio.h>
#include<conio.h>
void main()
{  
  clrscr();
  int A,B,C=0;
  printf("Enter the A :");
  scanf("%d",&A);
  printf("Enter the B :");
  scanf("%d",&B);
  C=A;
  A=B;
  B=C;
  printf("A=%d",A);
  printf("B=%d",B);
  getch();
}
