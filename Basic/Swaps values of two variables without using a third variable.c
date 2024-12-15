#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int A,B=0;
  printf("Enter the A : ");
  scanf("%d",&A);
  printf("Enter the B : ");
  scanf("%d",&B);
  A=A+B;
  B=A-B;
  A=A-B;
  printf("A=%d",A);
  printf("B=%d",B);
  getch();
}
