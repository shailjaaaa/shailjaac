#include<stdio.h>
int main ()
{
	char c;
	int lowercase , uppercase;
	
	printf("Alphabet:");
	scanf("%c",&c);
	lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	
	if(uppercase || lowercase)
	{
	printf("Alphabet is vowel");
	}
	else
	{
	printf("Alphabet is consonant");
	}
return 0;
}	
