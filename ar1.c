#include<stdio.h>
int main ()
{
	int i,j;
	int n,x;
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
	printf("Enter element of %d :",i);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("%d\t",arr[i]);
	}
	printf("\nenter array size:");
	scanf("%d",&x);
	int abc[x];
	for(j=0;j<x;j++)
	{
	printf("Enter element of :");
	scanf("%d",&abc[j]);
	}
	for(j=0;j<x;j++)
	{
	printf("%d\t",abc[j]);
	}
	return 0;
	}