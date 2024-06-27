#include<stdio.h>
#include<string.h>
int main()
{
	int k=0;
	char string1[50];
	char string2[50];
	
	gets(string1);
	gets(string2);

	for(int i=0;string1[i]!='\0';i++,k++)
	{}
	for(int j=0;string1[j]!='\0';j++,k++)
	{
		string1[k]=string2[j];
	}
	puts(string1);
	
	return 0;
}