#include<stdio.h>
float interest1()
{
	int p=10000;
	int r=2;
	int t=2;
	float area;
	area=p*r*t/100;
	return area;
}

void interest()
{
	int p=1000;
	int r=2;
	int t=2;
	float interest=p*r*t/100;
	printf("Simple interest:%f\n",interest);
}

int main()
{
	float area;
	interest();
	area=interest1();
	printf("Simple interest:%f",area);
	return 0;
}