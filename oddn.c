#include<stdio.h>
int main ()
{
	int i;
	int n;
	int sum=0;
	printf("Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2!=0)
	{
	sum+=i;
	printf("%d\n",i);
	}	
	}
	printf("Sum of numbers:%d",sum);
	return 0;
	}