#include<stdio.h>
void sum();

int sum1(){
	int a=10; 
	int b=20;
	int total;
	total=a+b;
	return total;
}

int main()
{
	sum();
	int total;
	total=sum1();
	printf("Sum1 total:%d",total);
	return 0;
}
	void sum(){
	int a=10; 
	int b=20;
	printf("Total is %d\n",a+b);	
	}