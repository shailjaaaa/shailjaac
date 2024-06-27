#include<stdio.h>

float area1(){
	int base,height;
	float total;
	printf("Base is:");
	scanf("%d",&base);
	printf("Height is:");
	scanf("%d",&height);
	total=0.5*base*height;
	return total;
	}
	
void area()
{
	int base,height;
	float area;
	printf("Base is:");
	scanf("%d",&base);
	printf("Height is:");
	scanf("%d",&height);
	area=0.5*base*height;
	printf("Area of triangle is:%f\n",area);
	
}
int main()
	{
		float total;
		area();
		
		total=area1();
		printf("Area of triangle:%f",total);
	return 0;
	}
	
