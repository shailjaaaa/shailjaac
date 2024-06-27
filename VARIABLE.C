#include<stdio.h>
#include<conio.h>
int main ()
{
  int a;
  int b;
  int c;

  clrscr();

  printf("Value of a:");
  scanf("%d",&a);
  printf("Value of b:");
  scanf("%d",&b);

  c=a;
  a=b;
  b=c;

  printf("Value of a:%d",a);
  printf("Value of b:%d",b);
  getch();
  return 0 ;
  }


