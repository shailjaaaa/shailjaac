#include<stdio.h>
#include<conio.h>
int main ()
{
 int base ;
 int height ;
 float area ;
 clrscr ();

 printf("Base is :");
 scanf("%d",&base);
 printf("Height is :");
 scanf("%d",&height );

 area = 1/2 *base * height;
 printf("Area of triangle : %f",area );
 getch();
 return 0;
 }