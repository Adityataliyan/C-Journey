#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr()
  int N=0;
  printf("Pyramid pattern upto Nth row who want");
  scanf("%d",&N);
  for (int i = N; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    getch();
}
