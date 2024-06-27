#include<stdio.h>
void area()
{
	int length, breadth;
	int area;
	printf("Length is:");
	scanf("%d",&length);
	printf("Breadth is:");
	scanf("%d",&breadth);
	area=length*breadth;
	printf("Area of rectangle:%d\n",area);
}

int area1()
{
	int length, breadth;
	int total;
	printf("Length is:");
	scanf("%d",&length);
	printf("Breadth is:");
	scanf("%d",&breadth);
	total=length*breadth;
	return total;
}

int main()
{
	int total;
	area();
	total=area1();
	printf("Area of rectangle:%d",total);
	return 0;
}


