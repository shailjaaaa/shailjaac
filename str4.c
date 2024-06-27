#include<stdio.h>
#include<string.h>
int main()
{
	int k=0;
	char string1[50];
	char string2[50];
	char string3[50];
	
	gets(string1);
	gets(string2);
	for(int i=0;string1[i]!='\0';i++,k++)
	{
		string3[k]=string1[i];
	}
	for(int j=0;string2[j]!='\0';j++,k++)
	{

	string3[k]=string2[j];	
	}
	string3[k]='\0';
	puts(string3);
	
	return 0;
}