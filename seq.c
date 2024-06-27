#include<stdio.h>
int main ()
{
	int i;
	int n;
	printf("Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d\n",i*i);	
	}
	return 0;
	}