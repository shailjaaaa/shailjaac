#include<stdio.h>
#include<string.h>
int main()
{
	int k=0;
	char name[50];
	gets(name);
	for(int i=0;name[i]!='\0';i++,k++)
	{
		printf("%c",name[i]);
	}
	printf("\nString length:%d",k);
	return 0;
}