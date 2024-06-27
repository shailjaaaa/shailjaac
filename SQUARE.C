#include<stdio.h>
#include<conio.h>
int main ()
{
int side;
int area;
clrscr ();
printf("Side is :");
scanf("%d", &side);
area = side * side;
printf("Area of square is :%d",area);
getch();
return 0 ;
}