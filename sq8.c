#include<stdio.h>
int main()
{
	int i,j;
	char z='A';
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=5;j++)
	{
	printf("%c\t",z);
	z++;}
	printf("\n");
	}
	return 0 ;
}