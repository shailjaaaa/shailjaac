#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	gets(name);
	//puts(name);
	for(int i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
	return 0;
}