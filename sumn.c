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
		sum+=i;
		printf("%d\n",i);
	}
	printf("Sum of numbers:%d\n",sum);
	return 0;
	}