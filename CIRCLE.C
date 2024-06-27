#include<stdio.h>
#include<conio.h>
int main ()
{
float pi = 3.14;
int radius ;
float area ;
clrscr ();
printf(" Radius is : ");
scanf("%f",&radius);
area = pi * radius * radius;
printf("Area of the circle is : %f", area);
getch();
return 0 ;
}