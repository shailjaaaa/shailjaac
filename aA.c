#include<stdio.h>
int main()
{
	int f=65;
	char i='A';
	for(i='A';i<='Z';i++)
	{
		printf("%c:%d\n",i,f++);
	}
	return 0;
	}