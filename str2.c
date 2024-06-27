#include<stdio.h>
#include<string.h>
int main()
{
	int k=0;
	char string1[50];

	
	gets(string1);

	for(int i=0;string1[i]!='\0';i++,k++)
	{	
	}
	printf("String length:%d\n",k);
	for(int i=k;i>=0;i--)
	{
		printf("%c",string1[i]);
	}
	return 0;
}