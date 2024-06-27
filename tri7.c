#include<stdio.h>
int main()
{
	char z='A';
	char i,j;
	for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		if(i%2!=0)
		{
		printf("%c\t",z);	
		}
	else{
	printf("%c\t",z+32);
	}z++;
	}
	printf("\n");
}}