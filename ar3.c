#include<stdio.h>
int main ()
{
	int i;
	int n;
	int sum;
	
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	printf("Enter element of :");
	scanf("%d",&arr[i]);

	}
	for(i=0;i<n;i++)
	{
	printf("%d\t",arr[i]);
	if(i%2==0)
	{
	sum+=i;
	printf("sum:%d",sum);}
	}
	return 0;
	}