#include<stdio.h>
#include<conio.h>
int main()
{ int P;
  int R;
  int T;
  int I;
  clrscr();
  printf("The value of P is :");
  scanf("%d",&P);
  printf("The value of R is :");
  scanf("%d",&R);
  printf("The value of T is :");
  scanf("%d",&T);
  I = P * R * T /100;
  printf("Simple interest is:%d",I);
  getch();
  return 0 ;
  }