#include<stdio.h>

int area1(){
	int side=10;
	int total;
	total=side*side;
	return total;
	}
	
void area()
{
	int side=10;
	printf("Area of square is:%d\n",side*side);
	
}
int main()
	{
		int total;
		area();
		
		total=area1();
		printf("Area of square:%d\n",total);
	}
	
