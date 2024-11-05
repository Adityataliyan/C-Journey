#include<stdio.h>
#include<conio.h>
void main()
{
  int P,T,R,SI=0;
  clescr();
  printf("Enter the Amount");
  scanf("%d",&P);
  printf("Enter the Rate");
  scanf("%d",&R);
  printf("Enter the Time in year");
  scanf("%d",&T);
  SI=(P*R*T)/100;
  printf("The Simple Intrest is =%d",SI);
  getch()
}
