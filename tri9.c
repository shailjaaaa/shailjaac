#include<stdio.h>
int main()
{
	char z='A';
	char i,j;
	for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		printf("%c\t",z);	
	z++;
	}
	printf("\n");
}}